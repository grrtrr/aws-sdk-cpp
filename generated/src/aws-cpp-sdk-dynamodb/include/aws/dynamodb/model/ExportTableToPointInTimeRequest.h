﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/S3SseAlgorithm.h>
#include <aws/dynamodb/model/ExportFormat.h>
#include <aws/dynamodb/model/ExportType.h>
#include <aws/dynamodb/model/IncrementalExportSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class ExportTableToPointInTimeRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ExportTableToPointInTimeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportTableToPointInTime"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the table to export.</p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }
    inline ExportTableToPointInTimeRequest& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}
    inline ExportTableToPointInTimeRequest& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}
    inline ExportTableToPointInTimeRequest& WithTableArn(const char* value) { SetTableArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time in the past from which to export table data, counted in seconds from the
     * start of the Unix epoch. The table export will be a snapshot of the table's
     * state at this point in time.</p>
     */
    inline const Aws::Utils::DateTime& GetExportTime() const{ return m_exportTime; }
    inline bool ExportTimeHasBeenSet() const { return m_exportTimeHasBeenSet; }
    inline void SetExportTime(const Aws::Utils::DateTime& value) { m_exportTimeHasBeenSet = true; m_exportTime = value; }
    inline void SetExportTime(Aws::Utils::DateTime&& value) { m_exportTimeHasBeenSet = true; m_exportTime = std::move(value); }
    inline ExportTableToPointInTimeRequest& WithExportTime(const Aws::Utils::DateTime& value) { SetExportTime(value); return *this;}
    inline ExportTableToPointInTimeRequest& WithExportTime(Aws::Utils::DateTime&& value) { SetExportTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Providing a <code>ClientToken</code> makes the call to
     * <code>ExportTableToPointInTimeInput</code> idempotent, meaning that multiple
     * identical calls have the same effect as one single call.</p> <p>A client token
     * is valid for 8 hours after the first request that uses it is completed. After 8
     * hours, any request with the same client token is treated as a new request. Do
     * not resubmit the same request with the same client token for more than 8 hours,
     * or the result might not be idempotent.</p> <p>If you submit a request with the
     * same client token but a change in other parameters within the 8-hour idempotency
     * window, DynamoDB returns an <code>ImportConflictException</code>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ExportTableToPointInTimeRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ExportTableToPointInTimeRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ExportTableToPointInTimeRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket to export the snapshot to.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }
    inline ExportTableToPointInTimeRequest& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}
    inline ExportTableToPointInTimeRequest& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}
    inline ExportTableToPointInTimeRequest& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the bucket the export
     * will be stored in.</p>  <p>S3BucketOwner is a required parameter when
     * exporting to a S3 bucket in another account.</p> 
     */
    inline const Aws::String& GetS3BucketOwner() const{ return m_s3BucketOwner; }
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
    inline void SetS3BucketOwner(const Aws::String& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = value; }
    inline void SetS3BucketOwner(Aws::String&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::move(value); }
    inline void SetS3BucketOwner(const char* value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner.assign(value); }
    inline ExportTableToPointInTimeRequest& WithS3BucketOwner(const Aws::String& value) { SetS3BucketOwner(value); return *this;}
    inline ExportTableToPointInTimeRequest& WithS3BucketOwner(Aws::String&& value) { SetS3BucketOwner(std::move(value)); return *this;}
    inline ExportTableToPointInTimeRequest& WithS3BucketOwner(const char* value) { SetS3BucketOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket prefix to use as the file name and path of the exported
     * snapshot.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }
    inline ExportTableToPointInTimeRequest& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}
    inline ExportTableToPointInTimeRequest& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}
    inline ExportTableToPointInTimeRequest& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of encryption used on the bucket where export data will be stored. Valid
     * values for <code>S3SseAlgorithm</code> are:</p> <ul> <li> <p>
     * <code>AES256</code> - server-side encryption with Amazon S3 managed keys</p>
     * </li> <li> <p> <code>KMS</code> - server-side encryption with KMS managed
     * keys</p> </li> </ul>
     */
    inline const S3SseAlgorithm& GetS3SseAlgorithm() const{ return m_s3SseAlgorithm; }
    inline bool S3SseAlgorithmHasBeenSet() const { return m_s3SseAlgorithmHasBeenSet; }
    inline void SetS3SseAlgorithm(const S3SseAlgorithm& value) { m_s3SseAlgorithmHasBeenSet = true; m_s3SseAlgorithm = value; }
    inline void SetS3SseAlgorithm(S3SseAlgorithm&& value) { m_s3SseAlgorithmHasBeenSet = true; m_s3SseAlgorithm = std::move(value); }
    inline ExportTableToPointInTimeRequest& WithS3SseAlgorithm(const S3SseAlgorithm& value) { SetS3SseAlgorithm(value); return *this;}
    inline ExportTableToPointInTimeRequest& WithS3SseAlgorithm(S3SseAlgorithm&& value) { SetS3SseAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS managed key used to encrypt the S3 bucket where export data
     * will be stored (if applicable).</p>
     */
    inline const Aws::String& GetS3SseKmsKeyId() const{ return m_s3SseKmsKeyId; }
    inline bool S3SseKmsKeyIdHasBeenSet() const { return m_s3SseKmsKeyIdHasBeenSet; }
    inline void SetS3SseKmsKeyId(const Aws::String& value) { m_s3SseKmsKeyIdHasBeenSet = true; m_s3SseKmsKeyId = value; }
    inline void SetS3SseKmsKeyId(Aws::String&& value) { m_s3SseKmsKeyIdHasBeenSet = true; m_s3SseKmsKeyId = std::move(value); }
    inline void SetS3SseKmsKeyId(const char* value) { m_s3SseKmsKeyIdHasBeenSet = true; m_s3SseKmsKeyId.assign(value); }
    inline ExportTableToPointInTimeRequest& WithS3SseKmsKeyId(const Aws::String& value) { SetS3SseKmsKeyId(value); return *this;}
    inline ExportTableToPointInTimeRequest& WithS3SseKmsKeyId(Aws::String&& value) { SetS3SseKmsKeyId(std::move(value)); return *this;}
    inline ExportTableToPointInTimeRequest& WithS3SseKmsKeyId(const char* value) { SetS3SseKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format for the exported data. Valid values for <code>ExportFormat</code>
     * are <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline const ExportFormat& GetExportFormat() const{ return m_exportFormat; }
    inline bool ExportFormatHasBeenSet() const { return m_exportFormatHasBeenSet; }
    inline void SetExportFormat(const ExportFormat& value) { m_exportFormatHasBeenSet = true; m_exportFormat = value; }
    inline void SetExportFormat(ExportFormat&& value) { m_exportFormatHasBeenSet = true; m_exportFormat = std::move(value); }
    inline ExportTableToPointInTimeRequest& WithExportFormat(const ExportFormat& value) { SetExportFormat(value); return *this;}
    inline ExportTableToPointInTimeRequest& WithExportFormat(ExportFormat&& value) { SetExportFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choice of whether to execute as a full export or incremental export. Valid
     * values are FULL_EXPORT or INCREMENTAL_EXPORT. The default value is FULL_EXPORT.
     * If INCREMENTAL_EXPORT is provided, the IncrementalExportSpecification must also
     * be used.</p>
     */
    inline const ExportType& GetExportType() const{ return m_exportType; }
    inline bool ExportTypeHasBeenSet() const { return m_exportTypeHasBeenSet; }
    inline void SetExportType(const ExportType& value) { m_exportTypeHasBeenSet = true; m_exportType = value; }
    inline void SetExportType(ExportType&& value) { m_exportTypeHasBeenSet = true; m_exportType = std::move(value); }
    inline ExportTableToPointInTimeRequest& WithExportType(const ExportType& value) { SetExportType(value); return *this;}
    inline ExportTableToPointInTimeRequest& WithExportType(ExportType&& value) { SetExportType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional object containing the parameters specific to an incremental
     * export.</p>
     */
    inline const IncrementalExportSpecification& GetIncrementalExportSpecification() const{ return m_incrementalExportSpecification; }
    inline bool IncrementalExportSpecificationHasBeenSet() const { return m_incrementalExportSpecificationHasBeenSet; }
    inline void SetIncrementalExportSpecification(const IncrementalExportSpecification& value) { m_incrementalExportSpecificationHasBeenSet = true; m_incrementalExportSpecification = value; }
    inline void SetIncrementalExportSpecification(IncrementalExportSpecification&& value) { m_incrementalExportSpecificationHasBeenSet = true; m_incrementalExportSpecification = std::move(value); }
    inline ExportTableToPointInTimeRequest& WithIncrementalExportSpecification(const IncrementalExportSpecification& value) { SetIncrementalExportSpecification(value); return *this;}
    inline ExportTableToPointInTimeRequest& WithIncrementalExportSpecification(IncrementalExportSpecification&& value) { SetIncrementalExportSpecification(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    Aws::Utils::DateTime m_exportTime;
    bool m_exportTimeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3BucketOwner;
    bool m_s3BucketOwnerHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;

    S3SseAlgorithm m_s3SseAlgorithm;
    bool m_s3SseAlgorithmHasBeenSet = false;

    Aws::String m_s3SseKmsKeyId;
    bool m_s3SseKmsKeyIdHasBeenSet = false;

    ExportFormat m_exportFormat;
    bool m_exportFormatHasBeenSet = false;

    ExportType m_exportType;
    bool m_exportTypeHasBeenSet = false;

    IncrementalExportSpecification m_incrementalExportSpecification;
    bool m_incrementalExportSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
