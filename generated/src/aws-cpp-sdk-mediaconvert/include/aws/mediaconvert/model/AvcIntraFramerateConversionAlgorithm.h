﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class AvcIntraFramerateConversionAlgorithm
  {
    NOT_SET,
    DUPLICATE_DROP,
    INTERPOLATE,
    FRAMEFORMER,
    MAINTAIN_FRAME_COUNT
  };

namespace AvcIntraFramerateConversionAlgorithmMapper
{
AWS_MEDIACONVERT_API AvcIntraFramerateConversionAlgorithm GetAvcIntraFramerateConversionAlgorithmForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAvcIntraFramerateConversionAlgorithm(AvcIntraFramerateConversionAlgorithm value);
} // namespace AvcIntraFramerateConversionAlgorithmMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
