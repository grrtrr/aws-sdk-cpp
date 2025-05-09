﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ScanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ScanRequest::ScanRequest() : 
    m_tableNameHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_attributesToGetHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_select(Select::NOT_SET),
    m_selectHasBeenSet(false),
    m_scanFilterHasBeenSet(false),
    m_conditionalOperator(ConditionalOperator::NOT_SET),
    m_conditionalOperatorHasBeenSet(false),
    m_exclusiveStartKeyHasBeenSet(false),
    m_returnConsumedCapacity(ReturnConsumedCapacity::NOT_SET),
    m_returnConsumedCapacityHasBeenSet(false),
    m_totalSegments(0),
    m_totalSegmentsHasBeenSet(false),
    m_segment(0),
    m_segmentHasBeenSet(false),
    m_projectionExpressionHasBeenSet(false),
    m_filterExpressionHasBeenSet(false),
    m_expressionAttributeNamesHasBeenSet(false),
    m_expressionAttributeValuesHasBeenSet(false),
    m_consistentRead(false),
    m_consistentReadHasBeenSet(false)
{
}

Aws::String ScanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

  }

  if(m_attributesToGetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesToGetJsonList(m_attributesToGet.size());
   for(unsigned attributesToGetIndex = 0; attributesToGetIndex < attributesToGetJsonList.GetLength(); ++attributesToGetIndex)
   {
     attributesToGetJsonList[attributesToGetIndex].AsString(m_attributesToGet[attributesToGetIndex]);
   }
   payload.WithArray("AttributesToGet", std::move(attributesToGetJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_selectHasBeenSet)
  {
   payload.WithString("Select", SelectMapper::GetNameForSelect(m_select));
  }

  if(m_scanFilterHasBeenSet)
  {
   JsonValue scanFilterJsonMap;
   for(auto& scanFilterItem : m_scanFilter)
   {
     scanFilterJsonMap.WithObject(scanFilterItem.first, scanFilterItem.second.Jsonize());
   }
   payload.WithObject("ScanFilter", std::move(scanFilterJsonMap));

  }

  if(m_conditionalOperatorHasBeenSet)
  {
   payload.WithString("ConditionalOperator", ConditionalOperatorMapper::GetNameForConditionalOperator(m_conditionalOperator));
  }

  if(m_exclusiveStartKeyHasBeenSet)
  {
   JsonValue exclusiveStartKeyJsonMap;
   for(auto& exclusiveStartKeyItem : m_exclusiveStartKey)
   {
     exclusiveStartKeyJsonMap.WithObject(exclusiveStartKeyItem.first, exclusiveStartKeyItem.second.Jsonize());
   }
   payload.WithObject("ExclusiveStartKey", std::move(exclusiveStartKeyJsonMap));

  }

  if(m_returnConsumedCapacityHasBeenSet)
  {
   payload.WithString("ReturnConsumedCapacity", ReturnConsumedCapacityMapper::GetNameForReturnConsumedCapacity(m_returnConsumedCapacity));
  }

  if(m_totalSegmentsHasBeenSet)
  {
   payload.WithInteger("TotalSegments", m_totalSegments);

  }

  if(m_segmentHasBeenSet)
  {
   payload.WithInteger("Segment", m_segment);

  }

  if(m_projectionExpressionHasBeenSet)
  {
   payload.WithString("ProjectionExpression", m_projectionExpression);

  }

  if(m_filterExpressionHasBeenSet)
  {
   payload.WithString("FilterExpression", m_filterExpression);

  }

  if(m_expressionAttributeNamesHasBeenSet)
  {
   JsonValue expressionAttributeNamesJsonMap;
   for(auto& expressionAttributeNamesItem : m_expressionAttributeNames)
   {
     expressionAttributeNamesJsonMap.WithString(expressionAttributeNamesItem.first, expressionAttributeNamesItem.second);
   }
   payload.WithObject("ExpressionAttributeNames", std::move(expressionAttributeNamesJsonMap));

  }

  if(m_expressionAttributeValuesHasBeenSet)
  {
   JsonValue expressionAttributeValuesJsonMap;
   for(auto& expressionAttributeValuesItem : m_expressionAttributeValues)
   {
     expressionAttributeValuesJsonMap.WithObject(expressionAttributeValuesItem.first, expressionAttributeValuesItem.second.Jsonize());
   }
   payload.WithObject("ExpressionAttributeValues", std::move(expressionAttributeValuesJsonMap));

  }

  if(m_consistentReadHasBeenSet)
  {
   payload.WithBool("ConsistentRead", m_consistentRead);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ScanRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.Scan"));
  return headers;

}



ScanRequest::EndpointParameters ScanRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (TableNameHasBeenSet()) {
        parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}


