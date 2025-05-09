﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
  enum class RetryTrigger
  {
    NOT_SET,
    AutomatedStageRetry,
    ManualStageRetry
  };

namespace RetryTriggerMapper
{
AWS_CODEPIPELINE_API RetryTrigger GetRetryTriggerForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForRetryTrigger(RetryTrigger value);
} // namespace RetryTriggerMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
