﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/GetChannelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::mediapackagev2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetChannelResult::GetChannelResult() : 
    m_inputType(InputType::NOT_SET)
{
}

GetChannelResult::GetChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetChannelResult()
{
  *this = result;
}

GetChannelResult& GetChannelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("ChannelName"))
  {
    m_channelName = jsonValue.GetString("ChannelName");

  }

  if(jsonValue.ValueExists("ChannelGroupName"))
  {
    m_channelGroupName = jsonValue.GetString("ChannelGroupName");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("ModifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("ModifiedAt");

  }

  if(jsonValue.ValueExists("ResetAt"))
  {
    m_resetAt = jsonValue.GetDouble("ResetAt");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("IngestEndpoints"))
  {
    Aws::Utils::Array<JsonView> ingestEndpointsJsonList = jsonValue.GetArray("IngestEndpoints");
    for(unsigned ingestEndpointsIndex = 0; ingestEndpointsIndex < ingestEndpointsJsonList.GetLength(); ++ingestEndpointsIndex)
    {
      m_ingestEndpoints.push_back(ingestEndpointsJsonList[ingestEndpointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("InputType"))
  {
    m_inputType = InputTypeMapper::GetInputTypeForName(jsonValue.GetString("InputType"));

  }

  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("InputSwitchConfiguration"))
  {
    m_inputSwitchConfiguration = jsonValue.GetObject("InputSwitchConfiguration");

  }

  if(jsonValue.ValueExists("OutputHeaderConfiguration"))
  {
    m_outputHeaderConfiguration = jsonValue.GetObject("OutputHeaderConfiguration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
