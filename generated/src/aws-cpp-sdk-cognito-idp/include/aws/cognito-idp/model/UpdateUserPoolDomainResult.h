﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>The UpdateUserPoolDomain response output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolDomainResponse">AWS
   * API Reference</a></p>
   */
  class UpdateUserPoolDomainResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolDomainResult();
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A version number that indicates the state of managed login for your domain.
     * Version <code>1</code> is hosted UI (classic). Version <code>2</code> is the
     * newer managed login with the branding designer. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-managed-login.html">Managed
     * login</a>.</p>
     */
    inline int GetManagedLoginVersion() const{ return m_managedLoginVersion; }
    inline void SetManagedLoginVersion(int value) { m_managedLoginVersion = value; }
    inline UpdateUserPoolDomainResult& WithManagedLoginVersion(int value) { SetManagedLoginVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully-qualified domain name (FQDN) of the Amazon CloudFront distribution
     * that hosts your managed login or classic hosted UI pages. You domain-name
     * authority must have an alias record that points requests for your custom domain
     * to this FQDN. Amazon Cognito returns this value if you set a custom domain with
     * <code>CustomDomainConfig</code>. If you set an Amazon Cognito prefix domain,
     * this operation returns a blank response.</p>
     */
    inline const Aws::String& GetCloudFrontDomain() const{ return m_cloudFrontDomain; }
    inline void SetCloudFrontDomain(const Aws::String& value) { m_cloudFrontDomain = value; }
    inline void SetCloudFrontDomain(Aws::String&& value) { m_cloudFrontDomain = std::move(value); }
    inline void SetCloudFrontDomain(const char* value) { m_cloudFrontDomain.assign(value); }
    inline UpdateUserPoolDomainResult& WithCloudFrontDomain(const Aws::String& value) { SetCloudFrontDomain(value); return *this;}
    inline UpdateUserPoolDomainResult& WithCloudFrontDomain(Aws::String&& value) { SetCloudFrontDomain(std::move(value)); return *this;}
    inline UpdateUserPoolDomainResult& WithCloudFrontDomain(const char* value) { SetCloudFrontDomain(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateUserPoolDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateUserPoolDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateUserPoolDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_managedLoginVersion;

    Aws::String m_cloudFrontDomain;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
