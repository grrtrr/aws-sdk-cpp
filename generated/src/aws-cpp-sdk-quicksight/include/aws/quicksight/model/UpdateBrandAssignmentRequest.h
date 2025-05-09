﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateBrandAssignmentRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateBrandAssignmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBrandAssignment"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the brand assignment.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UpdateBrandAssignmentRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateBrandAssignmentRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateBrandAssignmentRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the brand.</p>
     */
    inline const Aws::String& GetBrandArn() const{ return m_brandArn; }
    inline bool BrandArnHasBeenSet() const { return m_brandArnHasBeenSet; }
    inline void SetBrandArn(const Aws::String& value) { m_brandArnHasBeenSet = true; m_brandArn = value; }
    inline void SetBrandArn(Aws::String&& value) { m_brandArnHasBeenSet = true; m_brandArn = std::move(value); }
    inline void SetBrandArn(const char* value) { m_brandArnHasBeenSet = true; m_brandArn.assign(value); }
    inline UpdateBrandAssignmentRequest& WithBrandArn(const Aws::String& value) { SetBrandArn(value); return *this;}
    inline UpdateBrandAssignmentRequest& WithBrandArn(Aws::String&& value) { SetBrandArn(std::move(value)); return *this;}
    inline UpdateBrandAssignmentRequest& WithBrandArn(const char* value) { SetBrandArn(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_brandArn;
    bool m_brandArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
