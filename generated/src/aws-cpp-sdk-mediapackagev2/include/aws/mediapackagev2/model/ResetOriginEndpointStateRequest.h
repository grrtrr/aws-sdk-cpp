﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/Mediapackagev2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

  /**
   */
  class ResetOriginEndpointStateRequest : public Mediapackagev2Request
  {
  public:
    AWS_MEDIAPACKAGEV2_API ResetOriginEndpointStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetOriginEndpointState"; }

    AWS_MEDIAPACKAGEV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the channel group that contains the channel with the origin
     * endpoint that you are resetting.</p>
     */
    inline const Aws::String& GetChannelGroupName() const{ return m_channelGroupName; }
    inline bool ChannelGroupNameHasBeenSet() const { return m_channelGroupNameHasBeenSet; }
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = value; }
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::move(value); }
    inline void SetChannelGroupName(const char* value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName.assign(value); }
    inline ResetOriginEndpointStateRequest& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}
    inline ResetOriginEndpointStateRequest& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}
    inline ResetOriginEndpointStateRequest& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel with the origin endpoint that you are resetting.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline ResetOriginEndpointStateRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline ResetOriginEndpointStateRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline ResetOriginEndpointStateRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the origin endpoint that you are resetting.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const{ return m_originEndpointName; }
    inline bool OriginEndpointNameHasBeenSet() const { return m_originEndpointNameHasBeenSet; }
    inline void SetOriginEndpointName(const Aws::String& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = value; }
    inline void SetOriginEndpointName(Aws::String&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::move(value); }
    inline void SetOriginEndpointName(const char* value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName.assign(value); }
    inline ResetOriginEndpointStateRequest& WithOriginEndpointName(const Aws::String& value) { SetOriginEndpointName(value); return *this;}
    inline ResetOriginEndpointStateRequest& WithOriginEndpointName(Aws::String&& value) { SetOriginEndpointName(std::move(value)); return *this;}
    inline ResetOriginEndpointStateRequest& WithOriginEndpointName(const char* value) { SetOriginEndpointName(value); return *this;}
    ///@}
  private:

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_originEndpointName;
    bool m_originEndpointNameHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
