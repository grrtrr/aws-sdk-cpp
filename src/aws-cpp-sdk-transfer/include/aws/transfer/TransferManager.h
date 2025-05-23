/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/transfer/TransferHandle.h>
#include <aws/s3/S3Client.h>
#include <aws/s3/model/PutObjectRequest.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/CreateMultipartUploadRequest.h>
#include <aws/s3/model/UploadPartRequest.h>
#include <aws/s3/model/CompletedPart.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/ResourceManager.h>
#include <aws/core/client/AsyncCallerContext.h>

#include <memory>

namespace Aws
{    
    namespace Transfer
    {
        class TransferManager;

        typedef std::function<void(const TransferManager*, const std::shared_ptr<const TransferHandle>&)> UploadProgressCallback;
        typedef std::function<void(const TransferManager*, const std::shared_ptr<const TransferHandle>&)> DownloadProgressCallback;
        typedef std::function<void(const TransferManager*, const std::shared_ptr<const TransferHandle>&)> TransferStatusUpdatedCallback;
        typedef std::function<void(const TransferManager*, const std::shared_ptr<const TransferHandle>&, const Aws::Client::AWSError<Aws::S3::S3Errors>&)> ErrorCallback;
        typedef std::function<void(const TransferManager*, const std::shared_ptr<const TransferHandle>&)> TransferInitiatedCallback;

        const uint64_t MB5 = 5 * 1024 * 1024;

        /**
         * Configuration for use with TransferManager. The data here will be copied directly to TransferManager.
         */
        struct TransferManagerConfiguration
        {
            TransferManagerConfiguration(Aws::Utils::Threading::Executor* executor)
              : s3Client(nullptr),
                transferExecutor(executor),
                computeContentMD5(false),
                transferBufferMaxHeapSize(10 * MB5),
                bufferSize(MB5)
            {
            }
            /**
             * S3 Client to use for transfers. You are responsible for setting this.
             */
            std::shared_ptr<Aws::S3::S3Client> s3Client;
            /**
             * Executor to use for the transfer manager threads. This probably shouldn't be the same executor
             * you are using for your client configuration. This executor will be used in a different context than the s3 client is used.
             * It is not a bug to use the same executor, but at least be aware that this is how the manager will be used.
             */
            Aws::Utils::Threading::Executor* transferExecutor = nullptr;

            /**
             * Threading Executor shared pointer.
             * Created and owned by Transfer manager if no raw pointer `transferExecutor` is provided.
             */
            std::shared_ptr<Aws::Utils::Threading::Executor> spExecutor = nullptr;

            /**
             * Threading Executor factory method. Default creates a factory that creates DefaultExecutor
             */
            std::function<std::shared_ptr<Utils::Threading::Executor>()> executorCreateFn;

            /**
             * deprecated, will now automatically use CR64 checksums. use a different checksum by specifying the
             * checksumAlgorithm parameter.
             */
            bool computeContentMD5 = false;
            /**
             * If you have special arguments you want passed to our put object calls, put them here. We will copy the template for each put object call
             * overriding the body stream, bucket, and key. If object metadata is passed through, we will override that as well.
             */
            Aws::S3::Model::PutObjectRequest putObjectTemplate;
            /**
             * If you have special arguments you want passed to our get object calls, put them here. We will copy the template for each put object call
             * overriding the body stream, bucket, and key. If object metadata is passed through, we will override that as well.
             */
            Aws::S3::Model::GetObjectRequest getObjectTemplate;
            /**
             * If you have special arguments you want passed to our head object calls, put them here. We will copy the template for each call
             * overriding the body stream, bucket, and key. If object metadata is passed through, we will override that as well.
             */
            Aws::S3::Model::HeadObjectRequest headObjectTemplate;
            /**
             * If you have special arguments you want passed to our create multipart upload calls, put them here. We will copy the template for each call
             * overriding the body stream, bucket, and key. If object metadata is passed through, we will override that as well.
             */
            Aws::S3::Model::CreateMultipartUploadRequest createMultipartUploadTemplate;
            /**
             * If you have special arguments you want passed to our upload part calls, put them here. We will copy the template for each call
             * overriding the body stream, bucket, and key. If object metadata is passed through, we will override that as well.
             */             
            Aws::S3::Model::UploadPartRequest uploadPartTemplate;
            /**
             * Maximum size of the working buffers to use. This is not the same thing as max heap size for your process. This is the maximum amount of memory we will
             * allocate for all transfer buffers. default is 50MB.
             * If you are using Aws::Utils::Threading::PooledThreadExecutor for transferExecutor, this size should be greater than bufferSize * poolSize.
             */
            uint64_t transferBufferMaxHeapSize = 10 * MB5;
            /**
             * Defaults to 5MB. If you are uploading large files,  (larger than 50GB, this needs to be specified to be something larger than 5MB. Also keep in mind that you may need
             * to increase your max heap size if this is something you plan on increasing.
             */
            uint64_t bufferSize = MB5;

