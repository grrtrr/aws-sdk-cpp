﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DhcpConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

DhcpConfiguration::DhcpConfiguration() : 
    m_keyHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

DhcpConfiguration::DhcpConfiguration(const XmlNode& xmlNode)
  : DhcpConfiguration()
{
  *this = xmlNode;
}

DhcpConfiguration& DhcpConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keyNode = resultNode.FirstChild("key");
    if(!keyNode.IsNull())
    {
      m_key = Aws::Utils::Xml::DecodeEscapedXmlText(keyNode.GetText());
      m_keyHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("valueSet");
    if(!valuesNode.IsNull())
    {
      XmlNode valuesMember = valuesNode.FirstChild("item");
      while(!valuesMember.IsNull())
      {
        m_values.push_back(valuesMember);
        valuesMember = valuesMember.NextNode("item");
      }

      m_valuesHasBeenSet = true;
    }
  }

  return *this;
}

void DhcpConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_keyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Key=" << StringUtils::URLEncode(m_key.c_str()) << "&";
  }

  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        Aws::StringStream valuesSs;
        valuesSs << location << index << locationValue << ".ValueSet." << valuesIdx++;
        item.OutputToStream(oStream, valuesSs.str().c_str());
      }
  }

}

void DhcpConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_keyHasBeenSet)
  {
      oStream << location << ".Key=" << StringUtils::URLEncode(m_key.c_str()) << "&";
  }
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        Aws::StringStream valuesSs;
        valuesSs << location << ".ValueSet." << valuesIdx++;
        item.OutputToStream(oStream, valuesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
