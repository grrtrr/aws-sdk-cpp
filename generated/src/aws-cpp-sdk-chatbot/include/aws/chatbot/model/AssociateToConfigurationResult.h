﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace chatbot
{
namespace Model
{
  class AssociateToConfigurationResult
  {
  public:
    AWS_CHATBOT_API AssociateToConfigurationResult();
    AWS_CHATBOT_API AssociateToConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API AssociateToConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateToConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateToConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateToConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