            /**
             * Callback to receive progress updates for uploads.
             */
            UploadProgressCallback uploadProgressCallback;
            /**
             * Callback to receive progress updates for downloads.
             */
            DownloadProgressCallback downloadProgressCallback;
            /**
             * Callback to receive updates on the status of the transfer.
             */
            TransferStatusUpdatedCallback transferStatusUpdatedCallback;
            /**
             * Callback to receive initiated transfers for the directory operations.
             */
            TransferInitiatedCallback transferInitiatedCallback;
            /**
             * Callback to receive all errors that are thrown over the course of a transfer.
             */
            ErrorCallback errorCallback;
            /**
             * To support Customer Access Log Information when access S3. 
             * https://docs.aws.amazon.com/AmazonS3/latest/dev/LogFormat.html
             * Note: query string key not started with "x-" will be filtered out.
             * key/val of map entries will be key/val of query strings.
             */
            Aws::Map<Aws::String, Aws::String> customizedAccessLogTag;

            /**
             * Set the Checksum Algorithm for the transfer manager to use for multipart
             * upload. Defaults to CRC64-NVME.
             */
            Aws::S3::Model::ChecksumAlgorithm checksumAlgorithm = S3::Model::ChecksumAlgorithm::CRC64NVME;
        };        

        /**
         * This is a utility around Amazon Simple Storage Service. It can Upload large files via parts in parallel, Upload files less than 5MB in single PutObject, and download files via GetObject,
         *  If a transfer fails, it can be retried for an upload. For a download, there is nothing to retry in case of failure. Just download it again. You can also abort any in progress transfers.
         *  The key interface for controlling and knowing the status of your upload is the TransferHandle. An instance of TransferHandle is returned from each of the public functions in this interface.
         *  Keep a reference to the pointer. Each of the callbacks will also pass the handle that has received an update. None of the public methods in this interface block.
         */
        class AWS_TRANSFER_API TransferManager : public std::enable_shared_from_this<TransferManager>
        {
        public:
            /**
             * Create a new TransferManager instance initialized with config.
             */
            static std::shared_ptr<TransferManager> Create(const TransferManagerConfiguration& config);

            /**
             * Blocks the calling thread until all this instance TransferManager operations have finished.
             *
             * TransferManager API may outlive InitAPI{...}ShutdownAPI scope if TransferHandle status were not completed.
             * Use this method before ShutdownAPI call if individual TransferHandles are not verified for completion.
             * @param timeoutMs, how many milliseconds to block wait
             * @return COMPLETED if all tasks are finished, IN_PROGRESS if timeoutMs was reached.
             */
            TransferStatus WaitUntilAllFinished(int64_t timeoutMs = std::numeric_limits<int64_t>::max());

            /**
             * Cancels all TransferManager operations in the current context of the TransferManager.
             * Non-blocking, please call `WaitUntilAllFinished` method if ShutdownAPI() is going to follow.
             */
            void CancelAll();

            ~TransferManager();

            /**
             * Uploads a file via filename, to bucketName/keyName in S3. contentType and metadata will be added to the object. If the object
             * is larger than the configured bufferSize, then a multi-part upload will be performed. Keeps file to be unopened until doing
             * actual upload, this is useful for uploading directories with many small files (avoid having too many open files, which may
             * exceed system limit) If an optional checksum is given, the checksum will be sent as either the checksum header or the ful
             * body checksum on the multipart upload.
             */
            std::shared_ptr<TransferHandle> UploadFile(const Aws::String& fileName, const Aws::String& bucketName,
                                                       const Aws::String& keyName, const Aws::String& contentType,
                                                       const Aws::Map<Aws::String, Aws::String>& metadata,
                                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                       const Aws::String& precalculatedChecksum = {});

