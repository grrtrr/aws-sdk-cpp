﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/RuleBooleanEmailAttribute.h>
#include <aws/mailmanager/model/RuleIsInAddressList.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The union type representing the allowed types of operands for a boolean
   * condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RuleBooleanToEvaluate">AWS
   * API Reference</a></p>
   */
  class RuleBooleanToEvaluate
  {
  public:
    AWS_MAILMANAGER_API RuleBooleanToEvaluate();
    AWS_MAILMANAGER_API RuleBooleanToEvaluate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RuleBooleanToEvaluate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The boolean type representing the allowed attribute types for an email.</p>
     */
    inline const RuleBooleanEmailAttribute& GetAttribute() const{ return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(const RuleBooleanEmailAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline void SetAttribute(RuleBooleanEmailAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }
    inline RuleBooleanToEvaluate& WithAttribute(const RuleBooleanEmailAttribute& value) { SetAttribute(value); return *this;}
    inline RuleBooleanToEvaluate& WithAttribute(RuleBooleanEmailAttribute&& value) { SetAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing the address lists and address list attribute that
     * will be used in evaluation of boolean expression.</p>
     */
    inline const RuleIsInAddressList& GetIsInAddressList() const{ return m_isInAddressList; }
    inline bool IsInAddressListHasBeenSet() const { return m_isInAddressListHasBeenSet; }
    inline void SetIsInAddressList(const RuleIsInAddressList& value) { m_isInAddressListHasBeenSet = true; m_isInAddressList = value; }
    inline void SetIsInAddressList(RuleIsInAddressList&& value) { m_isInAddressListHasBeenSet = true; m_isInAddressList = std::move(value); }
    inline RuleBooleanToEvaluate& WithIsInAddressList(const RuleIsInAddressList& value) { SetIsInAddressList(value); return *this;}
    inline RuleBooleanToEvaluate& WithIsInAddressList(RuleIsInAddressList&& value) { SetIsInAddressList(std::move(value)); return *this;}
    ///@}
  private:

    RuleBooleanEmailAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    RuleIsInAddressList m_isInAddressList;
    bool m_isInAddressListHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
