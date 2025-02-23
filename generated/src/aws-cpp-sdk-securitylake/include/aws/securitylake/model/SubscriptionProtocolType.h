﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{
  enum class SubscriptionProtocolType
  {
    NOT_SET,
    HTTP,
    HTTPS,
    EMAIL,
    EMAIL_JSON,
    SMS,
    SQS,
    LAMBDA,
    APP,
    FIREHOSE
  };

namespace SubscriptionProtocolTypeMapper
{
AWS_SECURITYLAKE_API SubscriptionProtocolType GetSubscriptionProtocolTypeForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForSubscriptionProtocolType(SubscriptionProtocolType value);
} // namespace SubscriptionProtocolTypeMapper
} // namespace Model
} // namespace SecurityLake
} // namespace Aws
