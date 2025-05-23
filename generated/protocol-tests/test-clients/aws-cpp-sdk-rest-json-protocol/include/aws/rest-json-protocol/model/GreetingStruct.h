﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
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
namespace RestJsonProtocol
{
namespace Model
{

  class GreetingStruct
  {
  public:
    AWS_RESTJSONPROTOCOL_API GreetingStruct();
    AWS_RESTJSONPROTOCOL_API GreetingStruct(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API GreetingStruct& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetHi() const{ return m_hi; }
    inline bool HiHasBeenSet() const { return m_hiHasBeenSet; }
    inline void SetHi(const Aws::String& value) { m_hiHasBeenSet = true; m_hi = value; }
    inline void SetHi(Aws::String&& value) { m_hiHasBeenSet = true; m_hi = std::move(value); }
    inline void SetHi(const char* value) { m_hiHasBeenSet = true; m_hi.assign(value); }
    inline GreetingStruct& WithHi(const Aws::String& value) { SetHi(value); return *this;}
    inline GreetingStruct& WithHi(Aws::String&& value) { SetHi(std::move(value)); return *this;}
    inline GreetingStruct& WithHi(const char* value) { SetHi(value); return *this;}
    ///@}
  private:

    Aws::String m_hi;
    bool m_hiHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
