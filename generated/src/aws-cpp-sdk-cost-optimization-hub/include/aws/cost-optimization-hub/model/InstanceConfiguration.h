﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The instance configuration used for recommendations.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/InstanceConfiguration">AWS
   * API Reference</a></p>
   */
  class InstanceConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API InstanceConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API InstanceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API InstanceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type of the configuration.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline InstanceConfiguration& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline InstanceConfiguration& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline InstanceConfiguration& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
