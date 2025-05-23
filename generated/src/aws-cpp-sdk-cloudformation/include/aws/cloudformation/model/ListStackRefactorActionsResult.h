﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/StackRefactorAction.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class ListStackRefactorActionsResult
  {
  public:
    AWS_CLOUDFORMATION_API ListStackRefactorActionsResult();
    AWS_CLOUDFORMATION_API ListStackRefactorActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API ListStackRefactorActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The stack refactor actions.</p>
     */
    inline const Aws::Vector<StackRefactorAction>& GetStackRefactorActions() const{ return m_stackRefactorActions; }
    inline void SetStackRefactorActions(const Aws::Vector<StackRefactorAction>& value) { m_stackRefactorActions = value; }
    inline void SetStackRefactorActions(Aws::Vector<StackRefactorAction>&& value) { m_stackRefactorActions = std::move(value); }
    inline ListStackRefactorActionsResult& WithStackRefactorActions(const Aws::Vector<StackRefactorAction>& value) { SetStackRefactorActions(value); return *this;}
    inline ListStackRefactorActionsResult& WithStackRefactorActions(Aws::Vector<StackRefactorAction>&& value) { SetStackRefactorActions(std::move(value)); return *this;}
    inline ListStackRefactorActionsResult& AddStackRefactorActions(const StackRefactorAction& value) { m_stackRefactorActions.push_back(value); return *this; }
    inline ListStackRefactorActionsResult& AddStackRefactorActions(StackRefactorAction&& value) { m_stackRefactorActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the request doesn't return all the remaining results,
     * <code>NextToken</code> is set to a token. To retrieve the next set of results,
     * call this action again and assign that token to the request object's
     * <code>NextToken</code> parameter. If the request returns all results,
     * <code>NextToken</code> is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStackRefactorActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStackRefactorActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStackRefactorActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ListStackRefactorActionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ListStackRefactorActionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StackRefactorAction> m_stackRefactorActions;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
