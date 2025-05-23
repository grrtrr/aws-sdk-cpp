﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/bedrock-agent-runtime/model/RequireConfirmation.h>
#include <aws/bedrock-agent-runtime/model/ParameterDetail.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p> Defines parameters that the agent needs to invoke from the user to complete
   * the function. Corresponds to an action in an action group. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FunctionDefinition">AWS
   * API Reference</a></p>
   */
  class FunctionDefinition
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API FunctionDefinition();
    AWS_BEDROCKAGENTRUNTIME_API FunctionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API FunctionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A description of the function and its purpose. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline FunctionDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline FunctionDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline FunctionDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A name for the function. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline FunctionDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline FunctionDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline FunctionDefinition& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The parameters that the agent elicits from the user to fulfill the function.
     * </p>
     */
    inline const Aws::Map<Aws::String, ParameterDetail>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, ParameterDetail>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, ParameterDetail>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline FunctionDefinition& WithParameters(const Aws::Map<Aws::String, ParameterDetail>& value) { SetParameters(value); return *this;}
    inline FunctionDefinition& WithParameters(Aws::Map<Aws::String, ParameterDetail>&& value) { SetParameters(std::move(value)); return *this;}
    inline FunctionDefinition& AddParameters(const Aws::String& key, const ParameterDetail& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline FunctionDefinition& AddParameters(Aws::String&& key, const ParameterDetail& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline FunctionDefinition& AddParameters(const Aws::String& key, ParameterDetail&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline FunctionDefinition& AddParameters(Aws::String&& key, ParameterDetail&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline FunctionDefinition& AddParameters(const char* key, ParameterDetail&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline FunctionDefinition& AddParameters(const char* key, const ParameterDetail& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Contains information if user confirmation is required to invoke the
     * function. </p>
     */
    inline const RequireConfirmation& GetRequireConfirmation() const{ return m_requireConfirmation; }
    inline bool RequireConfirmationHasBeenSet() const { return m_requireConfirmationHasBeenSet; }
    inline void SetRequireConfirmation(const RequireConfirmation& value) { m_requireConfirmationHasBeenSet = true; m_requireConfirmation = value; }
    inline void SetRequireConfirmation(RequireConfirmation&& value) { m_requireConfirmationHasBeenSet = true; m_requireConfirmation = std::move(value); }
    inline FunctionDefinition& WithRequireConfirmation(const RequireConfirmation& value) { SetRequireConfirmation(value); return *this;}
    inline FunctionDefinition& WithRequireConfirmation(RequireConfirmation&& value) { SetRequireConfirmation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, ParameterDetail> m_parameters;
    bool m_parametersHasBeenSet = false;

    RequireConfirmation m_requireConfirmation;
    bool m_requireConfirmationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
