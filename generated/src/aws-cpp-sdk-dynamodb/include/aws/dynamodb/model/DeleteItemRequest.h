﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ConditionalOperator.h>
#include <aws/dynamodb/model/ReturnValue.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/ReturnItemCollectionMetrics.h>
#include <aws/dynamodb/model/ReturnValuesOnConditionCheckFailure.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/ExpectedAttributeValue.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DeleteItem</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/DeleteItemInput">AWS
   * API Reference</a></p>
   */
  class DeleteItemRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API DeleteItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteItem"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the table from which to delete the item. You can also provide the
     * Amazon Resource Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline DeleteItemRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline DeleteItemRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline DeleteItemRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of attribute names to <code>AttributeValue</code> objects, representing
     * the primary key of the item to delete.</p> <p>For the primary key, you must
     * provide all of the key attributes. For example, with a simple primary key, you
     * only need to provide a value for the partition key. For a composite primary key,
     * you must provide values for both the partition key and the sort key.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline DeleteItemRequest& WithKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetKey(value); return *this;}
    inline DeleteItemRequest& WithKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetKey(std::move(value)); return *this;}
    inline DeleteItemRequest& AddKey(const Aws::String& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }
    inline DeleteItemRequest& AddKey(Aws::String&& key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), value); return *this; }
    inline DeleteItemRequest& AddKey(const Aws::String& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }
    inline DeleteItemRequest& AddKey(Aws::String&& key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(std::move(key), std::move(value)); return *this; }
    inline DeleteItemRequest& AddKey(const char* key, AttributeValue&& value) { m_keyHasBeenSet = true; m_key.emplace(key, std::move(value)); return *this; }
    inline DeleteItemRequest& AddKey(const char* key, const AttributeValue& value) { m_keyHasBeenSet = true; m_key.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.Expected.html">Expected</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, ExpectedAttributeValue>& GetExpected() const{ return m_expected; }
    inline bool ExpectedHasBeenSet() const { return m_expectedHasBeenSet; }
    inline void SetExpected(const Aws::Map<Aws::String, ExpectedAttributeValue>& value) { m_expectedHasBeenSet = true; m_expected = value; }
    inline void SetExpected(Aws::Map<Aws::String, ExpectedAttributeValue>&& value) { m_expectedHasBeenSet = true; m_expected = std::move(value); }
    inline DeleteItemRequest& WithExpected(const Aws::Map<Aws::String, ExpectedAttributeValue>& value) { SetExpected(value); return *this;}
    inline DeleteItemRequest& WithExpected(Aws::Map<Aws::String, ExpectedAttributeValue>&& value) { SetExpected(std::move(value)); return *this;}
    inline DeleteItemRequest& AddExpected(const Aws::String& key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, value); return *this; }
    inline DeleteItemRequest& AddExpected(Aws::String&& key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected.emplace(std::move(key), value); return *this; }
    inline DeleteItemRequest& AddExpected(const Aws::String& key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, std::move(value)); return *this; }
    inline DeleteItemRequest& AddExpected(Aws::String&& key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected.emplace(std::move(key), std::move(value)); return *this; }
    inline DeleteItemRequest& AddExpected(const char* key, ExpectedAttributeValue&& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, std::move(value)); return *this; }
    inline DeleteItemRequest& AddExpected(const char* key, const ExpectedAttributeValue& value) { m_expectedHasBeenSet = true; m_expected.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is a legacy parameter. Use <code>ConditionExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ConditionalOperator& GetConditionalOperator() const{ return m_conditionalOperator; }
    inline bool ConditionalOperatorHasBeenSet() const { return m_conditionalOperatorHasBeenSet; }
    inline void SetConditionalOperator(const ConditionalOperator& value) { m_conditionalOperatorHasBeenSet = true; m_conditionalOperator = value; }
    inline void SetConditionalOperator(ConditionalOperator&& value) { m_conditionalOperatorHasBeenSet = true; m_conditionalOperator = std::move(value); }
    inline DeleteItemRequest& WithConditionalOperator(const ConditionalOperator& value) { SetConditionalOperator(value); return *this;}
    inline DeleteItemRequest& WithConditionalOperator(ConditionalOperator&& value) { SetConditionalOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use <code>ReturnValues</code> if you want to get the item attributes as they
     * appeared before they were deleted. For <code>DeleteItem</code>, the valid values
     * are:</p> <ul> <li> <p> <code>NONE</code> - If <code>ReturnValues</code> is not
     * specified, or if its value is <code>NONE</code>, then nothing is returned. (This
     * setting is the default for <code>ReturnValues</code>.)</p> </li> <li> <p>
     * <code>ALL_OLD</code> - The content of the old item is returned.</p> </li> </ul>
     * <p>There is no additional cost associated with requesting a return value aside
     * from the small network and processing overhead of receiving a larger response.
     * No read capacity units are consumed.</p>  <p>The <code>ReturnValues</code>
     * parameter is used by several DynamoDB operations; however,
     * <code>DeleteItem</code> does not recognize any values other than
     * <code>NONE</code> or <code>ALL_OLD</code>.</p> 
     */
    inline const ReturnValue& GetReturnValues() const{ return m_returnValues; }
    inline bool ReturnValuesHasBeenSet() const { return m_returnValuesHasBeenSet; }
    inline void SetReturnValues(const ReturnValue& value) { m_returnValuesHasBeenSet = true; m_returnValues = value; }
    inline void SetReturnValues(ReturnValue&& value) { m_returnValuesHasBeenSet = true; m_returnValues = std::move(value); }
    inline DeleteItemRequest& WithReturnValues(const ReturnValue& value) { SetReturnValues(value); return *this;}
    inline DeleteItemRequest& WithReturnValues(ReturnValue&& value) { SetReturnValues(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = std::move(value); }
    inline DeleteItemRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}
    inline DeleteItemRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether item collection metrics are returned. If set to
     * <code>SIZE</code>, the response includes statistics about item collections, if
     * any, that were modified during the operation are returned in the response. If
     * set to <code>NONE</code> (the default), no statistics are returned.</p>
     */
    inline const ReturnItemCollectionMetrics& GetReturnItemCollectionMetrics() const{ return m_returnItemCollectionMetrics; }
    inline bool ReturnItemCollectionMetricsHasBeenSet() const { return m_returnItemCollectionMetricsHasBeenSet; }
    inline void SetReturnItemCollectionMetrics(const ReturnItemCollectionMetrics& value) { m_returnItemCollectionMetricsHasBeenSet = true; m_returnItemCollectionMetrics = value; }
    inline void SetReturnItemCollectionMetrics(ReturnItemCollectionMetrics&& value) { m_returnItemCollectionMetricsHasBeenSet = true; m_returnItemCollectionMetrics = std::move(value); }
    inline DeleteItemRequest& WithReturnItemCollectionMetrics(const ReturnItemCollectionMetrics& value) { SetReturnItemCollectionMetrics(value); return *this;}
    inline DeleteItemRequest& WithReturnItemCollectionMetrics(ReturnItemCollectionMetrics&& value) { SetReturnItemCollectionMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A condition that must be satisfied in order for a conditional
     * <code>DeleteItem</code> to succeed.</p> <p>An expression can contain any of the
     * following:</p> <ul> <li> <p>Functions: <code>attribute_exists |
     * attribute_not_exists | attribute_type | contains | begins_with | size</code>
     * </p> <p>These function names are case-sensitive.</p> </li> <li> <p>Comparison
     * operators: <code>= | &lt;&gt; | &lt; | &gt; | &lt;= | &gt;= | BETWEEN | IN
     * </code> </p> </li> <li> <p> Logical operators: <code>AND | OR | NOT</code> </p>
     * </li> </ul> <p>For more information about condition expressions, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetConditionExpression() const{ return m_conditionExpression; }
    inline bool ConditionExpressionHasBeenSet() const { return m_conditionExpressionHasBeenSet; }
    inline void SetConditionExpression(const Aws::String& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = value; }
    inline void SetConditionExpression(Aws::String&& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = std::move(value); }
    inline void SetConditionExpression(const char* value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression.assign(value); }
    inline DeleteItemRequest& WithConditionExpression(const Aws::String& value) { SetConditionExpression(value); return *this;}
    inline DeleteItemRequest& WithConditionExpression(Aws::String&& value) { SetConditionExpression(std::move(value)); return *this;}
    inline DeleteItemRequest& WithConditionExpression(const char* value) { SetConditionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more substitution tokens for attribute names in an expression. The
     * following are some use cases for using
     * <code>ExpressionAttributeNames</code>:</p> <ul> <li> <p>To access an attribute
     * whose name conflicts with a DynamoDB reserved word.</p> </li> <li> <p>To create
     * a placeholder for repeating occurrences of an attribute name in an
     * expression.</p> </li> <li> <p>To prevent special characters in an attribute name
     * from being misinterpreted in an expression.</p> </li> </ul> <p>Use the <b>#</b>
     * character in an expression to dereference an attribute name. For example,
     * consider the following attribute name:</p> <ul> <li> <p> <code>Percentile</code>
     * </p> </li> </ul> <p>The name of this attribute conflicts with a reserved word,
     * so it cannot be used directly in an expression. (For the complete list of
     * reserved words, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>). To work around this,
     * you could specify the following for <code>ExpressionAttributeNames</code>:</p>
     * <ul> <li> <p> <code>{"#P":"Percentile"}</code> </p> </li> </ul> <p>You could
     * then use this substitution in an expression, as in this example:</p> <ul> <li>
     * <p> <code>#P = :val</code> </p> </li> </ul>  <p>Tokens that begin with the
     * <b>:</b> character are <i>expression attribute values</i>, which are
     * placeholders for the actual value at runtime.</p>  <p>For more
     * information on expression attribute names, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Specifying
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExpressionAttributeNames() const{ return m_expressionAttributeNames; }
    inline bool ExpressionAttributeNamesHasBeenSet() const { return m_expressionAttributeNamesHasBeenSet; }
    inline void SetExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = value; }
    inline void SetExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames = std::move(value); }
    inline DeleteItemRequest& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}
    inline DeleteItemRequest& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(std::move(value)); return *this;}
    inline DeleteItemRequest& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }
    inline DeleteItemRequest& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }
    inline DeleteItemRequest& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }
    inline DeleteItemRequest& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), std::move(value)); return *this; }
    inline DeleteItemRequest& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }
    inline DeleteItemRequest& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }
    inline DeleteItemRequest& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more values that can be substituted in an expression.</p> <p>Use the
     * <b>:</b> (colon) character in an expression to dereference an attribute value.
     * For example, suppose that you wanted to check whether the value of the
     * <i>ProductStatus</i> attribute was one of the following: </p> <p>
     * <code>Available | Backordered | Discontinued</code> </p> <p>You would first need
     * to specify <code>ExpressionAttributeValues</code> as follows:</p> <p> <code>{
     * ":avail":{"S":"Available"}, ":back":{"S":"Backordered"},
     * ":disc":{"S":"Discontinued"} }</code> </p> <p>You could then use these values in
     * an expression, such as this:</p> <p> <code>ProductStatus IN (:avail, :back,
     * :disc)</code> </p> <p>For more information on expression attribute values, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Condition
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExpressionAttributeValues() const{ return m_expressionAttributeValues; }
    inline bool ExpressionAttributeValuesHasBeenSet() const { return m_expressionAttributeValuesHasBeenSet; }
    inline void SetExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = value; }
    inline void SetExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = std::move(value); }
    inline DeleteItemRequest& WithExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { SetExpressionAttributeValues(value); return *this;}
    inline DeleteItemRequest& WithExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { SetExpressionAttributeValues(std::move(value)); return *this;}
    inline DeleteItemRequest& AddExpressionAttributeValues(const Aws::String& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, value); return *this; }
    inline DeleteItemRequest& AddExpressionAttributeValues(Aws::String&& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::move(key), value); return *this; }
    inline DeleteItemRequest& AddExpressionAttributeValues(const Aws::String& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, std::move(value)); return *this; }
    inline DeleteItemRequest& AddExpressionAttributeValues(Aws::String&& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::move(key), std::move(value)); return *this; }
    inline DeleteItemRequest& AddExpressionAttributeValues(const char* key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, std::move(value)); return *this; }
    inline DeleteItemRequest& AddExpressionAttributeValues(const char* key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional parameter that returns the item attributes for a
     * <code>DeleteItem</code> operation that failed a condition check.</p> <p>There is
     * no additional cost associated with requesting a return value aside from the
     * small network and processing overhead of receiving a larger response. No read
     * capacity units are consumed.</p>
     */
    inline const ReturnValuesOnConditionCheckFailure& GetReturnValuesOnConditionCheckFailure() const{ return m_returnValuesOnConditionCheckFailure; }
    inline bool ReturnValuesOnConditionCheckFailureHasBeenSet() const { return m_returnValuesOnConditionCheckFailureHasBeenSet; }
    inline void SetReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = value; }
    inline void SetReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { m_returnValuesOnConditionCheckFailureHasBeenSet = true; m_returnValuesOnConditionCheckFailure = std::move(value); }
    inline DeleteItemRequest& WithReturnValuesOnConditionCheckFailure(const ReturnValuesOnConditionCheckFailure& value) { SetReturnValuesOnConditionCheckFailure(value); return *this;}
    inline DeleteItemRequest& WithReturnValuesOnConditionCheckFailure(ReturnValuesOnConditionCheckFailure&& value) { SetReturnValuesOnConditionCheckFailure(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_key;
    bool m_keyHasBeenSet = false;

    Aws::Map<Aws::String, ExpectedAttributeValue> m_expected;
    bool m_expectedHasBeenSet = false;

    ConditionalOperator m_conditionalOperator;
    bool m_conditionalOperatorHasBeenSet = false;

    ReturnValue m_returnValues;
    bool m_returnValuesHasBeenSet = false;

    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet = false;

    ReturnItemCollectionMetrics m_returnItemCollectionMetrics;
    bool m_returnItemCollectionMetricsHasBeenSet = false;

    Aws::String m_conditionExpression;
    bool m_conditionExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_expressionAttributeValues;
    bool m_expressionAttributeValuesHasBeenSet = false;

    ReturnValuesOnConditionCheckFailure m_returnValuesOnConditionCheckFailure;
    bool m_returnValuesOnConditionCheckFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
