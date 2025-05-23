﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/UsageLimit.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

UsageLimit::UsageLimit() : 
    m_usageLimitIdHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_featureType(UsageLimitFeatureType::NOT_SET),
    m_featureTypeHasBeenSet(false),
    m_limitType(UsageLimitLimitType::NOT_SET),
    m_limitTypeHasBeenSet(false),
    m_amount(0),
    m_amountHasBeenSet(false),
    m_period(UsageLimitPeriod::NOT_SET),
    m_periodHasBeenSet(false),
    m_breachAction(UsageLimitBreachAction::NOT_SET),
    m_breachActionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

UsageLimit::UsageLimit(const XmlNode& xmlNode)
  : UsageLimit()
{
  *this = xmlNode;
}

UsageLimit& UsageLimit::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode usageLimitIdNode = resultNode.FirstChild("UsageLimitId");
    if(!usageLimitIdNode.IsNull())
    {
      m_usageLimitId = Aws::Utils::Xml::DecodeEscapedXmlText(usageLimitIdNode.GetText());
      m_usageLimitIdHasBeenSet = true;
    }
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
      m_clusterIdentifierHasBeenSet = true;
    }
    XmlNode featureTypeNode = resultNode.FirstChild("FeatureType");
    if(!featureTypeNode.IsNull())
    {
      m_featureType = UsageLimitFeatureTypeMapper::GetUsageLimitFeatureTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(featureTypeNode.GetText()).c_str()).c_str());
      m_featureTypeHasBeenSet = true;
    }
    XmlNode limitTypeNode = resultNode.FirstChild("LimitType");
    if(!limitTypeNode.IsNull())
    {
      m_limitType = UsageLimitLimitTypeMapper::GetUsageLimitLimitTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(limitTypeNode.GetText()).c_str()).c_str());
      m_limitTypeHasBeenSet = true;
    }
    XmlNode amountNode = resultNode.FirstChild("Amount");
    if(!amountNode.IsNull())
    {
      m_amount = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amountNode.GetText()).c_str()).c_str());
      m_amountHasBeenSet = true;
    }
    XmlNode periodNode = resultNode.FirstChild("Period");
    if(!periodNode.IsNull())
    {
      m_period = UsageLimitPeriodMapper::GetUsageLimitPeriodForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(periodNode.GetText()).c_str()).c_str());
      m_periodHasBeenSet = true;
    }
    XmlNode breachActionNode = resultNode.FirstChild("BreachAction");
    if(!breachActionNode.IsNull())
    {
      m_breachAction = UsageLimitBreachActionMapper::GetUsageLimitBreachActionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(breachActionNode.GetText()).c_str()).c_str());
      m_breachActionHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void UsageLimit::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_usageLimitIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".UsageLimitId=" << StringUtils::URLEncode(m_usageLimitId.c_str()) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_featureTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".FeatureType=" << StringUtils::URLEncode(UsageLimitFeatureTypeMapper::GetNameForUsageLimitFeatureType(m_featureType)) << "&";
  }

  if(m_limitTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LimitType=" << StringUtils::URLEncode(UsageLimitLimitTypeMapper::GetNameForUsageLimitLimitType(m_limitType)) << "&";
  }

  if(m_amountHasBeenSet)
  {
      oStream << location << index << locationValue << ".Amount=" << m_amount << "&";
  }

  if(m_periodHasBeenSet)
  {
      oStream << location << index << locationValue << ".Period=" << StringUtils::URLEncode(UsageLimitPeriodMapper::GetNameForUsageLimitPeriod(m_period)) << "&";
  }

  if(m_breachActionHasBeenSet)
  {
      oStream << location << index << locationValue << ".BreachAction=" << StringUtils::URLEncode(UsageLimitBreachActionMapper::GetNameForUsageLimitBreachAction(m_breachAction)) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tags.Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  Aws::StringStream responseMetadataLocationAndMemberSs;
  responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
  m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
}

void UsageLimit::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_usageLimitIdHasBeenSet)
  {
      oStream << location << ".UsageLimitId=" << StringUtils::URLEncode(m_usageLimitId.c_str()) << "&";
  }
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }
  if(m_featureTypeHasBeenSet)
  {
      oStream << location << ".FeatureType=" << StringUtils::URLEncode(UsageLimitFeatureTypeMapper::GetNameForUsageLimitFeatureType(m_featureType)) << "&";
  }
  if(m_limitTypeHasBeenSet)
  {
      oStream << location << ".LimitType=" << StringUtils::URLEncode(UsageLimitLimitTypeMapper::GetNameForUsageLimitLimitType(m_limitType)) << "&";
  }
  if(m_amountHasBeenSet)
  {
      oStream << location << ".Amount=" << m_amount << "&";
  }
  if(m_periodHasBeenSet)
  {
      oStream << location << ".Period=" << StringUtils::URLEncode(UsageLimitPeriodMapper::GetNameForUsageLimitPeriod(m_period)) << "&";
  }
  if(m_breachActionHasBeenSet)
  {
      oStream << location << ".BreachAction=" << StringUtils::URLEncode(UsageLimitBreachActionMapper::GetNameForUsageLimitBreachAction(m_breachAction)) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".Tags.Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  Aws::String responseMetadataLocationAndMember(location);
  responseMetadataLocationAndMember += ".ResponseMetadata";
  m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
