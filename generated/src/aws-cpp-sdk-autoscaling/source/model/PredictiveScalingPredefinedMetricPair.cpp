﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PredictiveScalingPredefinedMetricPair.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

PredictiveScalingPredefinedMetricPair::PredictiveScalingPredefinedMetricPair() : 
    m_predefinedMetricType(PredefinedMetricPairType::NOT_SET),
    m_predefinedMetricTypeHasBeenSet(false),
    m_resourceLabelHasBeenSet(false)
{
}

PredictiveScalingPredefinedMetricPair::PredictiveScalingPredefinedMetricPair(const XmlNode& xmlNode)
  : PredictiveScalingPredefinedMetricPair()
{
  *this = xmlNode;
}

PredictiveScalingPredefinedMetricPair& PredictiveScalingPredefinedMetricPair::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode predefinedMetricTypeNode = resultNode.FirstChild("PredefinedMetricType");
    if(!predefinedMetricTypeNode.IsNull())
    {
      m_predefinedMetricType = PredefinedMetricPairTypeMapper::GetPredefinedMetricPairTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(predefinedMetricTypeNode.GetText()).c_str()).c_str());
      m_predefinedMetricTypeHasBeenSet = true;
    }
    XmlNode resourceLabelNode = resultNode.FirstChild("ResourceLabel");
    if(!resourceLabelNode.IsNull())
    {
      m_resourceLabel = Aws::Utils::Xml::DecodeEscapedXmlText(resourceLabelNode.GetText());
      m_resourceLabelHasBeenSet = true;
    }
  }

  return *this;
}

void PredictiveScalingPredefinedMetricPair::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_predefinedMetricTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".PredefinedMetricType=" << StringUtils::URLEncode(PredefinedMetricPairTypeMapper::GetNameForPredefinedMetricPairType(m_predefinedMetricType)) << "&";
  }

  if(m_resourceLabelHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceLabel=" << StringUtils::URLEncode(m_resourceLabel.c_str()) << "&";
  }

}

void PredictiveScalingPredefinedMetricPair::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_predefinedMetricTypeHasBeenSet)
  {
      oStream << location << ".PredefinedMetricType=" << StringUtils::URLEncode(PredefinedMetricPairTypeMapper::GetNameForPredefinedMetricPairType(m_predefinedMetricType)) << "&";
  }
  if(m_resourceLabelHasBeenSet)
  {
      oStream << location << ".ResourceLabel=" << StringUtils::URLEncode(m_resourceLabel.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
