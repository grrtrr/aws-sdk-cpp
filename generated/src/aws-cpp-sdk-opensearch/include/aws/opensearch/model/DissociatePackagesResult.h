﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DomainPackageDetails.h>
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
namespace OpenSearchService
{
namespace Model
{
  class DissociatePackagesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DissociatePackagesResult();
    AWS_OPENSEARCHSERVICE_API DissociatePackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DissociatePackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of package details for the packages that were dissociated from the
     * domain.</p>
     */
    inline const Aws::Vector<DomainPackageDetails>& GetDomainPackageDetailsList() const{ return m_domainPackageDetailsList; }
    inline void SetDomainPackageDetailsList(const Aws::Vector<DomainPackageDetails>& value) { m_domainPackageDetailsList = value; }
    inline void SetDomainPackageDetailsList(Aws::Vector<DomainPackageDetails>&& value) { m_domainPackageDetailsList = std::move(value); }
    inline DissociatePackagesResult& WithDomainPackageDetailsList(const Aws::Vector<DomainPackageDetails>& value) { SetDomainPackageDetailsList(value); return *this;}
    inline DissociatePackagesResult& WithDomainPackageDetailsList(Aws::Vector<DomainPackageDetails>&& value) { SetDomainPackageDetailsList(std::move(value)); return *this;}
    inline DissociatePackagesResult& AddDomainPackageDetailsList(const DomainPackageDetails& value) { m_domainPackageDetailsList.push_back(value); return *this; }
    inline DissociatePackagesResult& AddDomainPackageDetailsList(DomainPackageDetails&& value) { m_domainPackageDetailsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DissociatePackagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DissociatePackagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DissociatePackagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DomainPackageDetails> m_domainPackageDetailsList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
