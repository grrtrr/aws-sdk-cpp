﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/SimpleScalarPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SimpleScalarPropertiesRequest::SimpleScalarPropertiesRequest() : 
    m_fooHasBeenSet(false),
    m_stringValueHasBeenSet(false),
    m_trueBooleanValue(false),
    m_trueBooleanValueHasBeenSet(false),
    m_falseBooleanValue(false),
    m_falseBooleanValueHasBeenSet(false),
    m_byteValue(0),
    m_byteValueHasBeenSet(false),
    m_shortValue(0),
    m_shortValueHasBeenSet(false),
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_longValue(0),
    m_longValueHasBeenSet(false),
    m_floatValue(0.0),
    m_floatValueHasBeenSet(false),
    m_doubleValue(0.0),
    m_doubleValueHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

Aws::String SimpleScalarPropertiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stringValueHasBeenSet)
  {
   payload.WithString("stringValue", m_stringValue);

  }

  if(m_trueBooleanValueHasBeenSet)
  {
   payload.WithBool("trueBooleanValue", m_trueBooleanValue);

  }

  if(m_falseBooleanValueHasBeenSet)
  {
   payload.WithBool("falseBooleanValue", m_falseBooleanValue);

  }

  if(m_byteValueHasBeenSet)
  {
   payload.WithInteger("byteValue", m_byteValue);

  }

  if(m_shortValueHasBeenSet)
  {
   payload.WithInteger("shortValue", m_shortValue);

  }

  if(m_integerValueHasBeenSet)
  {
   payload.WithInteger("integerValue", m_integerValue);

  }

  if(m_longValueHasBeenSet)
  {
   payload.WithInt64("longValue", m_longValue);

  }

  if(m_floatValueHasBeenSet)
  {
   payload.WithDouble("floatValue", m_floatValue);

  }

  if(m_doubleValueHasBeenSet)
  {
   payload.WithDouble("DoubleDribble", m_doubleValue);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SimpleScalarPropertiesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_fooHasBeenSet)
  {
    ss << m_foo;
    headers.emplace("x-foo",  ss.str());
    ss.str("");
  }

  if(m_requestIdHasBeenSet)
  {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid",  ss.str());
    ss.str("");
  }

  return headers;

}




