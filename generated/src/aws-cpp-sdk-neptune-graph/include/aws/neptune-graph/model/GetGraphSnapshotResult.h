﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/neptune-graph/model/SnapshotStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NeptuneGraph
{
namespace Model
{
  class GetGraphSnapshotResult
  {
  public:
    AWS_NEPTUNEGRAPH_API GetGraphSnapshotResult();
    AWS_NEPTUNEGRAPH_API GetGraphSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API GetGraphSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the graph snapshot.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetGraphSnapshotResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetGraphSnapshotResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetGraphSnapshotResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot name. For example: <code>my-snapshot-1</code>.</p> <p>The name
     * must contain from 1 to 63 letters, numbers, or hyphens, and its first character
     * must be a letter. It cannot end with a hyphen or contain two consecutive
     * hyphens. Only lowercase letters are allowed.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetGraphSnapshotResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetGraphSnapshotResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetGraphSnapshotResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the graph snapshot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetGraphSnapshotResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetGraphSnapshotResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetGraphSnapshotResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The graph identifier for the graph for which a snapshot is to be created.</p>
     */
    inline const Aws::String& GetSourceGraphId() const{ return m_sourceGraphId; }
    inline void SetSourceGraphId(const Aws::String& value) { m_sourceGraphId = value; }
    inline void SetSourceGraphId(Aws::String&& value) { m_sourceGraphId = std::move(value); }
    inline void SetSourceGraphId(const char* value) { m_sourceGraphId.assign(value); }
    inline GetGraphSnapshotResult& WithSourceGraphId(const Aws::String& value) { SetSourceGraphId(value); return *this;}
    inline GetGraphSnapshotResult& WithSourceGraphId(Aws::String&& value) { SetSourceGraphId(std::move(value)); return *this;}
    inline GetGraphSnapshotResult& WithSourceGraphId(const char* value) { SetSourceGraphId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the snapshot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreateTime() const{ return m_snapshotCreateTime; }
    inline void SetSnapshotCreateTime(const Aws::Utils::DateTime& value) { m_snapshotCreateTime = value; }
    inline void SetSnapshotCreateTime(Aws::Utils::DateTime&& value) { m_snapshotCreateTime = std::move(value); }
    inline GetGraphSnapshotResult& WithSnapshotCreateTime(const Aws::Utils::DateTime& value) { SetSnapshotCreateTime(value); return *this;}
    inline GetGraphSnapshotResult& WithSnapshotCreateTime(Aws::Utils::DateTime&& value) { SetSnapshotCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the graph snapshot.</p>
     */
    inline const SnapshotStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SnapshotStatus& value) { m_status = value; }
    inline void SetStatus(SnapshotStatus&& value) { m_status = std::move(value); }
    inline GetGraphSnapshotResult& WithStatus(const SnapshotStatus& value) { SetStatus(value); return *this;}
    inline GetGraphSnapshotResult& WithStatus(SnapshotStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key used to encrypt and decrypt the snapshot.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const{ return m_kmsKeyIdentifier; }
    inline void SetKmsKeyIdentifier(const Aws::String& value) { m_kmsKeyIdentifier = value; }
    inline void SetKmsKeyIdentifier(Aws::String&& value) { m_kmsKeyIdentifier = std::move(value); }
    inline void SetKmsKeyIdentifier(const char* value) { m_kmsKeyIdentifier.assign(value); }
    inline GetGraphSnapshotResult& WithKmsKeyIdentifier(const Aws::String& value) { SetKmsKeyIdentifier(value); return *this;}
    inline GetGraphSnapshotResult& WithKmsKeyIdentifier(Aws::String&& value) { SetKmsKeyIdentifier(std::move(value)); return *this;}
    inline GetGraphSnapshotResult& WithKmsKeyIdentifier(const char* value) { SetKmsKeyIdentifier(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetGraphSnapshotResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetGraphSnapshotResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetGraphSnapshotResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;

    Aws::String m_sourceGraphId;

    Aws::Utils::DateTime m_snapshotCreateTime;

    SnapshotStatus m_status;

    Aws::String m_kmsKeyIdentifier;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