            /**
             * Uploads the contents of stream, to bucketName/keyName in S3. contentType and metadata will be added to the object. If the
             * object is larger than the configured bufferSize, then a multi-part upload will be performed. If an optional checksum is
             * given, the checksum will be sent as either the checksum header or the ful body checksum on the multipart upload.
             */
            std::shared_ptr<TransferHandle> UploadFile(const std::shared_ptr<Aws::IOStream>& stream, const Aws::String& bucketName,
                                                       const Aws::String& keyName, const Aws::String& contentType,
                                                       const Aws::Map<Aws::String, Aws::String>& metadata,
                                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                       const Aws::String& precalculatedChecksum = {});

            /**
             * Downloads the contents of bucketName/keyName in S3 to the file specified by writeToFile. This will perform a GetObject operation.
             */
            std::shared_ptr<TransferHandle> DownloadFile(const Aws::String& bucketName,
                                                         const Aws::String& keyName,
                                                         const Aws::String& writeToFile,
                                                         const DownloadConfiguration& downloadConfig = DownloadConfiguration(),
                                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr);
            /**
             * Downloads the contents of bucketName/keyName in S3 and writes it to writeToStream. This will perform a GetObject operation.
             */
            std::shared_ptr<TransferHandle> DownloadFile(const Aws::String& bucketName, 
                                                         const Aws::String& keyName, 
                                                         CreateDownloadStreamCallback writeToStreamfn, 
                                                         const DownloadConfiguration& downloadConfig = DownloadConfiguration(),
                                                         const Aws::String& writeToFile = "",
                                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr);

            /**
             * Downloads the contents of bucketName/keyName in S3 and writes it to writeToStream. This will perform a GetObject operation for the given range.
             */
            std::shared_ptr<TransferHandle> DownloadFile(const Aws::String& bucketName, 
                                                         const Aws::String& keyName, 
                                                         uint64_t fileOffset,
                                                         uint64_t downloadBytes,
                                                         CreateDownloadStreamCallback writeToStreamfn, 
                                                         const DownloadConfiguration& downloadConfig = DownloadConfiguration(),
                                                         const Aws::String& writeToFile = "",
                                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr);

            /**
             * Retry an download that failed from a previous DownloadFile operation. If a multi-part download was used, only the failed parts will be re-fetched.
             */
            std::shared_ptr<TransferHandle> RetryDownload(const std::shared_ptr<TransferHandle>& retryHandle);

            /**
             * Retry an upload that failed from a previous UploadFile operation. If a multi-part upload was used, only the failed parts will be re-sent.
             */
            std::shared_ptr<TransferHandle> RetryUpload(const Aws::String& fileName, const std::shared_ptr<TransferHandle>& retryHandle);
            /**
             * Retry an upload that failed from a previous UploadFile operation. If a multi-part upload was used, only the failed parts will be re-sent.
             */
            std::shared_ptr<TransferHandle> RetryUpload(const std::shared_ptr<Aws::IOStream>& stream, const std::shared_ptr<TransferHandle>& retryHandle);
            
            /**
             * By default, multi-part uploads will remain in a FAILED state if they fail, or a CANCELED state if they were canceled. Leaving failed uploads around
             * still costs the owner of the bucket money. If you know you will not be retrying the request, abort the request after canceling it or if it fails and you don't
             * intend to retry it.
             */
            void AbortMultipartUpload(const std::shared_ptr<TransferHandle>& inProgressHandle);

            /**
             * Uploads entire contents of directory to Amazon S3 bucket and stores them in a directory starting at prefix. This is an asynchronous method. You will receive notifications
             * that an upload has started via the transferInitiatedCallback callback function in your configuration. If you do not set this callback, then you will not be able to handle
             * the file transfers.
             *
             * directory: the absolute directory on disk to upload
             * bucketName: the name of the S3 bucket to upload to
             * prefix: the prefix to put on all objects uploaded (e.g. put them in x directory in the bucket).
             */
            void UploadDirectory(const Aws::String& directory, const Aws::String& bucketName, const Aws::String& prefix, const Aws::Map<Aws::String, Aws::String>& metadata);

            /**
            * Downloads entire contents of an Amazon S3 bucket starting at prefix stores them in a directory (not including the prefix). This is an asynchronous method. You will receive notifications
            * that a download has started via the transferInitiatedCallback callback function in your configuration. If you do not set this callback, then you will not be able to handle
            * the file transfers. If an error occurs prior to the transfer being initiated (e.g. list objects fails, then an error will be passed through the errorCallback).
            *
            * directory: the absolute directory on disk to download to
            * bucketName: the name of the S3 bucket to download from
            * prefix: the prefix in the bucket to use as the root directory (e.g. download all objects at x prefix in S3 and then store them starting in directory with the prefix stripped out).
            */
            void DownloadToDirectory(const Aws::String& directory, const Aws::String& bucketName, const Aws::String& prefix = Aws::String());

