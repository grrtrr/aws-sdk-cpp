﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/LogConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

LogConfiguration::LogConfiguration() : 
    m_percentEnabled(0),
    m_percentEnabledHasBeenSet(false),
    m_enabledLoggingStrategiesHasBeenSet(false)
{
}

LogConfiguration::LogConfiguration(JsonView jsonValue)
  : LogConfiguration()
{
  *this = jsonValue;
}

LogConfiguration& LogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PercentEnabled"))
  {
    m_percentEnabled = jsonValue.GetInteger("PercentEnabled");

    m_percentEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnabledLoggingStrategies"))
  {
    Aws::Utils::Array<JsonView> enabledLoggingStrategiesJsonList = jsonValue.GetArray("EnabledLoggingStrategies");
    for(unsigned enabledLoggingStrategiesIndex = 0; enabledLoggingStrategiesIndex < enabledLoggingStrategiesJsonList.GetLength(); ++enabledLoggingStrategiesIndex)
    {
      m_enabledLoggingStrategies.push_back(LoggingStrategyMapper::GetLoggingStrategyForName(enabledLoggingStrategiesJsonList[enabledLoggingStrategiesIndex].AsString()));
    }
    m_enabledLoggingStrategiesHasBeenSet = true;
  }

  return *this;
}

JsonValue LogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_percentEnabledHasBeenSet)
  {
   payload.WithInteger("PercentEnabled", m_percentEnabled);

  }

  if(m_enabledLoggingStrategiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledLoggingStrategiesJsonList(m_enabledLoggingStrategies.size());
   for(unsigned enabledLoggingStrategiesIndex = 0; enabledLoggingStrategiesIndex < enabledLoggingStrategiesJsonList.GetLength(); ++enabledLoggingStrategiesIndex)
   {
     enabledLoggingStrategiesJsonList[enabledLoggingStrategiesIndex].AsString(LoggingStrategyMapper::GetNameForLoggingStrategy(m_enabledLoggingStrategies[enabledLoggingStrategiesIndex]));
   }
   payload.WithArray("EnabledLoggingStrategies", std::move(enabledLoggingStrategiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
