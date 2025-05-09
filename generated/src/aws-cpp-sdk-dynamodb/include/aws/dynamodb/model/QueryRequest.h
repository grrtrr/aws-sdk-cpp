﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/Select.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/dynamodb/model/ConditionalOperator.h>
#include <aws/dynamodb/model/ReturnConsumedCapacity.h>
#include <aws/dynamodb/model/Condition.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>Query</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/QueryInput">AWS
   * API Reference</a></p>
   */
  class QueryRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API QueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Query"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the table containing the requested items. You can also provide
     * the Amazon Resource Name (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline QueryRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline QueryRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline QueryRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an index to query. This index can be any local secondary index or
     * global secondary index on the table. Note that if you use the
     * <code>IndexName</code> parameter, you must also provide <code>TableName.</code>
     * </p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline QueryRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline QueryRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline QueryRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attributes to be returned in the result. You can retrieve all item
     * attributes, specific item attributes, the count of matching items, or in the
     * case of an index, some or all of the attributes projected into the index.</p>
     * <ul> <li> <p> <code>ALL_ATTRIBUTES</code> - Returns all of the item attributes
     * from the specified table or index. If you query a local secondary index, then
     * for each matching item in the index, DynamoDB fetches the entire item from the
     * parent table. If the index is configured to project all item attributes, then
     * all of the data can be obtained from the local secondary index, and no fetching
     * is required.</p> </li> <li> <p> <code>ALL_PROJECTED_ATTRIBUTES</code> - Allowed
     * only when querying an index. Retrieves all attributes that have been projected
     * into the index. If the index is configured to project all attributes, this
     * return value is equivalent to specifying <code>ALL_ATTRIBUTES</code>.</p> </li>
     * <li> <p> <code>COUNT</code> - Returns the number of matching items, rather than
     * the matching items themselves. Note that this uses the same quantity of read
     * capacity units as getting the items, and is subject to the same item size
     * calculations.</p> </li> <li> <p> <code>SPECIFIC_ATTRIBUTES</code> - Returns only
     * the attributes listed in <code>ProjectionExpression</code>. This return value is
     * equivalent to specifying <code>ProjectionExpression</code> without specifying
     * any value for <code>Select</code>.</p> <p>If you query or scan a local secondary
     * index and request only attributes that are projected into that index, the
     * operation will read only the index and not the table. If any of the requested
     * attributes are not projected into the local secondary index, DynamoDB fetches
     * each of these attributes from the parent table. This extra fetching incurs
     * additional throughput cost and latency.</p> <p>If you query or scan a global
     * secondary index, you can only request attributes that are projected into the
     * index. Global secondary index queries cannot fetch attributes from the parent
     * table.</p> </li> </ul> <p>If neither <code>Select</code> nor
     * <code>ProjectionExpression</code> are specified, DynamoDB defaults to
     * <code>ALL_ATTRIBUTES</code> when accessing a table, and
     * <code>ALL_PROJECTED_ATTRIBUTES</code> when accessing an index. You cannot use
     * both <code>Select</code> and <code>ProjectionExpression</code> together in a
     * single request, unless the value for <code>Select</code> is
     * <code>SPECIFIC_ATTRIBUTES</code>. (This usage is equivalent to specifying
     * <code>ProjectionExpression</code> without any value for
     * <code>Select</code>.)</p>  <p>If you use the
     * <code>ProjectionExpression</code> parameter, then the value for
     * <code>Select</code> can only be <code>SPECIFIC_ATTRIBUTES</code>. Any other
     * value for <code>Select</code> will return an error.</p> 
     */
    inline const Select& GetSelect() const{ return m_select; }
    inline bool SelectHasBeenSet() const { return m_selectHasBeenSet; }
    inline void SetSelect(const Select& value) { m_selectHasBeenSet = true; m_select = value; }
    inline void SetSelect(Select&& value) { m_selectHasBeenSet = true; m_select = std::move(value); }
    inline QueryRequest& WithSelect(const Select& value) { SetSelect(value); return *this;}
    inline QueryRequest& WithSelect(Select&& value) { SetSelect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a legacy parameter. Use <code>ProjectionExpression</code> instead.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.AttributesToGet.html">AttributesToGet</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesToGet() const{ return m_attributesToGet; }
    inline bool AttributesToGetHasBeenSet() const { return m_attributesToGetHasBeenSet; }
    inline void SetAttributesToGet(const Aws::Vector<Aws::String>& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }
    inline void SetAttributesToGet(Aws::Vector<Aws::String>&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = std::move(value); }
    inline QueryRequest& WithAttributesToGet(const Aws::Vector<Aws::String>& value) { SetAttributesToGet(value); return *this;}
    inline QueryRequest& WithAttributesToGet(Aws::Vector<Aws::String>&& value) { SetAttributesToGet(std::move(value)); return *this;}
    inline QueryRequest& AddAttributesToGet(const Aws::String& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    inline QueryRequest& AddAttributesToGet(Aws::String&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(std::move(value)); return *this; }
    inline QueryRequest& AddAttributesToGet(const char* value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to evaluate (not necessarily the number of
     * matching items). If DynamoDB processes the number of items up to the limit while
     * processing the results, it stops the operation and returns the matching values
     * up to that point, and a key in <code>LastEvaluatedKey</code> to apply in a
     * subsequent operation, so that you can pick up where you left off. Also, if the
     * processed dataset size exceeds 1 MB before DynamoDB reaches this limit, it stops
     * the operation and returns the matching values up to the limit, and a key in
     * <code>LastEvaluatedKey</code> to apply in a subsequent operation to continue the
     * operation. For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/QueryAndScan.html">Query
     * and Scan</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline QueryRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the read consistency model: If set to <code>true</code>, then the
     * operation uses strongly consistent reads; otherwise, the operation uses
     * eventually consistent reads.</p> <p>Strongly consistent reads are not supported
     * on global secondary indexes. If you query a global secondary index with
     * <code>ConsistentRead</code> set to <code>true</code>, you will receive a
     * <code>ValidationException</code>.</p>
     */
    inline bool GetConsistentRead() const{ return m_consistentRead; }
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }
    inline QueryRequest& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is a legacy parameter. Use <code>KeyConditionExpression</code> instead.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.KeyConditions.html">KeyConditions</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Condition>& GetKeyConditions() const{ return m_keyConditions; }
    inline bool KeyConditionsHasBeenSet() const { return m_keyConditionsHasBeenSet; }
    inline void SetKeyConditions(const Aws::Map<Aws::String, Condition>& value) { m_keyConditionsHasBeenSet = true; m_keyConditions = value; }
    inline void SetKeyConditions(Aws::Map<Aws::String, Condition>&& value) { m_keyConditionsHasBeenSet = true; m_keyConditions = std::move(value); }
    inline QueryRequest& WithKeyConditions(const Aws::Map<Aws::String, Condition>& value) { SetKeyConditions(value); return *this;}
    inline QueryRequest& WithKeyConditions(Aws::Map<Aws::String, Condition>&& value) { SetKeyConditions(std::move(value)); return *this;}
    inline QueryRequest& AddKeyConditions(const Aws::String& key, const Condition& value) { m_keyConditionsHasBeenSet = true; m_keyConditions.emplace(key, value); return *this; }
    inline QueryRequest& AddKeyConditions(Aws::String&& key, const Condition& value) { m_keyConditionsHasBeenSet = true; m_keyConditions.emplace(std::move(key), value); return *this; }
    inline QueryRequest& AddKeyConditions(const Aws::String& key, Condition&& value) { m_keyConditionsHasBeenSet = true; m_keyConditions.emplace(key, std::move(value)); return *this; }
    inline QueryRequest& AddKeyConditions(Aws::String&& key, Condition&& value) { m_keyConditionsHasBeenSet = true; m_keyConditions.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryRequest& AddKeyConditions(const char* key, Condition&& value) { m_keyConditionsHasBeenSet = true; m_keyConditions.emplace(key, std::move(value)); return *this; }
    inline QueryRequest& AddKeyConditions(const char* key, const Condition& value) { m_keyConditionsHasBeenSet = true; m_keyConditions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is a legacy parameter. Use <code>FilterExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.QueryFilter.html">QueryFilter</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Condition>& GetQueryFilter() const{ return m_queryFilter; }
    inline bool QueryFilterHasBeenSet() const { return m_queryFilterHasBeenSet; }
    inline void SetQueryFilter(const Aws::Map<Aws::String, Condition>& value) { m_queryFilterHasBeenSet = true; m_queryFilter = value; }
    inline void SetQueryFilter(Aws::Map<Aws::String, Condition>&& value) { m_queryFilterHasBeenSet = true; m_queryFilter = std::move(value); }
    inline QueryRequest& WithQueryFilter(const Aws::Map<Aws::String, Condition>& value) { SetQueryFilter(value); return *this;}
    inline QueryRequest& WithQueryFilter(Aws::Map<Aws::String, Condition>&& value) { SetQueryFilter(std::move(value)); return *this;}
    inline QueryRequest& AddQueryFilter(const Aws::String& key, const Condition& value) { m_queryFilterHasBeenSet = true; m_queryFilter.emplace(key, value); return *this; }
    inline QueryRequest& AddQueryFilter(Aws::String&& key, const Condition& value) { m_queryFilterHasBeenSet = true; m_queryFilter.emplace(std::move(key), value); return *this; }
    inline QueryRequest& AddQueryFilter(const Aws::String& key, Condition&& value) { m_queryFilterHasBeenSet = true; m_queryFilter.emplace(key, std::move(value)); return *this; }
    inline QueryRequest& AddQueryFilter(Aws::String&& key, Condition&& value) { m_queryFilterHasBeenSet = true; m_queryFilter.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryRequest& AddQueryFilter(const char* key, Condition&& value) { m_queryFilterHasBeenSet = true; m_queryFilter.emplace(key, std::move(value)); return *this; }
    inline QueryRequest& AddQueryFilter(const char* key, const Condition& value) { m_queryFilterHasBeenSet = true; m_queryFilter.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is a legacy parameter. Use <code>FilterExpression</code> instead. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/LegacyConditionalParameters.ConditionalOperator.html">ConditionalOperator</a>
     * in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const ConditionalOperator& GetConditionalOperator() const{ return m_conditionalOperator; }
    inline bool ConditionalOperatorHasBeenSet() const { return m_conditionalOperatorHasBeenSet; }
    inline void SetConditionalOperator(const ConditionalOperator& value) { m_conditionalOperatorHasBeenSet = true; m_conditionalOperator = value; }
    inline void SetConditionalOperator(ConditionalOperator&& value) { m_conditionalOperatorHasBeenSet = true; m_conditionalOperator = std::move(value); }
    inline QueryRequest& WithConditionalOperator(const ConditionalOperator& value) { SetConditionalOperator(value); return *this;}
    inline QueryRequest& WithConditionalOperator(ConditionalOperator&& value) { SetConditionalOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the order for index traversal: If <code>true</code> (default), the
     * traversal is performed in ascending order; if <code>false</code>, the traversal
     * is performed in descending order. </p> <p>Items with the same partition key
     * value are stored in sorted order by sort key. If the sort key data type is
     * Number, the results are stored in numeric order. For type String, the results
     * are stored in order of UTF-8 bytes. For type Binary, DynamoDB treats each byte
     * of the binary data as unsigned.</p> <p>If <code>ScanIndexForward</code> is
     * <code>true</code>, DynamoDB returns the results in the order in which they are
     * stored (by sort key value). This is the default behavior. If
     * <code>ScanIndexForward</code> is <code>false</code>, DynamoDB reads the results
     * in reverse order by sort key value, and then returns the results to the
     * client.</p>
     */
    inline bool GetScanIndexForward() const{ return m_scanIndexForward; }
    inline bool ScanIndexForwardHasBeenSet() const { return m_scanIndexForwardHasBeenSet; }
    inline void SetScanIndexForward(bool value) { m_scanIndexForwardHasBeenSet = true; m_scanIndexForward = value; }
    inline QueryRequest& WithScanIndexForward(bool value) { SetScanIndexForward(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary key of the first item that this operation will evaluate. Use the
     * value that was returned for <code>LastEvaluatedKey</code> in the previous
     * operation.</p> <p>The data type for <code>ExclusiveStartKey</code> must be
     * String, Number, or Binary. No set data types are allowed.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExclusiveStartKey() const{ return m_exclusiveStartKey; }
    inline bool ExclusiveStartKeyHasBeenSet() const { return m_exclusiveStartKeyHasBeenSet; }
    inline void SetExclusiveStartKey(const Aws::Map<Aws::String, AttributeValue>& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey = value; }
    inline void SetExclusiveStartKey(Aws::Map<Aws::String, AttributeValue>&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey = std::move(value); }
    inline QueryRequest& WithExclusiveStartKey(const Aws::Map<Aws::String, AttributeValue>& value) { SetExclusiveStartKey(value); return *this;}
    inline QueryRequest& WithExclusiveStartKey(Aws::Map<Aws::String, AttributeValue>&& value) { SetExclusiveStartKey(std::move(value)); return *this;}
    inline QueryRequest& AddExclusiveStartKey(const Aws::String& key, const AttributeValue& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey.emplace(key, value); return *this; }
    inline QueryRequest& AddExclusiveStartKey(Aws::String&& key, const AttributeValue& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey.emplace(std::move(key), value); return *this; }
    inline QueryRequest& AddExclusiveStartKey(const Aws::String& key, AttributeValue&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey.emplace(key, std::move(value)); return *this; }
    inline QueryRequest& AddExclusiveStartKey(Aws::String&& key, AttributeValue&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryRequest& AddExclusiveStartKey(const char* key, AttributeValue&& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey.emplace(key, std::move(value)); return *this; }
    inline QueryRequest& AddExclusiveStartKey(const char* key, const AttributeValue& value) { m_exclusiveStartKeyHasBeenSet = true; m_exclusiveStartKey.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const ReturnConsumedCapacity& GetReturnConsumedCapacity() const{ return m_returnConsumedCapacity; }
    inline bool ReturnConsumedCapacityHasBeenSet() const { return m_returnConsumedCapacityHasBeenSet; }
    inline void SetReturnConsumedCapacity(const ReturnConsumedCapacity& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = value; }
    inline void SetReturnConsumedCapacity(ReturnConsumedCapacity&& value) { m_returnConsumedCapacityHasBeenSet = true; m_returnConsumedCapacity = std::move(value); }
    inline QueryRequest& WithReturnConsumedCapacity(const ReturnConsumedCapacity& value) { SetReturnConsumedCapacity(value); return *this;}
    inline QueryRequest& WithReturnConsumedCapacity(ReturnConsumedCapacity&& value) { SetReturnConsumedCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that identifies one or more attributes to retrieve from the table.
     * These attributes can include scalars, sets, or elements of a JSON document. The
     * attributes in the expression must be separated by commas.</p> <p>If no attribute
     * names are specified, then all attributes will be returned. If any of the
     * requested attributes are not found, they will not appear in the result.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.AccessingItemAttributes.html">Accessing
     * Item Attributes</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetProjectionExpression() const{ return m_projectionExpression; }
    inline bool ProjectionExpressionHasBeenSet() const { return m_projectionExpressionHasBeenSet; }
    inline void SetProjectionExpression(const Aws::String& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = value; }
    inline void SetProjectionExpression(Aws::String&& value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression = std::move(value); }
    inline void SetProjectionExpression(const char* value) { m_projectionExpressionHasBeenSet = true; m_projectionExpression.assign(value); }
    inline QueryRequest& WithProjectionExpression(const Aws::String& value) { SetProjectionExpression(value); return *this;}
    inline QueryRequest& WithProjectionExpression(Aws::String&& value) { SetProjectionExpression(std::move(value)); return *this;}
    inline QueryRequest& WithProjectionExpression(const char* value) { SetProjectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that contains conditions that DynamoDB applies after the
     * <code>Query</code> operation, but before the data is returned to you. Items that
     * do not satisfy the <code>FilterExpression</code> criteria are not returned.</p>
     * <p>A <code>FilterExpression</code> does not allow key attributes. You cannot
     * define a filter expression based on a partition key or a sort key.</p> 
     * <p>A <code>FilterExpression</code> is applied after the items have already been
     * read; the process of filtering does not consume any additional read capacity
     * units.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Query.FilterExpression.html">Filter
     * Expressions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::move(value); }
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }
    inline QueryRequest& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}
    inline QueryRequest& WithFilterExpression(Aws::String&& value) { SetFilterExpression(std::move(value)); return *this;}
    inline QueryRequest& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition that specifies the key values for items to be retrieved by the
     * <code>Query</code> action.</p> <p>The condition must perform an equality test on
     * a single partition key value.</p> <p>The condition can optionally perform one of
     * several comparison tests on a single sort key value. This allows
     * <code>Query</code> to retrieve one item with a given partition key value and
     * sort key value, or several items that have the same partition key value but
     * different sort key values.</p> <p>The partition key equality test is required,
     * and must be specified in the following format:</p> <p>
     * <code>partitionKeyName</code> <i>=</i> <code>:partitionkeyval</code> </p> <p>If
     * you also want to provide a condition for the sort key, it must be combined using
     * <code>AND</code> with the condition for the sort key. Following is an example,
     * using the <b>=</b> comparison operator for the sort key:</p> <p>
     * <code>partitionKeyName</code> <code>=</code> <code>:partitionkeyval</code>
     * <code>AND</code> <code>sortKeyName</code> <code>=</code>
     * <code>:sortkeyval</code> </p> <p>Valid comparisons for the sort key condition
     * are as follows:</p> <ul> <li> <p> <code>sortKeyName</code> <code>=</code>
     * <code>:sortkeyval</code> - true if the sort key value is equal to
     * <code>:sortkeyval</code>.</p> </li> <li> <p> <code>sortKeyName</code>
     * <code>&lt;</code> <code>:sortkeyval</code> - true if the sort key value is less
     * than <code>:sortkeyval</code>.</p> </li> <li> <p> <code>sortKeyName</code>
     * <code>&lt;=</code> <code>:sortkeyval</code> - true if the sort key value is less
     * than or equal to <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <code>&gt;</code> <code>:sortkeyval</code> - true if
     * the sort key value is greater than <code>:sortkeyval</code>.</p> </li> <li> <p>
     * <code>sortKeyName</code> <code>&gt;= </code> <code>:sortkeyval</code> - true if
     * the sort key value is greater than or equal to <code>:sortkeyval</code>.</p>
     * </li> <li> <p> <code>sortKeyName</code> <code>BETWEEN</code>
     * <code>:sortkeyval1</code> <code>AND</code> <code>:sortkeyval2</code> - true if
     * the sort key value is greater than or equal to <code>:sortkeyval1</code>, and
     * less than or equal to <code>:sortkeyval2</code>.</p> </li> <li> <p>
     * <code>begins_with (</code> <code>sortKeyName</code>, <code>:sortkeyval</code>
     * <code>)</code> - true if the sort key value begins with a particular operand.
     * (You cannot use this function with a sort key that is of type Number.) Note that
     * the function name <code>begins_with</code> is case-sensitive.</p> </li> </ul>
     * <p>Use the <code>ExpressionAttributeValues</code> parameter to replace tokens
     * such as <code>:partitionval</code> and <code>:sortval</code> with actual values
     * at runtime.</p> <p>You can optionally use the
     * <code>ExpressionAttributeNames</code> parameter to replace the names of the
     * partition key and sort key with placeholder tokens. This option might be
     * necessary if an attribute name conflicts with a DynamoDB reserved word. For
     * example, the following <code>KeyConditionExpression</code> parameter causes an
     * error because <i>Size</i> is a reserved word:</p> <ul> <li> <p> <code>Size =
     * :myval</code> </p> </li> </ul> <p>To work around this, define a placeholder
     * (such a <code>#S</code>) to represent the attribute name <i>Size</i>.
     * <code>KeyConditionExpression</code> then is as follows:</p> <ul> <li> <p>
     * <code>#S = :myval</code> </p> </li> </ul> <p>For a list of reserved words, see
     * <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ReservedWords.html">Reserved
     * Words</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p> <p>For more
     * information on <code>ExpressionAttributeNames</code> and
     * <code>ExpressionAttributeValues</code>, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/ExpressionPlaceholders.html">Using
     * Placeholders for Attribute Names and Values</a> in the <i>Amazon DynamoDB
     * Developer Guide</i>.</p>
     */
    inline const Aws::String& GetKeyConditionExpression() const{ return m_keyConditionExpression; }
    inline bool KeyConditionExpressionHasBeenSet() const { return m_keyConditionExpressionHasBeenSet; }
    inline void SetKeyConditionExpression(const Aws::String& value) { m_keyConditionExpressionHasBeenSet = true; m_keyConditionExpression = value; }
    inline void SetKeyConditionExpression(Aws::String&& value) { m_keyConditionExpressionHasBeenSet = true; m_keyConditionExpression = std::move(value); }
    inline void SetKeyConditionExpression(const char* value) { m_keyConditionExpressionHasBeenSet = true; m_keyConditionExpression.assign(value); }
    inline QueryRequest& WithKeyConditionExpression(const Aws::String& value) { SetKeyConditionExpression(value); return *this;}
    inline QueryRequest& WithKeyConditionExpression(Aws::String&& value) { SetKeyConditionExpression(std::move(value)); return *this;}
    inline QueryRequest& WithKeyConditionExpression(const char* value) { SetKeyConditionExpression(value); return *this;}
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
    inline QueryRequest& WithExpressionAttributeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetExpressionAttributeNames(value); return *this;}
    inline QueryRequest& WithExpressionAttributeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetExpressionAttributeNames(std::move(value)); return *this;}
    inline QueryRequest& AddExpressionAttributeNames(const Aws::String& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }
    inline QueryRequest& AddExpressionAttributeNames(Aws::String&& key, const Aws::String& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }
    inline QueryRequest& AddExpressionAttributeNames(const Aws::String& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }
    inline QueryRequest& AddExpressionAttributeNames(Aws::String&& key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryRequest& AddExpressionAttributeNames(const char* key, Aws::String&& value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, std::move(value)); return *this; }
    inline QueryRequest& AddExpressionAttributeNames(Aws::String&& key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(std::move(key), value); return *this; }
    inline QueryRequest& AddExpressionAttributeNames(const char* key, const char* value) { m_expressionAttributeNamesHasBeenSet = true; m_expressionAttributeNames.emplace(key, value); return *this; }
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
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Expressions.SpecifyingConditions.html">Specifying
     * Conditions</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetExpressionAttributeValues() const{ return m_expressionAttributeValues; }
    inline bool ExpressionAttributeValuesHasBeenSet() const { return m_expressionAttributeValuesHasBeenSet; }
    inline void SetExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = value; }
    inline void SetExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues = std::move(value); }
    inline QueryRequest& WithExpressionAttributeValues(const Aws::Map<Aws::String, AttributeValue>& value) { SetExpressionAttributeValues(value); return *this;}
    inline QueryRequest& WithExpressionAttributeValues(Aws::Map<Aws::String, AttributeValue>&& value) { SetExpressionAttributeValues(std::move(value)); return *this;}
    inline QueryRequest& AddExpressionAttributeValues(const Aws::String& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, value); return *this; }
    inline QueryRequest& AddExpressionAttributeValues(Aws::String&& key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::move(key), value); return *this; }
    inline QueryRequest& AddExpressionAttributeValues(const Aws::String& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, std::move(value)); return *this; }
    inline QueryRequest& AddExpressionAttributeValues(Aws::String&& key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(std::move(key), std::move(value)); return *this; }
    inline QueryRequest& AddExpressionAttributeValues(const char* key, AttributeValue&& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, std::move(value)); return *this; }
    inline QueryRequest& AddExpressionAttributeValues(const char* key, const AttributeValue& value) { m_expressionAttributeValuesHasBeenSet = true; m_expressionAttributeValues.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Select m_select;
    bool m_selectHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    bool m_consistentRead;
    bool m_consistentReadHasBeenSet = false;

    Aws::Map<Aws::String, Condition> m_keyConditions;
    bool m_keyConditionsHasBeenSet = false;

    Aws::Map<Aws::String, Condition> m_queryFilter;
    bool m_queryFilterHasBeenSet = false;

    ConditionalOperator m_conditionalOperator;
    bool m_conditionalOperatorHasBeenSet = false;

    bool m_scanIndexForward;
    bool m_scanIndexForwardHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_exclusiveStartKey;
    bool m_exclusiveStartKeyHasBeenSet = false;

    ReturnConsumedCapacity m_returnConsumedCapacity;
    bool m_returnConsumedCapacityHasBeenSet = false;

    Aws::String m_projectionExpression;
    bool m_projectionExpressionHasBeenSet = false;

    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet = false;

    Aws::String m_keyConditionExpression;
    bool m_keyConditionExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_expressionAttributeNames;
    bool m_expressionAttributeNamesHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_expressionAttributeValues;
    bool m_expressionAttributeValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
