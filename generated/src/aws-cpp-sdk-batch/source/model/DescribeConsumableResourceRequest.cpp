﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DescribeConsumableResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConsumableResourceRequest::DescribeConsumableResourceRequest() : 
    m_consumableResourceHasBeenSet(false)
{
}

Aws::String DescribeConsumableResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_consumableResourceHasBeenSet)
  {
   payload.WithString("consumableResource", m_consumableResource);

  }

  return payload.View().WriteReadable();
}




