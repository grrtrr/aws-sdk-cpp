﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class ListExportsRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ListExportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExports"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the exported table.</p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }
    inline ListExportsRequest& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}
    inline ListExportsRequest& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}
    inline ListExportsRequest& WithTableArn(const char* value) { SetTableArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListExportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional string that, if supplied, must be copied from the output of a
     * previous call to <code>ListExports</code>. When provided in this manner, the API
     * fetches the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListExportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListExportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListExportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
