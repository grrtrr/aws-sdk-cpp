﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>The placement configuration for all the control plane instances of your local
   * Amazon EKS cluster on an Amazon Web Services Outpost. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-outposts-capacity-considerations.html">Capacity
   * considerations</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ControlPlanePlacementRequest">AWS
   * API Reference</a></p>
   */
  class ControlPlanePlacementRequest
  {
  public:
    AWS_EKS_API ControlPlanePlacementRequest();
    AWS_EKS_API ControlPlanePlacementRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ControlPlanePlacementRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the placement group for the Kubernetes control plane instances.
     * This setting can't be changed after cluster creation. </p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline ControlPlanePlacementRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline ControlPlanePlacementRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline ControlPlanePlacementRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
