﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class CreateGroupRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGroup"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the group. This name must be unique in your user pool.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline CreateGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline CreateGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline CreateGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the user pool where you want to create a user group.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline CreateGroupRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline CreateGroupRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline CreateGroupRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the group that you're creating.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that you want to associate
     * with the group. A group role primarily declares a preferred role for the
     * credentials that you get from an identity pool. Amazon Cognito ID tokens have a
     * <code>cognito:preferred_role</code> claim that presents the highest-precedence
     * group that a user belongs to. Both ID and access tokens also contain a
     * <code>cognito:groups</code> claim that list all the groups that a user is a
     * member of.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateGroupRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateGroupRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateGroupRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A non-negative integer value that specifies the precedence of this group
     * relative to the other groups that a user can belong to in the user pool. Zero is
     * the highest precedence value. Groups with lower <code>Precedence</code> values
     * take precedence over groups with higher or null <code>Precedence</code> values.
     * If a user belongs to two or more groups, it is the group with the lowest
     * precedence value whose role ARN is given in the user's tokens for the
     * <code>cognito:roles</code> and <code>cognito:preferred_role</code> claims.</p>
     * <p>Two groups can have the same <code>Precedence</code> value. If this happens,
     * neither group takes precedence over the other. If two groups with the same
     * <code>Precedence</code> have the same role ARN, that role is used in the
     * <code>cognito:preferred_role</code> claim in tokens for users in each group. If
     * the two groups have different role ARNs, the <code>cognito:preferred_role</code>
     * claim isn't set in users' tokens.</p> <p>The default <code>Precedence</code>
     * value is null. The maximum <code>Precedence</code> value is
     * <code>2^31-1</code>.</p>
     */
    inline int GetPrecedence() const{ return m_precedence; }
    inline bool PrecedenceHasBeenSet() const { return m_precedenceHasBeenSet; }
    inline void SetPrecedence(int value) { m_precedenceHasBeenSet = true; m_precedence = value; }
    inline CreateGroupRequest& WithPrecedence(int value) { SetPrecedence(value); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    int m_precedence;
    bool m_precedenceHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
