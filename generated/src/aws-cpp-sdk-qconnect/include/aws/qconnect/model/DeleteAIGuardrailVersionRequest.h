﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class DeleteAIGuardrailVersionRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API DeleteAIGuardrailVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAIGuardrailVersion"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect AI Guardrail.</p>
     */
    inline const Aws::String& GetAiGuardrailId() const{ return m_aiGuardrailId; }
    inline bool AiGuardrailIdHasBeenSet() const { return m_aiGuardrailIdHasBeenSet; }
    inline void SetAiGuardrailId(const Aws::String& value) { m_aiGuardrailIdHasBeenSet = true; m_aiGuardrailId = value; }
    inline void SetAiGuardrailId(Aws::String&& value) { m_aiGuardrailIdHasBeenSet = true; m_aiGuardrailId = std::move(value); }
    inline void SetAiGuardrailId(const char* value) { m_aiGuardrailIdHasBeenSet = true; m_aiGuardrailId.assign(value); }
    inline DeleteAIGuardrailVersionRequest& WithAiGuardrailId(const Aws::String& value) { SetAiGuardrailId(value); return *this;}
    inline DeleteAIGuardrailVersionRequest& WithAiGuardrailId(Aws::String&& value) { SetAiGuardrailId(std::move(value)); return *this;}
    inline DeleteAIGuardrailVersionRequest& WithAiGuardrailId(const char* value) { SetAiGuardrailId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }
    inline DeleteAIGuardrailVersionRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline DeleteAIGuardrailVersionRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline DeleteAIGuardrailVersionRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the AI Guardrail version to be deleted.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline DeleteAIGuardrailVersionRequest& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_aiGuardrailId;
    bool m_aiGuardrailIdHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
