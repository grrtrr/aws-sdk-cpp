﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/InstanceOnboardingJobStatus.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{
  /**
   * <p>The response for GetInstanceOnboardingJobStatus API.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/GetInstanceOnboardingJobStatusResponse">AWS
   * API Reference</a></p>
   */
  class GetInstanceOnboardingJobStatusResult
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API GetInstanceOnboardingJobStatusResult();
    AWS_CONNECTCAMPAIGNSV2_API GetInstanceOnboardingJobStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNSV2_API GetInstanceOnboardingJobStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const InstanceOnboardingJobStatus& GetConnectInstanceOnboardingJobStatus() const{ return m_connectInstanceOnboardingJobStatus; }
    inline void SetConnectInstanceOnboardingJobStatus(const InstanceOnboardingJobStatus& value) { m_connectInstanceOnboardingJobStatus = value; }
    inline void SetConnectInstanceOnboardingJobStatus(InstanceOnboardingJobStatus&& value) { m_connectInstanceOnboardingJobStatus = std::move(value); }
    inline GetInstanceOnboardingJobStatusResult& WithConnectInstanceOnboardingJobStatus(const InstanceOnboardingJobStatus& value) { SetConnectInstanceOnboardingJobStatus(value); return *this;}
    inline GetInstanceOnboardingJobStatusResult& WithConnectInstanceOnboardingJobStatus(InstanceOnboardingJobStatus&& value) { SetConnectInstanceOnboardingJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetInstanceOnboardingJobStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetInstanceOnboardingJobStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetInstanceOnboardingJobStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    InstanceOnboardingJobStatus m_connectInstanceOnboardingJobStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
