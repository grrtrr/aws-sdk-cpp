﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/GetCollaborationConfiguredModelAlgorithmAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCollaborationConfiguredModelAlgorithmAssociationRequest::GetCollaborationConfiguredModelAlgorithmAssociationRequest() : 
    m_configuredModelAlgorithmAssociationArnHasBeenSet(false),
    m_collaborationIdentifierHasBeenSet(false)
{
}

Aws::String GetCollaborationConfiguredModelAlgorithmAssociationRequest::SerializePayload() const
{
  return {};
}




