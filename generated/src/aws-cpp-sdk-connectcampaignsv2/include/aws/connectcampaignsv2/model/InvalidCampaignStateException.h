﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/CampaignState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request could not be processed because of conflict in the current state
   * of the campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/InvalidCampaignStateException">AWS
   * API Reference</a></p>
   */
  class InvalidCampaignStateException
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API InvalidCampaignStateException();
    AWS_CONNECTCAMPAIGNSV2_API InvalidCampaignStateException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API InvalidCampaignStateException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CampaignState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const CampaignState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(CampaignState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline InvalidCampaignStateException& WithState(const CampaignState& value) { SetState(value); return *this;}
    inline InvalidCampaignStateException& WithState(CampaignState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline InvalidCampaignStateException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline InvalidCampaignStateException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline InvalidCampaignStateException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetXAmzErrorType() const{ return m_xAmzErrorType; }
    inline bool XAmzErrorTypeHasBeenSet() const { return m_xAmzErrorTypeHasBeenSet; }
    inline void SetXAmzErrorType(const Aws::String& value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType = value; }
    inline void SetXAmzErrorType(Aws::String&& value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType = std::move(value); }
    inline void SetXAmzErrorType(const char* value) { m_xAmzErrorTypeHasBeenSet = true; m_xAmzErrorType.assign(value); }
    inline InvalidCampaignStateException& WithXAmzErrorType(const Aws::String& value) { SetXAmzErrorType(value); return *this;}
    inline InvalidCampaignStateException& WithXAmzErrorType(Aws::String&& value) { SetXAmzErrorType(std::move(value)); return *this;}
    inline InvalidCampaignStateException& WithXAmzErrorType(const char* value) { SetXAmzErrorType(value); return *this;}
    ///@}
  private:

    CampaignState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_xAmzErrorType;
    bool m_xAmzErrorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
