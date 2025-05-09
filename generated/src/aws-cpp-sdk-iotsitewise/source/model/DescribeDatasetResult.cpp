﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeDatasetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDatasetResult::DescribeDatasetResult()
{
}

DescribeDatasetResult::DescribeDatasetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDatasetResult& DescribeDatasetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("datasetId"))
  {
    m_datasetId = jsonValue.GetString("datasetId");

  }

  if(jsonValue.ValueExists("datasetArn"))
  {
    m_datasetArn = jsonValue.GetString("datasetArn");

  }

  if(jsonValue.ValueExists("datasetName"))
  {
    m_datasetName = jsonValue.GetString("datasetName");

  }

  if(jsonValue.ValueExists("datasetDescription"))
  {
    m_datasetDescription = jsonValue.GetString("datasetDescription");

  }

  if(jsonValue.ValueExists("datasetSource"))
  {
    m_datasetSource = jsonValue.GetObject("datasetSource");

  }

  if(jsonValue.ValueExists("datasetStatus"))
  {
    m_datasetStatus = jsonValue.GetObject("datasetStatus");

  }

  if(jsonValue.ValueExists("datasetCreationDate"))
  {
    m_datasetCreationDate = jsonValue.GetDouble("datasetCreationDate");

  }

  if(jsonValue.ValueExists("datasetLastUpdateDate"))
  {
    m_datasetLastUpdateDate = jsonValue.GetDouble("datasetLastUpdateDate");

  }

  if(jsonValue.ValueExists("datasetVersion"))
  {
    m_datasetVersion = jsonValue.GetString("datasetVersion");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
