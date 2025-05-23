﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/CommunicationLimitsConfigType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for DeleteCampaignCommunicationLimits API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/DeleteCampaignCommunicationLimitsRequest">AWS
   * API Reference</a></p>
   */
  class DeleteCampaignCommunicationLimitsRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API DeleteCampaignCommunicationLimitsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCampaignCommunicationLimits"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;

    AWS_CONNECTCAMPAIGNSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DeleteCampaignCommunicationLimitsRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeleteCampaignCommunicationLimitsRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeleteCampaignCommunicationLimitsRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const CommunicationLimitsConfigType& GetConfig() const{ return m_config; }
    inline bool ConfigHasBeenSet() const { return m_configHasBeenSet; }
    inline void SetConfig(const CommunicationLimitsConfigType& value) { m_configHasBeenSet = true; m_config = value; }
    inline void SetConfig(CommunicationLimitsConfigType&& value) { m_configHasBeenSet = true; m_config = std::move(value); }
    inline DeleteCampaignCommunicationLimitsRequest& WithConfig(const CommunicationLimitsConfigType& value) { SetConfig(value); return *this;}
    inline DeleteCampaignCommunicationLimitsRequest& WithConfig(CommunicationLimitsConfigType&& value) { SetConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CommunicationLimitsConfigType m_config;
    bool m_configHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
