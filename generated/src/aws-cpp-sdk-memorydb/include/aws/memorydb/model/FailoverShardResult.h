﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/Cluster.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MemoryDB
{
namespace Model
{
  class FailoverShardResult
  {
  public:
    AWS_MEMORYDB_API FailoverShardResult();
    AWS_MEMORYDB_API FailoverShardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API FailoverShardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The cluster being failed over.</p>
     */
    inline const Cluster& GetCluster() const{ return m_cluster; }
    inline void SetCluster(const Cluster& value) { m_cluster = value; }
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }
    inline FailoverShardResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}
    inline FailoverShardResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline FailoverShardResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline FailoverShardResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline FailoverShardResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Cluster m_cluster;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
