﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/SegmentGroupStructure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

SegmentGroupStructure::SegmentGroupStructure() : 
    m_groupsHasBeenSet(false),
    m_include(IncludeOptions::NOT_SET),
    m_includeHasBeenSet(false)
{
}

SegmentGroupStructure::SegmentGroupStructure(JsonView jsonValue)
  : SegmentGroupStructure()
{
  *this = jsonValue;
}

SegmentGroupStructure& SegmentGroupStructure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("Groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsObject());
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Include"))
  {
    m_include = IncludeOptionsMapper::GetIncludeOptionsForName(jsonValue.GetString("Include"));

    m_includeHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentGroupStructure::Jsonize() const
{
  JsonValue payload;

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsObject(m_groups[groupsIndex].Jsonize());
   }
   payload.WithArray("Groups", std::move(groupsJsonList));

  }

  if(m_includeHasBeenSet)
  {
   payload.WithString("Include", IncludeOptionsMapper::GetNameForIncludeOptions(m_include));
  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
