﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeUsageLimitsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeUsageLimitsRequest::DescribeUsageLimitsRequest() : 
    m_usageLimitIdHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_featureType(UsageLimitFeatureType::NOT_SET),
    m_featureTypeHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_tagKeysHasBeenSet(false),
    m_tagValuesHasBeenSet(false)
{
}

Aws::String DescribeUsageLimitsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeUsageLimits&";
  if(m_usageLimitIdHasBeenSet)
  {
    ss << "UsageLimitId=" << StringUtils::URLEncode(m_usageLimitId.c_str()) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_featureTypeHasBeenSet)
  {
    ss << "FeatureType=" << StringUtils::URLEncode(UsageLimitFeatureTypeMapper::GetNameForUsageLimitFeatureType(m_featureType)) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_tagKeysHasBeenSet)
  {
    if (m_tagKeys.empty())
    {
      ss << "TagKeys=&";
    }
    else
    {
      unsigned tagKeysCount = 1;
      for(auto& item : m_tagKeys)
      {
        ss << "TagKeys.TagKey." << tagKeysCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        tagKeysCount++;
      }
    }
  }

  if(m_tagValuesHasBeenSet)
  {
    if (m_tagValues.empty())
    {
      ss << "TagValues=&";
    }
    else
    {
      unsigned tagValuesCount = 1;
      for(auto& item : m_tagValues)
      {
        ss << "TagValues.TagValue." << tagValuesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        tagValuesCount++;
      }
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribeUsageLimitsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
