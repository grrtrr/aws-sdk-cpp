﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>Represents the response from the server to the request to get the header
   * information of the CSV file for the user import job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetCSVHeaderResponse">AWS
   * API Reference</a></p>
   */
  class GetCSVHeaderResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetCSVHeaderResult();
    AWS_COGNITOIDENTITYPROVIDER_API GetCSVHeaderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetCSVHeaderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the requested user pool.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolId.assign(value); }
    inline GetCSVHeaderResult& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline GetCSVHeaderResult& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline GetCSVHeaderResult& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of attributes from your user pool. Save this output to
     * a <code>.csv</code> file and populate it with the attributes of the users that
     * you want to import.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCSVHeader() const{ return m_cSVHeader; }
    inline void SetCSVHeader(const Aws::Vector<Aws::String>& value) { m_cSVHeader = value; }
    inline void SetCSVHeader(Aws::Vector<Aws::String>&& value) { m_cSVHeader = std::move(value); }
    inline GetCSVHeaderResult& WithCSVHeader(const Aws::Vector<Aws::String>& value) { SetCSVHeader(value); return *this;}
    inline GetCSVHeaderResult& WithCSVHeader(Aws::Vector<Aws::String>&& value) { SetCSVHeader(std::move(value)); return *this;}
    inline GetCSVHeaderResult& AddCSVHeader(const Aws::String& value) { m_cSVHeader.push_back(value); return *this; }
    inline GetCSVHeaderResult& AddCSVHeader(Aws::String&& value) { m_cSVHeader.push_back(std::move(value)); return *this; }
    inline GetCSVHeaderResult& AddCSVHeader(const char* value) { m_cSVHeader.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCSVHeaderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCSVHeaderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCSVHeaderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;

    Aws::Vector<Aws::String> m_cSVHeader;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
