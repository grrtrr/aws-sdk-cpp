﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/MetricStat.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

MetricStat::MetricStat() : 
    m_metricHasBeenSet(false),
    m_period(0),
    m_periodHasBeenSet(false),
    m_statHasBeenSet(false),
    m_unit(StandardUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

MetricStat::MetricStat(const XmlNode& xmlNode)
  : MetricStat()
{
  *this = xmlNode;
}

MetricStat& MetricStat::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode metricNode = resultNode.FirstChild("Metric");
    if(!metricNode.IsNull())
    {
      m_metric = metricNode;
      m_metricHasBeenSet = true;
    }
    XmlNode periodNode = resultNode.FirstChild("Period");
    if(!periodNode.IsNull())
    {
      m_period = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(periodNode.GetText()).c_str()).c_str());
      m_periodHasBeenSet = true;
    }
    XmlNode statNode = resultNode.FirstChild("Stat");
    if(!statNode.IsNull())
    {
      m_stat = Aws::Utils::Xml::DecodeEscapedXmlText(statNode.GetText());
      m_statHasBeenSet = true;
    }
    XmlNode unitNode = resultNode.FirstChild("Unit");
    if(!unitNode.IsNull())
    {
      m_unit = StandardUnitMapper::GetStandardUnitForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(unitNode.GetText()).c_str()).c_str());
      m_unitHasBeenSet = true;
    }
  }

  return *this;
}

void MetricStat::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_metricHasBeenSet)
  {
      Aws::StringStream metricLocationAndMemberSs;
      metricLocationAndMemberSs << location << index << locationValue << ".Metric";
      m_metric.OutputToStream(oStream, metricLocationAndMemberSs.str().c_str());
  }

  if(m_periodHasBeenSet)
  {
      oStream << location << index << locationValue << ".Period=" << m_period << "&";
  }

  if(m_statHasBeenSet)
  {
      oStream << location << index << locationValue << ".Stat=" << StringUtils::URLEncode(m_stat.c_str()) << "&";
  }

  if(m_unitHasBeenSet)
  {
      oStream << location << index << locationValue << ".Unit=" << StringUtils::URLEncode(StandardUnitMapper::GetNameForStandardUnit(m_unit)) << "&";
  }

}

void MetricStat::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_metricHasBeenSet)
  {
      Aws::String metricLocationAndMember(location);
      metricLocationAndMember += ".Metric";
      m_metric.OutputToStream(oStream, metricLocationAndMember.c_str());
  }
  if(m_periodHasBeenSet)
  {
      oStream << location << ".Period=" << m_period << "&";
  }
  if(m_statHasBeenSet)
  {
      oStream << location << ".Stat=" << StringUtils::URLEncode(m_stat.c_str()) << "&";
  }
  if(m_unitHasBeenSet)
  {
      oStream << location << ".Unit=" << StringUtils::URLEncode(StandardUnitMapper::GetNameForStandardUnit(m_unit)) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
