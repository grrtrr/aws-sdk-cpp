﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/CreatePullThroughCacheRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePullThroughCacheRuleResult::CreatePullThroughCacheRuleResult() : 
    m_upstreamRegistry(UpstreamRegistry::NOT_SET)
{
}

CreatePullThroughCacheRuleResult::CreatePullThroughCacheRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreatePullThroughCacheRuleResult()
{
  *this = result;
}

CreatePullThroughCacheRuleResult& CreatePullThroughCacheRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ecrRepositoryPrefix"))
  {
    m_ecrRepositoryPrefix = jsonValue.GetString("ecrRepositoryPrefix");

  }

  if(jsonValue.ValueExists("upstreamRegistryUrl"))
  {
    m_upstreamRegistryUrl = jsonValue.GetString("upstreamRegistryUrl");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

  }

  if(jsonValue.ValueExists("upstreamRegistry"))
  {
    m_upstreamRegistry = UpstreamRegistryMapper::GetUpstreamRegistryForName(jsonValue.GetString("upstreamRegistry"));

  }

  if(jsonValue.ValueExists("credentialArn"))
  {
    m_credentialArn = jsonValue.GetString("credentialArn");

  }

  if(jsonValue.ValueExists("customRoleArn"))
  {
    m_customRoleArn = jsonValue.GetString("customRoleArn");

  }

  if(jsonValue.ValueExists("upstreamRepositoryPrefix"))
  {
    m_upstreamRepositoryPrefix = jsonValue.GetString("upstreamRepositoryPrefix");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
