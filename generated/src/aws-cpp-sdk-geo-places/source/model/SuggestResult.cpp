﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SuggestResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GeoPlaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SuggestResult::SuggestResult()
{
}

SuggestResult::SuggestResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SuggestResult& SuggestResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResultItems"))
  {
    Aws::Utils::Array<JsonView> resultItemsJsonList = jsonValue.GetArray("ResultItems");
    for(unsigned resultItemsIndex = 0; resultItemsIndex < resultItemsJsonList.GetLength(); ++resultItemsIndex)
    {
      m_resultItems.push_back(resultItemsJsonList[resultItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("QueryRefinements"))
  {
    Aws::Utils::Array<JsonView> queryRefinementsJsonList = jsonValue.GetArray("QueryRefinements");
    for(unsigned queryRefinementsIndex = 0; queryRefinementsIndex < queryRefinementsJsonList.GetLength(); ++queryRefinementsIndex)
    {
      m_queryRefinements.push_back(queryRefinementsJsonList[queryRefinementsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& pricingBucketIter = headers.find("x-amz-geo-pricing-bucket");
  if(pricingBucketIter != headers.end())
  {
    m_pricingBucket = pricingBucketIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
