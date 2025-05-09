﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AppType.h>
#include <aws/sagemaker/model/AppStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ResourceSpec.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeAppResult
  {
  public:
    AWS_SAGEMAKER_API DescribeAppResult();
    AWS_SAGEMAKER_API DescribeAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the app.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }
    inline DescribeAppResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline DescribeAppResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline DescribeAppResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of app.</p>
     */
    inline const AppType& GetAppType() const{ return m_appType; }
    inline void SetAppType(const AppType& value) { m_appType = value; }
    inline void SetAppType(AppType&& value) { m_appType = std::move(value); }
    inline DescribeAppResult& WithAppType(const AppType& value) { SetAppType(value); return *this;}
    inline DescribeAppResult& WithAppType(AppType&& value) { SetAppType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app.</p>
     */
    inline const Aws::String& GetAppName() const{ return m_appName; }
    inline void SetAppName(const Aws::String& value) { m_appName = value; }
    inline void SetAppName(Aws::String&& value) { m_appName = std::move(value); }
    inline void SetAppName(const char* value) { m_appName.assign(value); }
    inline DescribeAppResult& WithAppName(const Aws::String& value) { SetAppName(value); return *this;}
    inline DescribeAppResult& WithAppName(Aws::String&& value) { SetAppName(std::move(value)); return *this;}
    inline DescribeAppResult& WithAppName(const char* value) { SetAppName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain ID.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline DescribeAppResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline DescribeAppResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline DescribeAppResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user profile name.</p>
     */
    inline const Aws::String& GetUserProfileName() const{ return m_userProfileName; }
    inline void SetUserProfileName(const Aws::String& value) { m_userProfileName = value; }
    inline void SetUserProfileName(Aws::String&& value) { m_userProfileName = std::move(value); }
    inline void SetUserProfileName(const char* value) { m_userProfileName.assign(value); }
    inline DescribeAppResult& WithUserProfileName(const Aws::String& value) { SetUserProfileName(value); return *this;}
    inline DescribeAppResult& WithUserProfileName(Aws::String&& value) { SetUserProfileName(std::move(value)); return *this;}
    inline DescribeAppResult& WithUserProfileName(const char* value) { SetUserProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space. If this value is not set, then
     * <code>UserProfileName</code> must be set.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }
    inline DescribeAppResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline DescribeAppResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline DescribeAppResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline const AppStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const AppStatus& value) { m_status = value; }
    inline void SetStatus(AppStatus&& value) { m_status = std::move(value); }
    inline DescribeAppResult& WithStatus(const AppStatus& value) { SetStatus(value); return *this;}
    inline DescribeAppResult& WithStatus(AppStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last health check.</p>
     */
    inline const Aws::Utils::DateTime& GetLastHealthCheckTimestamp() const{ return m_lastHealthCheckTimestamp; }
    inline void SetLastHealthCheckTimestamp(const Aws::Utils::DateTime& value) { m_lastHealthCheckTimestamp = value; }
    inline void SetLastHealthCheckTimestamp(Aws::Utils::DateTime&& value) { m_lastHealthCheckTimestamp = std::move(value); }
    inline DescribeAppResult& WithLastHealthCheckTimestamp(const Aws::Utils::DateTime& value) { SetLastHealthCheckTimestamp(value); return *this;}
    inline DescribeAppResult& WithLastHealthCheckTimestamp(Aws::Utils::DateTime&& value) { SetLastHealthCheckTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last user's activity.
     * <code>LastUserActivityTimestamp</code> is also updated when SageMaker AI
     * performs health checks without user activity. As a result, this value is set to
     * the same value as <code>LastHealthCheckTimestamp</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUserActivityTimestamp() const{ return m_lastUserActivityTimestamp; }
    inline void SetLastUserActivityTimestamp(const Aws::Utils::DateTime& value) { m_lastUserActivityTimestamp = value; }
    inline void SetLastUserActivityTimestamp(Aws::Utils::DateTime&& value) { m_lastUserActivityTimestamp = std::move(value); }
    inline DescribeAppResult& WithLastUserActivityTimestamp(const Aws::Utils::DateTime& value) { SetLastUserActivityTimestamp(value); return *this;}
    inline DescribeAppResult& WithLastUserActivityTimestamp(Aws::Utils::DateTime&& value) { SetLastUserActivityTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the application.</p>  <p>After an application has
     * been shut down for 24 hours, SageMaker AI deletes all metadata for the
     * application. To be considered an update and retain application metadata,
     * applications must be restarted within 24 hours after the previous application
     * has been shut down. After this time window, creation of an application is
     * considered a new application rather than an update of the previous
     * application.</p> 
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeAppResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeAppResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeAppResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeAppResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeAppResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type and the Amazon Resource Name (ARN) of the SageMaker AI
     * image created on the instance.</p>
     */
    inline const ResourceSpec& GetResourceSpec() const{ return m_resourceSpec; }
    inline void SetResourceSpec(const ResourceSpec& value) { m_resourceSpec = value; }
    inline void SetResourceSpec(ResourceSpec&& value) { m_resourceSpec = std::move(value); }
    inline DescribeAppResult& WithResourceSpec(const ResourceSpec& value) { SetResourceSpec(value); return *this;}
    inline DescribeAppResult& WithResourceSpec(ResourceSpec&& value) { SetResourceSpec(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle configuration that runs before the default lifecycle
     * configuration</p>
     */
    inline const Aws::String& GetBuiltInLifecycleConfigArn() const{ return m_builtInLifecycleConfigArn; }
    inline void SetBuiltInLifecycleConfigArn(const Aws::String& value) { m_builtInLifecycleConfigArn = value; }
    inline void SetBuiltInLifecycleConfigArn(Aws::String&& value) { m_builtInLifecycleConfigArn = std::move(value); }
    inline void SetBuiltInLifecycleConfigArn(const char* value) { m_builtInLifecycleConfigArn.assign(value); }
    inline DescribeAppResult& WithBuiltInLifecycleConfigArn(const Aws::String& value) { SetBuiltInLifecycleConfigArn(value); return *this;}
    inline DescribeAppResult& WithBuiltInLifecycleConfigArn(Aws::String&& value) { SetBuiltInLifecycleConfigArn(std::move(value)); return *this;}
    inline DescribeAppResult& WithBuiltInLifecycleConfigArn(const char* value) { SetBuiltInLifecycleConfigArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAppResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAppResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAppResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_appArn;

    AppType m_appType;

    Aws::String m_appName;

    Aws::String m_domainId;

    Aws::String m_userProfileName;

    Aws::String m_spaceName;

    AppStatus m_status;

    Aws::Utils::DateTime m_lastHealthCheckTimestamp;

    Aws::Utils::DateTime m_lastUserActivityTimestamp;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_failureReason;

    ResourceSpec m_resourceSpec;

    Aws::String m_builtInLifecycleConfigArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
