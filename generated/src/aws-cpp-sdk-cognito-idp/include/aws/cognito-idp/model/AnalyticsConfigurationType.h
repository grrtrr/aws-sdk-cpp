﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The settings for Amazon Pinpoint analytics configuration. With an analytics
   * configuration, your application can collect user-activity metrics for user
   * notifications with a Amazon Pinpoint campaign.</p> <p>Amazon Pinpoint isn't
   * available in all Amazon Web Services Regions. For a list of available Regions,
   * see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-pinpoint-integration.html#cognito-user-pools-find-region-mappings">Amazon
   * Cognito and Amazon Pinpoint Region availability</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AnalyticsConfigurationType">AWS
   * API Reference</a></p>
   */
  class AnalyticsConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AnalyticsConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API AnalyticsConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AnalyticsConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Your Amazon Pinpoint project ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline AnalyticsConfigurationType& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline AnalyticsConfigurationType& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline AnalyticsConfigurationType& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon Pinpoint project that you want to
     * connect to your user pool app client. Amazon Cognito publishes events to the
     * Amazon Pinpoint project that <code>ApplicationArn</code> declares. You can also
     * configure your application to pass an endpoint ID in the
     * <code>AnalyticsMetadata</code> parameter of sign-in operations. The endpoint ID
     * is information about the destination for push notifications</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }
    inline AnalyticsConfigurationType& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline AnalyticsConfigurationType& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline AnalyticsConfigurationType& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an Identity and Access Management role that has the permissions
     * required for Amazon Cognito to publish events to Amazon Pinpoint analytics.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline AnalyticsConfigurationType& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline AnalyticsConfigurationType& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline AnalyticsConfigurationType& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_create_for-user_externalid.html">external
     * ID</a> of the role that Amazon Cognito assumes to send analytics data to Amazon
     * Pinpoint.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }
    inline AnalyticsConfigurationType& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}
    inline AnalyticsConfigurationType& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}
    inline AnalyticsConfigurationType& WithExternalId(const char* value) { SetExternalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>UserDataShared</code> is <code>true</code>, Amazon Cognito includes
     * user data in the events that it publishes to Amazon Pinpoint analytics.</p>
     */
    inline bool GetUserDataShared() const{ return m_userDataShared; }
    inline bool UserDataSharedHasBeenSet() const { return m_userDataSharedHasBeenSet; }
    inline void SetUserDataShared(bool value) { m_userDataSharedHasBeenSet = true; m_userDataShared = value; }
    inline AnalyticsConfigurationType& WithUserDataShared(bool value) { SetUserDataShared(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;

    bool m_userDataShared;
    bool m_userDataSharedHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
