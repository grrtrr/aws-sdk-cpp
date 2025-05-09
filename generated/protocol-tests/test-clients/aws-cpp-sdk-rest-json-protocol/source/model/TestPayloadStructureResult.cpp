﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/TestPayloadStructureResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestPayloadStructureResult::TestPayloadStructureResult()
{
}

TestPayloadStructureResult::TestPayloadStructureResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TestPayloadStructureResult& TestPayloadStructureResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  m_payloadConfig = jsonValue;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& testIdIter = headers.find("x-amz-test-id");
  if(testIdIter != headers.end())
  {
    m_testId = testIdIter->second;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
