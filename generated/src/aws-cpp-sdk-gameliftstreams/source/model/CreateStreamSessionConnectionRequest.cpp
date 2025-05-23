﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/CreateStreamSessionConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStreamSessionConnectionRequest::CreateStreamSessionConnectionRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_identifierHasBeenSet(false),
    m_signalRequestHasBeenSet(false),
    m_streamSessionIdentifierHasBeenSet(false)
{
}

Aws::String CreateStreamSessionConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_signalRequestHasBeenSet)
  {
   payload.WithString("SignalRequest", m_signalRequest);

  }

  return payload.View().WriteReadable();
}




