﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
namespace SecurityLake
{
namespace Model
{
  class DeleteCustomLogSourceResult
  {
  public:
    AWS_SECURITYLAKE_API DeleteCustomLogSourceResult();
    AWS_SECURITYLAKE_API DeleteCustomLogSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API DeleteCustomLogSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline const Aws::String& GetCustomDataLocation() const{ return m_customDataLocation; }

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline void SetCustomDataLocation(const Aws::String& value) { m_customDataLocation = value; }

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline void SetCustomDataLocation(Aws::String&& value) { m_customDataLocation = std::move(value); }

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline void SetCustomDataLocation(const char* value) { m_customDataLocation.assign(value); }

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline DeleteCustomLogSourceResult& WithCustomDataLocation(const Aws::String& value) { SetCustomDataLocation(value); return *this;}

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline DeleteCustomLogSourceResult& WithCustomDataLocation(Aws::String&& value) { SetCustomDataLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the partition in the Amazon S3 bucket for Security Lake.</p>
     */
    inline DeleteCustomLogSourceResult& WithCustomDataLocation(const char* value) { SetCustomDataLocation(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteCustomLogSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteCustomLogSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteCustomLogSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_customDataLocation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
