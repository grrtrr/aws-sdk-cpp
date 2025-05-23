﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/AuthType.h>
#include <aws/vpc-lattice/model/SharingConfig.h>
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
namespace VPCLattice
{
namespace Model
{
  class CreateServiceNetworkResult
  {
  public:
    AWS_VPCLATTICE_API CreateServiceNetworkResult();
    AWS_VPCLATTICE_API CreateServiceNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VPCLATTICE_API CreateServiceNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateServiceNetworkResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateServiceNetworkResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateServiceNetworkResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IAM policy.</p>
     */
    inline const AuthType& GetAuthType() const{ return m_authType; }
    inline void SetAuthType(const AuthType& value) { m_authType = value; }
    inline void SetAuthType(AuthType&& value) { m_authType = std::move(value); }
    inline CreateServiceNetworkResult& WithAuthType(const AuthType& value) { SetAuthType(value); return *this;}
    inline CreateServiceNetworkResult& WithAuthType(AuthType&& value) { SetAuthType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service network.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateServiceNetworkResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateServiceNetworkResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateServiceNetworkResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service network.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateServiceNetworkResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateServiceNetworkResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateServiceNetworkResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the service network is enabled for sharing.</p>
     */
    inline const SharingConfig& GetSharingConfig() const{ return m_sharingConfig; }
    inline void SetSharingConfig(const SharingConfig& value) { m_sharingConfig = value; }
    inline void SetSharingConfig(SharingConfig&& value) { m_sharingConfig = std::move(value); }
    inline CreateServiceNetworkResult& WithSharingConfig(const SharingConfig& value) { SetSharingConfig(value); return *this;}
    inline CreateServiceNetworkResult& WithSharingConfig(SharingConfig&& value) { SetSharingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateServiceNetworkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateServiceNetworkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateServiceNetworkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    AuthType m_authType;

    Aws::String m_id;

    Aws::String m_name;

    SharingConfig m_sharingConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
