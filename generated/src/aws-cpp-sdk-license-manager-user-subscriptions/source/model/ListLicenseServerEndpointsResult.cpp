﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/ListLicenseServerEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LicenseManagerUserSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLicenseServerEndpointsResult::ListLicenseServerEndpointsResult()
{
}

ListLicenseServerEndpointsResult::ListLicenseServerEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLicenseServerEndpointsResult& ListLicenseServerEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseServerEndpoints"))
  {
    Aws::Utils::Array<JsonView> licenseServerEndpointsJsonList = jsonValue.GetArray("LicenseServerEndpoints");
    for(unsigned licenseServerEndpointsIndex = 0; licenseServerEndpointsIndex < licenseServerEndpointsJsonList.GetLength(); ++licenseServerEndpointsIndex)
    {
      m_licenseServerEndpoints.push_back(licenseServerEndpointsJsonList[licenseServerEndpointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
