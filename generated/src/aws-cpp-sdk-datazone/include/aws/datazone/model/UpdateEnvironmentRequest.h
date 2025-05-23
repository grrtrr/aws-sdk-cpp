﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/EnvironmentParameter.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class UpdateEnvironmentRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The blueprint version to which the environment should be updated. You can
     * only specify the following string for this parameter: <code>latest</code>.</p>
     */
    inline const Aws::String& GetBlueprintVersion() const{ return m_blueprintVersion; }
    inline bool BlueprintVersionHasBeenSet() const { return m_blueprintVersionHasBeenSet; }
    inline void SetBlueprintVersion(const Aws::String& value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion = value; }
    inline void SetBlueprintVersion(Aws::String&& value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion = std::move(value); }
    inline void SetBlueprintVersion(const char* value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion.assign(value); }
    inline UpdateEnvironmentRequest& WithBlueprintVersion(const Aws::String& value) { SetBlueprintVersion(value); return *this;}
    inline UpdateEnvironmentRequest& WithBlueprintVersion(Aws::String&& value) { SetBlueprintVersion(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithBlueprintVersion(const char* value) { SetBlueprintVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to be updated as part of the <code>UpdateEnvironment</code>
     * action.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain in which the environment is to be updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline UpdateEnvironmentRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline UpdateEnvironmentRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms to be updated as part of the
     * <code>UpdateEnvironment</code> action.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }
    inline UpdateEnvironmentRequest& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline UpdateEnvironmentRequest& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& AddGlossaryTerms(const Aws::String& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    inline UpdateEnvironmentRequest& AddGlossaryTerms(Aws::String&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline UpdateEnvironmentRequest& AddGlossaryTerms(const char* value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the environment that is to be updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateEnvironmentRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateEnvironmentRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to be updated as part of the <code>UpdateEnvironment</code>
     * action.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateEnvironmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateEnvironmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user parameters of the environment.</p>
     */
    inline const Aws::Vector<EnvironmentParameter>& GetUserParameters() const{ return m_userParameters; }
    inline bool UserParametersHasBeenSet() const { return m_userParametersHasBeenSet; }
    inline void SetUserParameters(const Aws::Vector<EnvironmentParameter>& value) { m_userParametersHasBeenSet = true; m_userParameters = value; }
    inline void SetUserParameters(Aws::Vector<EnvironmentParameter>&& value) { m_userParametersHasBeenSet = true; m_userParameters = std::move(value); }
    inline UpdateEnvironmentRequest& WithUserParameters(const Aws::Vector<EnvironmentParameter>& value) { SetUserParameters(value); return *this;}
    inline UpdateEnvironmentRequest& WithUserParameters(Aws::Vector<EnvironmentParameter>&& value) { SetUserParameters(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& AddUserParameters(const EnvironmentParameter& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(value); return *this; }
    inline UpdateEnvironmentRequest& AddUserParameters(EnvironmentParameter&& value) { m_userParametersHasBeenSet = true; m_userParameters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_blueprintVersion;
    bool m_blueprintVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<EnvironmentParameter> m_userParameters;
    bool m_userParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
