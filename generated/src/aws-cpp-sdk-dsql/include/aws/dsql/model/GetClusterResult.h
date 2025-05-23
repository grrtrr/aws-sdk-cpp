﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/model/ClusterStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DSQL
{
namespace Model
{
  /**
   * <p>Output Mixin</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/GetClusterOutput">AWS
   * API Reference</a></p>
   */
  class GetClusterResult
  {
  public:
    AWS_DSQL_API GetClusterResult();
    AWS_DSQL_API GetClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DSQL_API GetClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the retrieved cluster.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline void SetIdentifier(const Aws::String& value) { m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifier.assign(value); }
    inline GetClusterResult& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline GetClusterResult& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline GetClusterResult& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the retrieved cluster.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetClusterResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetClusterResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetClusterResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the retrieved cluster.</p>
     */
    inline const ClusterStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ClusterStatus& value) { m_status = value; }
    inline void SetStatus(ClusterStatus&& value) { m_status = std::move(value); }
    inline GetClusterResult& WithStatus(const ClusterStatus& value) { SetStatus(value); return *this;}
    inline GetClusterResult& WithStatus(ClusterStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of when the cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetClusterResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetClusterResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether deletion protection is enabled in this cluster.</p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabled = value; }
    inline GetClusterResult& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The witness Region of the cluster. Applicable only for multi-Region
     * clusters.</p>
     */
    inline const Aws::String& GetWitnessRegion() const{ return m_witnessRegion; }
    inline void SetWitnessRegion(const Aws::String& value) { m_witnessRegion = value; }
    inline void SetWitnessRegion(Aws::String&& value) { m_witnessRegion = std::move(value); }
    inline void SetWitnessRegion(const char* value) { m_witnessRegion.assign(value); }
    inline GetClusterResult& WithWitnessRegion(const Aws::String& value) { SetWitnessRegion(value); return *this;}
    inline GetClusterResult& WithWitnessRegion(Aws::String&& value) { SetWitnessRegion(std::move(value)); return *this;}
    inline GetClusterResult& WithWitnessRegion(const char* value) { SetWitnessRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the clusters linked to the retrieved cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedClusterArns() const{ return m_linkedClusterArns; }
    inline void SetLinkedClusterArns(const Aws::Vector<Aws::String>& value) { m_linkedClusterArns = value; }
    inline void SetLinkedClusterArns(Aws::Vector<Aws::String>&& value) { m_linkedClusterArns = std::move(value); }
    inline GetClusterResult& WithLinkedClusterArns(const Aws::Vector<Aws::String>& value) { SetLinkedClusterArns(value); return *this;}
    inline GetClusterResult& WithLinkedClusterArns(Aws::Vector<Aws::String>&& value) { SetLinkedClusterArns(std::move(value)); return *this;}
    inline GetClusterResult& AddLinkedClusterArns(const Aws::String& value) { m_linkedClusterArns.push_back(value); return *this; }
    inline GetClusterResult& AddLinkedClusterArns(Aws::String&& value) { m_linkedClusterArns.push_back(std::move(value)); return *this; }
    inline GetClusterResult& AddLinkedClusterArns(const char* value) { m_linkedClusterArns.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;

    Aws::String m_arn;

    ClusterStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    bool m_deletionProtectionEnabled;

    Aws::String m_witnessRegion;

    Aws::Vector<Aws::String> m_linkedClusterArns;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
