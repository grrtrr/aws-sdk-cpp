﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/DescribeTargetHealthRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Utils;

DescribeTargetHealthRequest::DescribeTargetHealthRequest() : 
    m_targetGroupArnHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_includeHasBeenSet(false)
{
}

Aws::String DescribeTargetHealthRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeTargetHealth&";
  if(m_targetGroupArnHasBeenSet)
  {
    ss << "TargetGroupArn=" << StringUtils::URLEncode(m_targetGroupArn.c_str()) << "&";
  }

  if(m_targetsHasBeenSet)
  {
    if (m_targets.empty())
    {
      ss << "Targets=&";
    }
    else
    {
      unsigned targetsCount = 1;
      for(auto& item : m_targets)
      {
        item.OutputToStream(ss, "Targets.member.", targetsCount, "");
        targetsCount++;
      }
    }
  }

  if(m_includeHasBeenSet)
  {
    if (m_include.empty())
    {
      ss << "Include=&";
    }
    else
    {
      unsigned includeCount = 1;
      for(auto& item : m_include)
      {
        ss << "Include.member." << includeCount << "="
            << StringUtils::URLEncode(DescribeTargetHealthInputIncludeEnumMapper::GetNameForDescribeTargetHealthInputIncludeEnum(item)) << "&";
        includeCount++;
      }
    }
  }

  ss << "Version=2015-12-01";
  return ss.str();
}


void  DescribeTargetHealthRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
