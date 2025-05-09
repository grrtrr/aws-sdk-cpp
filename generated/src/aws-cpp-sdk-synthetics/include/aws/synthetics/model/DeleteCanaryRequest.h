﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Synthetics
{
namespace Model
{

  /**
   */
  class DeleteCanaryRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API DeleteCanaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCanary"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;

    AWS_SYNTHETICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the canary that you want to delete. To find the names of your
     * canaries, use <a
     * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_DescribeCanaries.html">DescribeCanaries</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DeleteCanaryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeleteCanaryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeleteCanaryRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to also delete the Lambda functions and layers used by this
     * canary. The default is <code>false</code>.</p> <p>Your setting for this
     * parameter is used only if the canary doesn't have <code>AUTOMATIC</code> for its
     * <code>ProvisionedResourceCleanup</code> field. If that field is set to
     * <code>AUTOMATIC</code>, then the Lambda functions and layers will be deleted
     * when this canary is deleted. </p> <p>Type: Boolean</p>
     */
    inline bool GetDeleteLambda() const{ return m_deleteLambda; }
    inline bool DeleteLambdaHasBeenSet() const { return m_deleteLambdaHasBeenSet; }
    inline void SetDeleteLambda(bool value) { m_deleteLambdaHasBeenSet = true; m_deleteLambda = value; }
    inline DeleteCanaryRequest& WithDeleteLambda(bool value) { SetDeleteLambda(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_deleteLambda;
    bool m_deleteLambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
