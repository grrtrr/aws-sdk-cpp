﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeImageAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DescribeImageAttributeRequest::DescribeImageAttributeRequest() : 
    m_attribute(ImageAttributeName::NOT_SET),
    m_attributeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String DescribeImageAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeImageAttribute&";
  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << StringUtils::URLEncode(ImageAttributeNameMapper::GetNameForImageAttributeName(m_attribute)) << "&";
  }

  if(m_imageIdHasBeenSet)
  {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DescribeImageAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
