﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/NotebookInstanceSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class ListNotebookInstancesResult
  {
  public:
    AWS_SAGEMAKER_API ListNotebookInstancesResult();
    AWS_SAGEMAKER_API ListNotebookInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListNotebookInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response to the previous <code>ListNotebookInstances</code> request
     * was truncated, SageMaker AI returns this token. To retrieve the next set of
     * notebook instances, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNotebookInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNotebookInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNotebookInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>NotebookInstanceSummary</code> objects, one for each
     * notebook instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceSummary>& GetNotebookInstances() const{ return m_notebookInstances; }
    inline void SetNotebookInstances(const Aws::Vector<NotebookInstanceSummary>& value) { m_notebookInstances = value; }
    inline void SetNotebookInstances(Aws::Vector<NotebookInstanceSummary>&& value) { m_notebookInstances = std::move(value); }
    inline ListNotebookInstancesResult& WithNotebookInstances(const Aws::Vector<NotebookInstanceSummary>& value) { SetNotebookInstances(value); return *this;}
    inline ListNotebookInstancesResult& WithNotebookInstances(Aws::Vector<NotebookInstanceSummary>&& value) { SetNotebookInstances(std::move(value)); return *this;}
    inline ListNotebookInstancesResult& AddNotebookInstances(const NotebookInstanceSummary& value) { m_notebookInstances.push_back(value); return *this; }
    inline ListNotebookInstancesResult& AddNotebookInstances(NotebookInstanceSummary&& value) { m_notebookInstances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNotebookInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNotebookInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNotebookInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<NotebookInstanceSummary> m_notebookInstances;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
