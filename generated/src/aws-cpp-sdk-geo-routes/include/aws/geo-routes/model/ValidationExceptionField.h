﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>The input fails to satisfy the constraints specified by the Amazon Location
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/ValidationExceptionField">AWS
   * API Reference</a></p>
   */
  class ValidationExceptionField
  {
  public:
    AWS_GEOROUTES_API ValidationExceptionField();
    AWS_GEOROUTES_API ValidationExceptionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API ValidationExceptionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Validation Exception Field.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ValidationExceptionField& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ValidationExceptionField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ValidationExceptionField& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ValidationExceptionField& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ValidationExceptionField& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ValidationExceptionField& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