        private:
            /**
             * To ensure TransferManager is always created as a shared_ptr, since it inherits enable_shared_from_this.
             */
            TransferManager(const TransferManagerConfiguration& config);

            /**
             * Creates TransferHandle.
             * fileName is not necessary if this handle will upload data from an IOStream
             */
            std::shared_ptr<TransferHandle> CreateUploadFileHandle(Aws::IOStream* fileStream, const Aws::String& bucketName,
                                                                   const Aws::String& keyName, const Aws::String& contentType,
                                                                   const Aws::Map<Aws::String, Aws::String>& metadata,
                                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context,
                                                                   const Aws::String& fileName = "", const Aws::String& checksum = "");

            /**
             * Submits the actual task to task scheduler
             */
            std::shared_ptr<TransferHandle> SubmitUpload(const std::shared_ptr<TransferHandle>& handle, const std::shared_ptr<Aws::IOStream>& fileStream = nullptr);
            
            bool MultipartUploadSupported(uint64_t length) const;
            bool InitializePartsForDownload(const std::shared_ptr<TransferHandle>& handle);

            void DoMultiPartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle);
            void DoSinglePartUpload(const std::shared_ptr<Aws::IOStream>& streamToPut, const std::shared_ptr<TransferHandle>& handle);

            void DoMultiPartUpload(const std::shared_ptr<TransferHandle>& handle);
            void DoSinglePartUpload(const std::shared_ptr<TransferHandle>& handle);

            void DoDownload(const std::shared_ptr<TransferHandle>& handle);
            void DoSinglePartDownload(const std::shared_ptr<TransferHandle>& handle);

            void HandleGetObjectResponse(const Aws::S3::S3Client* client, 
                                         const Aws::S3::Model::GetObjectRequest& request,
                                         const Aws::S3::Model::GetObjectOutcome& outcome, 
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context);

            void WaitForCancellationAndAbortUpload(const std::shared_ptr<TransferHandle>& canceledHandle);
            void HandleUploadPartResponse(const Aws::S3::S3Client*, const Aws::S3::Model::UploadPartRequest&, const Aws::S3::Model::UploadPartOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&);
            void HandlePutObjectResponse(const Aws::S3::S3Client*, const Aws::S3::Model::PutObjectRequest&, const Aws::S3::Model::PutObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&);
            void HandleListObjectsResponse(const Aws::S3::S3Client*, const Aws::S3::Model::ListObjectsV2Request&, const Aws::S3::Model::ListObjectsV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&);

            TransferStatus DetermineIfFailedOrCanceled(const TransferHandle&) const;
            void TriggerUploadProgressCallback(const std::shared_ptr<const TransferHandle>&) const;
            void TriggerDownloadProgressCallback(const std::shared_ptr<const TransferHandle>&) const;
            void TriggerTransferStatusUpdatedCallback(const std::shared_ptr<const TransferHandle>&) const;
            void TriggerErrorCallback(const std::shared_ptr<const TransferHandle>&, const Aws::Client::AWSError<Aws::S3::S3Errors>& error)const;

            /**
             * Internal methods for tracking currently running TransferHandles
             * @param handle
             */
            void AddTask(std::shared_ptr<TransferHandle> handle);
            void RemoveTask(const std::shared_ptr<TransferHandle>& handle);

            /**
             * Sets the checksum on a Completed Part based on the state, and the algorithm selected.
             * @param state The state of the completed part as tracker by the transfer manager.
             * @param part The completed part of the MPU.
             */
            void SetChecksumForAlgorithm(const std::shared_ptr<PartState>& state, Aws::S3::Model::CompletedPart& part);

            static Aws::String DetermineFilePath(const Aws::String& directory, const Aws::String& prefix, const Aws::String& keyName);

            Aws::Utils::ExclusiveOwnershipResourceManager<unsigned char*> m_bufferManager;
            TransferManagerConfiguration m_transferConfig;

            mutable Aws::UnorderedSet<std::shared_ptr<TransferHandle>> m_tasks;
            mutable std::condition_variable m_tasksSignal;
            mutable std::mutex m_tasksMutex;

        protected:
            static bool IsWithinParentDirectory(Aws::String parentDirectory, Aws::String filePath);
        };

        
    }
}
