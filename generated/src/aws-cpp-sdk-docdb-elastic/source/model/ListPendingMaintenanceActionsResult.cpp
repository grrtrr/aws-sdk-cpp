﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/ListPendingMaintenanceActionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DocDBElastic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPendingMaintenanceActionsResult::ListPendingMaintenanceActionsResult()
{
}

ListPendingMaintenanceActionsResult::ListPendingMaintenanceActionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPendingMaintenanceActionsResult& ListPendingMaintenanceActionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("resourcePendingMaintenanceActions"))
  {
    Aws::Utils::Array<JsonView> resourcePendingMaintenanceActionsJsonList = jsonValue.GetArray("resourcePendingMaintenanceActions");
    for(unsigned resourcePendingMaintenanceActionsIndex = 0; resourcePendingMaintenanceActionsIndex < resourcePendingMaintenanceActionsJsonList.GetLength(); ++resourcePendingMaintenanceActionsIndex)
    {
      m_resourcePendingMaintenanceActions.push_back(resourcePendingMaintenanceActionsJsonList[resourcePendingMaintenanceActionsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
