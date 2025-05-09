﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/RestartChannelPipelinesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RestartChannelPipelinesResult::RestartChannelPipelinesResult() : 
    m_channelClass(ChannelClass::NOT_SET),
    m_logLevel(LogLevel::NOT_SET),
    m_pipelinesRunningCount(0),
    m_state(ChannelState::NOT_SET)
{
}

RestartChannelPipelinesResult::RestartChannelPipelinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : RestartChannelPipelinesResult()
{
  *this = result;
}

RestartChannelPipelinesResult& RestartChannelPipelinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("cdiInputSpecification"))
  {
    m_cdiInputSpecification = jsonValue.GetObject("cdiInputSpecification");

  }

  if(jsonValue.ValueExists("channelClass"))
  {
    m_channelClass = ChannelClassMapper::GetChannelClassForName(jsonValue.GetString("channelClass"));

  }

  if(jsonValue.ValueExists("destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("egressEndpoints"))
  {
    Aws::Utils::Array<JsonView> egressEndpointsJsonList = jsonValue.GetArray("egressEndpoints");
    for(unsigned egressEndpointsIndex = 0; egressEndpointsIndex < egressEndpointsJsonList.GetLength(); ++egressEndpointsIndex)
    {
      m_egressEndpoints.push_back(egressEndpointsJsonList[egressEndpointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("encoderSettings"))
  {
    m_encoderSettings = jsonValue.GetObject("encoderSettings");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("inputAttachments"))
  {
    Aws::Utils::Array<JsonView> inputAttachmentsJsonList = jsonValue.GetArray("inputAttachments");
    for(unsigned inputAttachmentsIndex = 0; inputAttachmentsIndex < inputAttachmentsJsonList.GetLength(); ++inputAttachmentsIndex)
    {
      m_inputAttachments.push_back(inputAttachmentsJsonList[inputAttachmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("inputSpecification"))
  {
    m_inputSpecification = jsonValue.GetObject("inputSpecification");

  }

  if(jsonValue.ValueExists("logLevel"))
  {
    m_logLevel = LogLevelMapper::GetLogLevelForName(jsonValue.GetString("logLevel"));

  }

  if(jsonValue.ValueExists("maintenance"))
  {
    m_maintenance = jsonValue.GetObject("maintenance");

  }

  if(jsonValue.ValueExists("maintenanceStatus"))
  {
    m_maintenanceStatus = jsonValue.GetString("maintenanceStatus");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("pipelineDetails"))
  {
    Aws::Utils::Array<JsonView> pipelineDetailsJsonList = jsonValue.GetArray("pipelineDetails");
    for(unsigned pipelineDetailsIndex = 0; pipelineDetailsIndex < pipelineDetailsJsonList.GetLength(); ++pipelineDetailsIndex)
    {
      m_pipelineDetails.push_back(pipelineDetailsJsonList[pipelineDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("pipelinesRunningCount"))
  {
    m_pipelinesRunningCount = jsonValue.GetInteger("pipelinesRunningCount");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ChannelStateMapper::GetChannelStateForName(jsonValue.GetString("state"));

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("vpc"))
  {
    m_vpc = jsonValue.GetObject("vpc");

  }

  if(jsonValue.ValueExists("anywhereSettings"))
  {
    m_anywhereSettings = jsonValue.GetObject("anywhereSettings");

  }

  if(jsonValue.ValueExists("channelEngineVersion"))
  {
    m_channelEngineVersion = jsonValue.GetObject("channelEngineVersion");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
