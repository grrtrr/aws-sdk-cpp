﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/UserPoolPolicyType.h>
#include <aws/cognito-idp/model/DeletionProtectionType.h>
#include <aws/cognito-idp/model/LambdaConfigType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/VerificationMessageTemplateType.h>
#include <aws/cognito-idp/model/UserAttributeUpdateSettingsType.h>
#include <aws/cognito-idp/model/UserPoolMfaType.h>
#include <aws/cognito-idp/model/DeviceConfigurationType.h>
#include <aws/cognito-idp/model/EmailConfigurationType.h>
#include <aws/cognito-idp/model/SmsConfigurationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AdminCreateUserConfigType.h>
#include <aws/cognito-idp/model/UserPoolAddOnsType.h>
#include <aws/cognito-idp/model/UsernameConfigurationType.h>
#include <aws/cognito-idp/model/AccountRecoverySettingType.h>
#include <aws/cognito-idp/model/UserPoolTierType.h>
#include <aws/cognito-idp/model/SchemaAttributeType.h>
#include <aws/cognito-idp/model/VerifiedAttributeType.h>
#include <aws/cognito-idp/model/AliasAttributeType.h>
#include <aws/cognito-idp/model/UsernameAttributeType.h>
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
   * <p>The configuration of a user pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolType">AWS
   * API Reference</a></p>
   */
  class UserPoolType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolType();
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the user pool.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UserPoolType& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UserPoolType& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UserPoolType& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user pool.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UserPoolType& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UserPoolType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UserPoolType& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of user pool policies. Contains the policy that sets
     * password-complexity requirements.</p>
     */
    inline const UserPoolPolicyType& GetPolicies() const{ return m_policies; }
    inline bool PoliciesHasBeenSet() const { return m_policiesHasBeenSet; }
    inline void SetPolicies(const UserPoolPolicyType& value) { m_policiesHasBeenSet = true; m_policies = value; }
    inline void SetPolicies(UserPoolPolicyType&& value) { m_policiesHasBeenSet = true; m_policies = std::move(value); }
    inline UserPoolType& WithPolicies(const UserPoolPolicyType& value) { SetPolicies(value); return *this;}
    inline UserPoolType& WithPolicies(UserPoolPolicyType&& value) { SetPolicies(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When active, <code>DeletionProtection</code> prevents accidental deletion of
     * your user pool. Before you can delete a user pool that you have protected
     * against deletion, you must deactivate this feature.</p> <p>When you try to
     * delete a protected user pool in a <code>DeleteUserPool</code> API request,
     * Amazon Cognito returns an <code>InvalidParameterException</code> error. To
     * delete a protected user pool, send a new <code>DeleteUserPool</code> request
     * after you deactivate deletion protection in an <code>UpdateUserPool</code> API
     * request.</p>
     */
    inline const DeletionProtectionType& GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(const DeletionProtectionType& value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline void SetDeletionProtection(DeletionProtectionType&& value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = std::move(value); }
    inline UserPoolType& WithDeletionProtection(const DeletionProtectionType& value) { SetDeletionProtection(value); return *this;}
    inline UserPoolType& WithDeletionProtection(DeletionProtectionType&& value) { SetDeletionProtection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of user pool Lambda triggers. Amazon Cognito invokes triggers at
     * several possible stages of user pool operations. Triggers can modify the outcome
     * of the operations that invoked them.</p>
     */
    inline const LambdaConfigType& GetLambdaConfig() const{ return m_lambdaConfig; }
    inline bool LambdaConfigHasBeenSet() const { return m_lambdaConfigHasBeenSet; }
    inline void SetLambdaConfig(const LambdaConfigType& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = value; }
    inline void SetLambdaConfig(LambdaConfigType&& value) { m_lambdaConfigHasBeenSet = true; m_lambdaConfig = std::move(value); }
    inline UserPoolType& WithLambdaConfig(const LambdaConfigType& value) { SetLambdaConfig(value); return *this;}
    inline UserPoolType& WithLambdaConfig(LambdaConfigType&& value) { SetLambdaConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline UserPoolType& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline UserPoolType& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline UserPoolType& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline UserPoolType& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the user attributes and their properties in your user pool. The
     * attribute schema contains standard attributes, custom attributes with a
     * <code>custom:</code> prefix, and developer attributes with a <code>dev:</code>
     * prefix. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-attributes.html">User
     * pool attributes</a>.</p> <p>Developer-only attributes are a legacy feature of
     * user pools, and are read-only to all app clients. You can create and update
     * developer-only attributes only with IAM-authenticated API operations. Use app
     * client read/write permissions instead.</p>
     */
    inline const Aws::Vector<SchemaAttributeType>& GetSchemaAttributes() const{ return m_schemaAttributes; }
    inline bool SchemaAttributesHasBeenSet() const { return m_schemaAttributesHasBeenSet; }
    inline void SetSchemaAttributes(const Aws::Vector<SchemaAttributeType>& value) { m_schemaAttributesHasBeenSet = true; m_schemaAttributes = value; }
    inline void SetSchemaAttributes(Aws::Vector<SchemaAttributeType>&& value) { m_schemaAttributesHasBeenSet = true; m_schemaAttributes = std::move(value); }
    inline UserPoolType& WithSchemaAttributes(const Aws::Vector<SchemaAttributeType>& value) { SetSchemaAttributes(value); return *this;}
    inline UserPoolType& WithSchemaAttributes(Aws::Vector<SchemaAttributeType>&& value) { SetSchemaAttributes(std::move(value)); return *this;}
    inline UserPoolType& AddSchemaAttributes(const SchemaAttributeType& value) { m_schemaAttributesHasBeenSet = true; m_schemaAttributes.push_back(value); return *this; }
    inline UserPoolType& AddSchemaAttributes(SchemaAttributeType&& value) { m_schemaAttributesHasBeenSet = true; m_schemaAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes that are auto-verified in a user pool.</p>
     */
    inline const Aws::Vector<VerifiedAttributeType>& GetAutoVerifiedAttributes() const{ return m_autoVerifiedAttributes; }
    inline bool AutoVerifiedAttributesHasBeenSet() const { return m_autoVerifiedAttributesHasBeenSet; }
    inline void SetAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = value; }
    inline void SetAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes = std::move(value); }
    inline UserPoolType& WithAutoVerifiedAttributes(const Aws::Vector<VerifiedAttributeType>& value) { SetAutoVerifiedAttributes(value); return *this;}
    inline UserPoolType& WithAutoVerifiedAttributes(Aws::Vector<VerifiedAttributeType>&& value) { SetAutoVerifiedAttributes(std::move(value)); return *this;}
    inline UserPoolType& AddAutoVerifiedAttributes(const VerifiedAttributeType& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(value); return *this; }
    inline UserPoolType& AddAutoVerifiedAttributes(VerifiedAttributeType&& value) { m_autoVerifiedAttributesHasBeenSet = true; m_autoVerifiedAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Attributes supported as an alias for this user pool. An alias is an attribute
     * that users can enter as an alternative username. Possible values:
     * <b>phone_number</b>, <b>email</b>, or <b>preferred_username</b>.</p>
     */
    inline const Aws::Vector<AliasAttributeType>& GetAliasAttributes() const{ return m_aliasAttributes; }
    inline bool AliasAttributesHasBeenSet() const { return m_aliasAttributesHasBeenSet; }
    inline void SetAliasAttributes(const Aws::Vector<AliasAttributeType>& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = value; }
    inline void SetAliasAttributes(Aws::Vector<AliasAttributeType>&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes = std::move(value); }
    inline UserPoolType& WithAliasAttributes(const Aws::Vector<AliasAttributeType>& value) { SetAliasAttributes(value); return *this;}
    inline UserPoolType& WithAliasAttributes(Aws::Vector<AliasAttributeType>&& value) { SetAliasAttributes(std::move(value)); return *this;}
    inline UserPoolType& AddAliasAttributes(const AliasAttributeType& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(value); return *this; }
    inline UserPoolType& AddAliasAttributes(AliasAttributeType&& value) { m_aliasAttributesHasBeenSet = true; m_aliasAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether a user can use an email address or phone number as a
     * username when they sign up.</p>
     */
    inline const Aws::Vector<UsernameAttributeType>& GetUsernameAttributes() const{ return m_usernameAttributes; }
    inline bool UsernameAttributesHasBeenSet() const { return m_usernameAttributesHasBeenSet; }
    inline void SetUsernameAttributes(const Aws::Vector<UsernameAttributeType>& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes = value; }
    inline void SetUsernameAttributes(Aws::Vector<UsernameAttributeType>&& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes = std::move(value); }
    inline UserPoolType& WithUsernameAttributes(const Aws::Vector<UsernameAttributeType>& value) { SetUsernameAttributes(value); return *this;}
    inline UserPoolType& WithUsernameAttributes(Aws::Vector<UsernameAttributeType>&& value) { SetUsernameAttributes(std::move(value)); return *this;}
    inline UserPoolType& AddUsernameAttributes(const UsernameAttributeType& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes.push_back(value); return *this; }
    inline UserPoolType& AddUsernameAttributes(UsernameAttributeType&& value) { m_usernameAttributesHasBeenSet = true; m_usernameAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer used.</p>
     */
    inline const Aws::String& GetSmsVerificationMessage() const{ return m_smsVerificationMessage; }
    inline bool SmsVerificationMessageHasBeenSet() const { return m_smsVerificationMessageHasBeenSet; }
    inline void SetSmsVerificationMessage(const Aws::String& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = value; }
    inline void SetSmsVerificationMessage(Aws::String&& value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage = std::move(value); }
    inline void SetSmsVerificationMessage(const char* value) { m_smsVerificationMessageHasBeenSet = true; m_smsVerificationMessage.assign(value); }
    inline UserPoolType& WithSmsVerificationMessage(const Aws::String& value) { SetSmsVerificationMessage(value); return *this;}
    inline UserPoolType& WithSmsVerificationMessage(Aws::String&& value) { SetSmsVerificationMessage(std::move(value)); return *this;}
    inline UserPoolType& WithSmsVerificationMessage(const char* value) { SetSmsVerificationMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer used.</p>
     */
    inline const Aws::String& GetEmailVerificationMessage() const{ return m_emailVerificationMessage; }
    inline bool EmailVerificationMessageHasBeenSet() const { return m_emailVerificationMessageHasBeenSet; }
    inline void SetEmailVerificationMessage(const Aws::String& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = value; }
    inline void SetEmailVerificationMessage(Aws::String&& value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage = std::move(value); }
    inline void SetEmailVerificationMessage(const char* value) { m_emailVerificationMessageHasBeenSet = true; m_emailVerificationMessage.assign(value); }
    inline UserPoolType& WithEmailVerificationMessage(const Aws::String& value) { SetEmailVerificationMessage(value); return *this;}
    inline UserPoolType& WithEmailVerificationMessage(Aws::String&& value) { SetEmailVerificationMessage(std::move(value)); return *this;}
    inline UserPoolType& WithEmailVerificationMessage(const char* value) { SetEmailVerificationMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer used.</p>
     */
    inline const Aws::String& GetEmailVerificationSubject() const{ return m_emailVerificationSubject; }
    inline bool EmailVerificationSubjectHasBeenSet() const { return m_emailVerificationSubjectHasBeenSet; }
    inline void SetEmailVerificationSubject(const Aws::String& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = value; }
    inline void SetEmailVerificationSubject(Aws::String&& value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject = std::move(value); }
    inline void SetEmailVerificationSubject(const char* value) { m_emailVerificationSubjectHasBeenSet = true; m_emailVerificationSubject.assign(value); }
    inline UserPoolType& WithEmailVerificationSubject(const Aws::String& value) { SetEmailVerificationSubject(value); return *this;}
    inline UserPoolType& WithEmailVerificationSubject(Aws::String&& value) { SetEmailVerificationSubject(std::move(value)); return *this;}
    inline UserPoolType& WithEmailVerificationSubject(const char* value) { SetEmailVerificationSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for the verification message that your user pool delivers to
     * users who set an email address or phone number attribute.</p>
     */
    inline const VerificationMessageTemplateType& GetVerificationMessageTemplate() const{ return m_verificationMessageTemplate; }
    inline bool VerificationMessageTemplateHasBeenSet() const { return m_verificationMessageTemplateHasBeenSet; }
    inline void SetVerificationMessageTemplate(const VerificationMessageTemplateType& value) { m_verificationMessageTemplateHasBeenSet = true; m_verificationMessageTemplate = value; }
    inline void SetVerificationMessageTemplate(VerificationMessageTemplateType&& value) { m_verificationMessageTemplateHasBeenSet = true; m_verificationMessageTemplate = std::move(value); }
    inline UserPoolType& WithVerificationMessageTemplate(const VerificationMessageTemplateType& value) { SetVerificationMessageTemplate(value); return *this;}
    inline UserPoolType& WithVerificationMessageTemplate(VerificationMessageTemplateType&& value) { SetVerificationMessageTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the SMS authentication message.</p>
     */
    inline const Aws::String& GetSmsAuthenticationMessage() const{ return m_smsAuthenticationMessage; }
    inline bool SmsAuthenticationMessageHasBeenSet() const { return m_smsAuthenticationMessageHasBeenSet; }
    inline void SetSmsAuthenticationMessage(const Aws::String& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = value; }
    inline void SetSmsAuthenticationMessage(Aws::String&& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = std::move(value); }
    inline void SetSmsAuthenticationMessage(const char* value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage.assign(value); }
    inline UserPoolType& WithSmsAuthenticationMessage(const Aws::String& value) { SetSmsAuthenticationMessage(value); return *this;}
    inline UserPoolType& WithSmsAuthenticationMessage(Aws::String&& value) { SetSmsAuthenticationMessage(std::move(value)); return *this;}
    inline UserPoolType& WithSmsAuthenticationMessage(const char* value) { SetSmsAuthenticationMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for updates to user attributes. These settings include the
     * property <code>AttributesRequireVerificationBeforeUpdate</code>, a user-pool
     * setting that tells Amazon Cognito how to handle changes to the value of your
     * users' email address and phone number attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-settings-email-phone-verification.html#user-pool-settings-verifications-verify-attribute-updates">
     * Verifying updates to email addresses and phone numbers</a>.</p>
     */
    inline const UserAttributeUpdateSettingsType& GetUserAttributeUpdateSettings() const{ return m_userAttributeUpdateSettings; }
    inline bool UserAttributeUpdateSettingsHasBeenSet() const { return m_userAttributeUpdateSettingsHasBeenSet; }
    inline void SetUserAttributeUpdateSettings(const UserAttributeUpdateSettingsType& value) { m_userAttributeUpdateSettingsHasBeenSet = true; m_userAttributeUpdateSettings = value; }
    inline void SetUserAttributeUpdateSettings(UserAttributeUpdateSettingsType&& value) { m_userAttributeUpdateSettingsHasBeenSet = true; m_userAttributeUpdateSettings = std::move(value); }
    inline UserPoolType& WithUserAttributeUpdateSettings(const UserAttributeUpdateSettingsType& value) { SetUserAttributeUpdateSettings(value); return *this;}
    inline UserPoolType& WithUserAttributeUpdateSettings(UserAttributeUpdateSettingsType&& value) { SetUserAttributeUpdateSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Can be one of the following values:</p> <ul> <li> <p> <code>OFF</code> - MFA
     * tokens aren't required and can't be specified during user registration.</p>
     * </li> <li> <p> <code>ON</code> - MFA tokens are required for all user
     * registrations. You can only specify required when you're initially creating a
     * user pool.</p> </li> <li> <p> <code>OPTIONAL</code> - Users have the option when
     * registering to create an MFA token.</p> </li> </ul>
     */
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }
    inline bool MfaConfigurationHasBeenSet() const { return m_mfaConfigurationHasBeenSet; }
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = value; }
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfigurationHasBeenSet = true; m_mfaConfiguration = std::move(value); }
    inline UserPoolType& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}
    inline UserPoolType& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device-remembering configuration for a user pool. A null value indicates
     * that you have deactivated device remembering in your user pool.</p> 
     * <p>When you provide a value for any <code>DeviceConfiguration</code> field, you
     * activate the Amazon Cognito device-remembering feature.</p> 
     */
    inline const DeviceConfigurationType& GetDeviceConfiguration() const{ return m_deviceConfiguration; }
    inline bool DeviceConfigurationHasBeenSet() const { return m_deviceConfigurationHasBeenSet; }
    inline void SetDeviceConfiguration(const DeviceConfigurationType& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = value; }
    inline void SetDeviceConfiguration(DeviceConfigurationType&& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = std::move(value); }
    inline UserPoolType& WithDeviceConfiguration(const DeviceConfigurationType& value) { SetDeviceConfiguration(value); return *this;}
    inline UserPoolType& WithDeviceConfiguration(DeviceConfigurationType&& value) { SetDeviceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number estimating the size of the user pool.</p>
     */
    inline int GetEstimatedNumberOfUsers() const{ return m_estimatedNumberOfUsers; }
    inline bool EstimatedNumberOfUsersHasBeenSet() const { return m_estimatedNumberOfUsersHasBeenSet; }
    inline void SetEstimatedNumberOfUsers(int value) { m_estimatedNumberOfUsersHasBeenSet = true; m_estimatedNumberOfUsers = value; }
    inline UserPoolType& WithEstimatedNumberOfUsers(int value) { SetEstimatedNumberOfUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email configuration of your user pool. The email configuration type sets
     * your preferred sending method, Amazon Web Services Region, and sender for
     * messages from your user pool.</p>
     */
    inline const EmailConfigurationType& GetEmailConfiguration() const{ return m_emailConfiguration; }
    inline bool EmailConfigurationHasBeenSet() const { return m_emailConfigurationHasBeenSet; }
    inline void SetEmailConfiguration(const EmailConfigurationType& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = value; }
    inline void SetEmailConfiguration(EmailConfigurationType&& value) { m_emailConfigurationHasBeenSet = true; m_emailConfiguration = std::move(value); }
    inline UserPoolType& WithEmailConfiguration(const EmailConfigurationType& value) { SetEmailConfiguration(value); return *this;}
    inline UserPoolType& WithEmailConfiguration(EmailConfigurationType&& value) { SetEmailConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User pool configuration for delivery of SMS messages with Amazon Simple
     * Notification Service. To send SMS messages with Amazon SNS in the Amazon Web
     * Services Region that you want, the Amazon Cognito user pool uses an Identity and
     * Access Management (IAM) role in your Amazon Web Services account.</p>
     */
    inline const SmsConfigurationType& GetSmsConfiguration() const{ return m_smsConfiguration; }
    inline bool SmsConfigurationHasBeenSet() const { return m_smsConfigurationHasBeenSet; }
    inline void SetSmsConfiguration(const SmsConfigurationType& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = value; }
    inline void SetSmsConfiguration(SmsConfigurationType&& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = std::move(value); }
    inline UserPoolType& WithSmsConfiguration(const SmsConfigurationType& value) { SetSmsConfiguration(value); return *this;}
    inline UserPoolType& WithSmsConfiguration(SmsConfigurationType&& value) { SetSmsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that are assigned to the user pool. A tag is a label that you can
     * apply to user pools to categorize and manage them in different ways, such as by
     * purpose, owner, environment, or other criteria.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetUserPoolTags() const{ return m_userPoolTags; }
    inline bool UserPoolTagsHasBeenSet() const { return m_userPoolTagsHasBeenSet; }
    inline void SetUserPoolTags(const Aws::Map<Aws::String, Aws::String>& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags = value; }
    inline void SetUserPoolTags(Aws::Map<Aws::String, Aws::String>&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags = std::move(value); }
    inline UserPoolType& WithUserPoolTags(const Aws::Map<Aws::String, Aws::String>& value) { SetUserPoolTags(value); return *this;}
    inline UserPoolType& WithUserPoolTags(Aws::Map<Aws::String, Aws::String>&& value) { SetUserPoolTags(std::move(value)); return *this;}
    inline UserPoolType& AddUserPoolTags(const Aws::String& key, const Aws::String& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, value); return *this; }
    inline UserPoolType& AddUserPoolTags(Aws::String&& key, const Aws::String& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), value); return *this; }
    inline UserPoolType& AddUserPoolTags(const Aws::String& key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, std::move(value)); return *this; }
    inline UserPoolType& AddUserPoolTags(Aws::String&& key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), std::move(value)); return *this; }
    inline UserPoolType& AddUserPoolTags(const char* key, Aws::String&& value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, std::move(value)); return *this; }
    inline UserPoolType& AddUserPoolTags(Aws::String&& key, const char* value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(std::move(key), value); return *this; }
    inline UserPoolType& AddUserPoolTags(const char* key, const char* value) { m_userPoolTagsHasBeenSet = true; m_userPoolTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reason why the SMS configuration can't send the messages to your
     * users.</p> <p>This message might include comma-separated values to describe why
     * your SMS configuration can't send messages to user pool end users.</p> <dl>
     * <dt>InvalidSmsRoleAccessPolicyException</dt> <dd> <p>The Identity and Access
     * Management role that Amazon Cognito uses to send SMS messages isn't properly
     * configured. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SmsConfigurationType.html">SmsConfigurationType</a>.</p>
     * </dd> <dt>SNSSandbox</dt> <dd> <p>The Amazon Web Services account is in the SNS
     * SMS Sandbox and messages will only reach verified end users. This parameter
     * won’t get populated with SNSSandbox if the user creating the user pool doesn’t
     * have SNS permissions. To learn how to move your Amazon Web Services account out
     * of the sandbox, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-sms-sandbox-moving-to-production.html">Moving
     * out of the SMS sandbox</a>.</p> </dd> </dl>
     */
    inline const Aws::String& GetSmsConfigurationFailure() const{ return m_smsConfigurationFailure; }
    inline bool SmsConfigurationFailureHasBeenSet() const { return m_smsConfigurationFailureHasBeenSet; }
    inline void SetSmsConfigurationFailure(const Aws::String& value) { m_smsConfigurationFailureHasBeenSet = true; m_smsConfigurationFailure = value; }
    inline void SetSmsConfigurationFailure(Aws::String&& value) { m_smsConfigurationFailureHasBeenSet = true; m_smsConfigurationFailure = std::move(value); }
    inline void SetSmsConfigurationFailure(const char* value) { m_smsConfigurationFailureHasBeenSet = true; m_smsConfigurationFailure.assign(value); }
    inline UserPoolType& WithSmsConfigurationFailure(const Aws::String& value) { SetSmsConfigurationFailure(value); return *this;}
    inline UserPoolType& WithSmsConfigurationFailure(Aws::String&& value) { SetSmsConfigurationFailure(std::move(value)); return *this;}
    inline UserPoolType& WithSmsConfigurationFailure(const char* value) { SetSmsConfigurationFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deprecated. Review error codes from API requests with
     * <code>EventSource:cognito-idp.amazonaws.com</code> in CloudTrail for information
     * about problems with user pool email configuration.</p>
     */
    inline const Aws::String& GetEmailConfigurationFailure() const{ return m_emailConfigurationFailure; }
    inline bool EmailConfigurationFailureHasBeenSet() const { return m_emailConfigurationFailureHasBeenSet; }
    inline void SetEmailConfigurationFailure(const Aws::String& value) { m_emailConfigurationFailureHasBeenSet = true; m_emailConfigurationFailure = value; }
    inline void SetEmailConfigurationFailure(Aws::String&& value) { m_emailConfigurationFailureHasBeenSet = true; m_emailConfigurationFailure = std::move(value); }
    inline void SetEmailConfigurationFailure(const char* value) { m_emailConfigurationFailureHasBeenSet = true; m_emailConfigurationFailure.assign(value); }
    inline UserPoolType& WithEmailConfigurationFailure(const Aws::String& value) { SetEmailConfigurationFailure(value); return *this;}
    inline UserPoolType& WithEmailConfigurationFailure(Aws::String&& value) { SetEmailConfigurationFailure(std::move(value)); return *this;}
    inline UserPoolType& WithEmailConfigurationFailure(const char* value) { SetEmailConfigurationFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain prefix, if the user pool has a domain associated with it.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline UserPoolType& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline UserPoolType& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline UserPoolType& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom domain name that you provide to Amazon Cognito. This parameter
     * applies only if you use a custom domain to host the sign-up and sign-in pages
     * for your application. An example of a custom domain name might be
     * <code>auth.example.com</code>.</p> <p>For more information about adding a custom
     * domain to your user pool, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-add-custom-domain.html">Using
     * Your Own Domain for the Hosted UI</a>.</p>
     */
    inline const Aws::String& GetCustomDomain() const{ return m_customDomain; }
    inline bool CustomDomainHasBeenSet() const { return m_customDomainHasBeenSet; }
    inline void SetCustomDomain(const Aws::String& value) { m_customDomainHasBeenSet = true; m_customDomain = value; }
    inline void SetCustomDomain(Aws::String&& value) { m_customDomainHasBeenSet = true; m_customDomain = std::move(value); }
    inline void SetCustomDomain(const char* value) { m_customDomainHasBeenSet = true; m_customDomain.assign(value); }
    inline UserPoolType& WithCustomDomain(const Aws::String& value) { SetCustomDomain(value); return *this;}
    inline UserPoolType& WithCustomDomain(Aws::String&& value) { SetCustomDomain(std::move(value)); return *this;}
    inline UserPoolType& WithCustomDomain(const char* value) { SetCustomDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for <code>AdminCreateUser</code> requests.</p>
     */
    inline const AdminCreateUserConfigType& GetAdminCreateUserConfig() const{ return m_adminCreateUserConfig; }
    inline bool AdminCreateUserConfigHasBeenSet() const { return m_adminCreateUserConfigHasBeenSet; }
    inline void SetAdminCreateUserConfig(const AdminCreateUserConfigType& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = value; }
    inline void SetAdminCreateUserConfig(AdminCreateUserConfigType&& value) { m_adminCreateUserConfigHasBeenSet = true; m_adminCreateUserConfig = std::move(value); }
    inline UserPoolType& WithAdminCreateUserConfig(const AdminCreateUserConfigType& value) { SetAdminCreateUserConfig(value); return *this;}
    inline UserPoolType& WithAdminCreateUserConfig(AdminCreateUserConfigType&& value) { SetAdminCreateUserConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains settings for activation of threat protection, including the
     * operating mode and additional authentication types. To log user security
     * information but take no action, set to <code>AUDIT</code>. To configure
     * automatic security responses to potentially unwanted traffic to your user pool,
     * set to <code>ENFORCED</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">Adding
     * advanced security to a user pool</a>. To activate this setting, your user pool
     * must be on the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-plus.html">
     * Plus tier</a>.</p>
     */
    inline const UserPoolAddOnsType& GetUserPoolAddOns() const{ return m_userPoolAddOns; }
    inline bool UserPoolAddOnsHasBeenSet() const { return m_userPoolAddOnsHasBeenSet; }
    inline void SetUserPoolAddOns(const UserPoolAddOnsType& value) { m_userPoolAddOnsHasBeenSet = true; m_userPoolAddOns = value; }
    inline void SetUserPoolAddOns(UserPoolAddOnsType&& value) { m_userPoolAddOnsHasBeenSet = true; m_userPoolAddOns = std::move(value); }
    inline UserPoolType& WithUserPoolAddOns(const UserPoolAddOnsType& value) { SetUserPoolAddOns(value); return *this;}
    inline UserPoolType& WithUserPoolAddOns(UserPoolAddOnsType&& value) { SetUserPoolAddOns(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Case sensitivity of the username input for the selected sign-in option. When
     * case sensitivity is set to <code>False</code> (case insensitive), users can sign
     * in with any combination of capital and lowercase letters. For example,
     * <code>username</code>, <code>USERNAME</code>, or <code>UserName</code>, or for
     * email, <code>email@example.com</code> or <code>EMaiL@eXamplE.Com</code>. For
     * most use cases, set case sensitivity to <code>False</code> (case insensitive) as
     * a best practice. When usernames and email addresses are case insensitive, Amazon
     * Cognito treats any variation in case as the same user, and prevents a case
     * variation from being assigned to the same attribute for a different user.</p>
     */
    inline const UsernameConfigurationType& GetUsernameConfiguration() const{ return m_usernameConfiguration; }
    inline bool UsernameConfigurationHasBeenSet() const { return m_usernameConfigurationHasBeenSet; }
    inline void SetUsernameConfiguration(const UsernameConfigurationType& value) { m_usernameConfigurationHasBeenSet = true; m_usernameConfiguration = value; }
    inline void SetUsernameConfiguration(UsernameConfigurationType&& value) { m_usernameConfigurationHasBeenSet = true; m_usernameConfiguration = std::move(value); }
    inline UserPoolType& WithUsernameConfiguration(const UsernameConfigurationType& value) { SetUsernameConfiguration(value); return *this;}
    inline UserPoolType& WithUsernameConfiguration(UsernameConfigurationType&& value) { SetUsernameConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user pool.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UserPoolType& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UserPoolType& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UserPoolType& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The available verified method a user can use to recover their password when
     * they call <code>ForgotPassword</code>. You can use this setting to define a
     * preferred method when a user has more than one method available. With this
     * setting, SMS doesn't qualify for a valid password recovery mechanism if the user
     * also has SMS multi-factor authentication (MFA) activated. In the absence of this
     * setting, Amazon Cognito uses the legacy behavior to determine the recovery
     * method where SMS is preferred through email.</p>
     */
    inline const AccountRecoverySettingType& GetAccountRecoverySetting() const{ return m_accountRecoverySetting; }
    inline bool AccountRecoverySettingHasBeenSet() const { return m_accountRecoverySettingHasBeenSet; }
    inline void SetAccountRecoverySetting(const AccountRecoverySettingType& value) { m_accountRecoverySettingHasBeenSet = true; m_accountRecoverySetting = value; }
    inline void SetAccountRecoverySetting(AccountRecoverySettingType&& value) { m_accountRecoverySettingHasBeenSet = true; m_accountRecoverySetting = std::move(value); }
    inline UserPoolType& WithAccountRecoverySetting(const AccountRecoverySettingType& value) { SetAccountRecoverySetting(value); return *this;}
    inline UserPoolType& WithAccountRecoverySetting(AccountRecoverySettingType&& value) { SetAccountRecoverySetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user pool <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-sign-in-feature-plans.html">feature
     * plan</a>, or tier. This parameter determines the eligibility of the user pool
     * for features like managed login, access-token customization, and threat
     * protection. Defaults to <code>ESSENTIALS</code>.</p>
     */
    inline const UserPoolTierType& GetUserPoolTier() const{ return m_userPoolTier; }
    inline bool UserPoolTierHasBeenSet() const { return m_userPoolTierHasBeenSet; }
    inline void SetUserPoolTier(const UserPoolTierType& value) { m_userPoolTierHasBeenSet = true; m_userPoolTier = value; }
    inline void SetUserPoolTier(UserPoolTierType&& value) { m_userPoolTierHasBeenSet = true; m_userPoolTier = std::move(value); }
    inline UserPoolType& WithUserPoolTier(const UserPoolTierType& value) { SetUserPoolTier(value); return *this;}
    inline UserPoolType& WithUserPoolTier(UserPoolTierType&& value) { SetUserPoolTier(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    UserPoolPolicyType m_policies;
    bool m_policiesHasBeenSet = false;

    DeletionProtectionType m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    LambdaConfigType m_lambdaConfig;
    bool m_lambdaConfigHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Vector<SchemaAttributeType> m_schemaAttributes;
    bool m_schemaAttributesHasBeenSet = false;

    Aws::Vector<VerifiedAttributeType> m_autoVerifiedAttributes;
    bool m_autoVerifiedAttributesHasBeenSet = false;

    Aws::Vector<AliasAttributeType> m_aliasAttributes;
    bool m_aliasAttributesHasBeenSet = false;

    Aws::Vector<UsernameAttributeType> m_usernameAttributes;
    bool m_usernameAttributesHasBeenSet = false;

    Aws::String m_smsVerificationMessage;
    bool m_smsVerificationMessageHasBeenSet = false;

    Aws::String m_emailVerificationMessage;
    bool m_emailVerificationMessageHasBeenSet = false;

    Aws::String m_emailVerificationSubject;
    bool m_emailVerificationSubjectHasBeenSet = false;

    VerificationMessageTemplateType m_verificationMessageTemplate;
    bool m_verificationMessageTemplateHasBeenSet = false;

    Aws::String m_smsAuthenticationMessage;
    bool m_smsAuthenticationMessageHasBeenSet = false;

    UserAttributeUpdateSettingsType m_userAttributeUpdateSettings;
    bool m_userAttributeUpdateSettingsHasBeenSet = false;

    UserPoolMfaType m_mfaConfiguration;
    bool m_mfaConfigurationHasBeenSet = false;

    DeviceConfigurationType m_deviceConfiguration;
    bool m_deviceConfigurationHasBeenSet = false;

    int m_estimatedNumberOfUsers;
    bool m_estimatedNumberOfUsersHasBeenSet = false;

    EmailConfigurationType m_emailConfiguration;
    bool m_emailConfigurationHasBeenSet = false;

    SmsConfigurationType m_smsConfiguration;
    bool m_smsConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_userPoolTags;
    bool m_userPoolTagsHasBeenSet = false;

    Aws::String m_smsConfigurationFailure;
    bool m_smsConfigurationFailureHasBeenSet = false;

    Aws::String m_emailConfigurationFailure;
    bool m_emailConfigurationFailureHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_customDomain;
    bool m_customDomainHasBeenSet = false;

    AdminCreateUserConfigType m_adminCreateUserConfig;
    bool m_adminCreateUserConfigHasBeenSet = false;

    UserPoolAddOnsType m_userPoolAddOns;
    bool m_userPoolAddOnsHasBeenSet = false;

    UsernameConfigurationType m_usernameConfiguration;
    bool m_usernameConfigurationHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    AccountRecoverySettingType m_accountRecoverySetting;
    bool m_accountRecoverySettingHasBeenSet = false;

    UserPoolTierType m_userPoolTier;
    bool m_userPoolTierHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
