﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/Option.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

Option::Option() : 
    m_optionNameHasBeenSet(false),
    m_optionDescriptionHasBeenSet(false),
    m_persistent(false),
    m_persistentHasBeenSet(false),
    m_permanent(false),
    m_permanentHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_optionVersionHasBeenSet(false),
    m_optionSettingsHasBeenSet(false),
    m_dBSecurityGroupMembershipsHasBeenSet(false),
    m_vpcSecurityGroupMembershipsHasBeenSet(false)
{
}

Option::Option(const XmlNode& xmlNode)
  : Option()
{
  *this = xmlNode;
}

Option& Option::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode optionNameNode = resultNode.FirstChild("OptionName");
    if(!optionNameNode.IsNull())
    {
      m_optionName = Aws::Utils::Xml::DecodeEscapedXmlText(optionNameNode.GetText());
      m_optionNameHasBeenSet = true;
    }
    XmlNode optionDescriptionNode = resultNode.FirstChild("OptionDescription");
    if(!optionDescriptionNode.IsNull())
    {
      m_optionDescription = Aws::Utils::Xml::DecodeEscapedXmlText(optionDescriptionNode.GetText());
      m_optionDescriptionHasBeenSet = true;
    }
    XmlNode persistentNode = resultNode.FirstChild("Persistent");
    if(!persistentNode.IsNull())
    {
      m_persistent = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(persistentNode.GetText()).c_str()).c_str());
      m_persistentHasBeenSet = true;
    }
    XmlNode permanentNode = resultNode.FirstChild("Permanent");
    if(!permanentNode.IsNull())
    {
      m_permanent = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(permanentNode.GetText()).c_str()).c_str());
      m_permanentHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode optionVersionNode = resultNode.FirstChild("OptionVersion");
    if(!optionVersionNode.IsNull())
    {
      m_optionVersion = Aws::Utils::Xml::DecodeEscapedXmlText(optionVersionNode.GetText());
      m_optionVersionHasBeenSet = true;
    }
    XmlNode optionSettingsNode = resultNode.FirstChild("OptionSettings");
    if(!optionSettingsNode.IsNull())
    {
      XmlNode optionSettingsMember = optionSettingsNode.FirstChild("OptionSetting");
      while(!optionSettingsMember.IsNull())
      {
        m_optionSettings.push_back(optionSettingsMember);
        optionSettingsMember = optionSettingsMember.NextNode("OptionSetting");
      }

      m_optionSettingsHasBeenSet = true;
    }
    XmlNode dBSecurityGroupMembershipsNode = resultNode.FirstChild("DBSecurityGroupMemberships");
    if(!dBSecurityGroupMembershipsNode.IsNull())
    {
      XmlNode dBSecurityGroupMembershipsMember = dBSecurityGroupMembershipsNode.FirstChild("DBSecurityGroup");
      while(!dBSecurityGroupMembershipsMember.IsNull())
      {
        m_dBSecurityGroupMemberships.push_back(dBSecurityGroupMembershipsMember);
        dBSecurityGroupMembershipsMember = dBSecurityGroupMembershipsMember.NextNode("DBSecurityGroup");
      }

      m_dBSecurityGroupMembershipsHasBeenSet = true;
    }
    XmlNode vpcSecurityGroupMembershipsNode = resultNode.FirstChild("VpcSecurityGroupMemberships");
    if(!vpcSecurityGroupMembershipsNode.IsNull())
    {
      XmlNode vpcSecurityGroupMembershipsMember = vpcSecurityGroupMembershipsNode.FirstChild("VpcSecurityGroupMembership");
      while(!vpcSecurityGroupMembershipsMember.IsNull())
      {
        m_vpcSecurityGroupMemberships.push_back(vpcSecurityGroupMembershipsMember);
        vpcSecurityGroupMembershipsMember = vpcSecurityGroupMembershipsMember.NextNode("VpcSecurityGroupMembership");
      }

      m_vpcSecurityGroupMembershipsHasBeenSet = true;
    }
  }

  return *this;
}

void Option::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_optionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionName=" << StringUtils::URLEncode(m_optionName.c_str()) << "&";
  }

  if(m_optionDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionDescription=" << StringUtils::URLEncode(m_optionDescription.c_str()) << "&";
  }

  if(m_persistentHasBeenSet)
  {
      oStream << location << index << locationValue << ".Persistent=" << std::boolalpha << m_persistent << "&";
  }

  if(m_permanentHasBeenSet)
  {
      oStream << location << index << locationValue << ".Permanent=" << std::boolalpha << m_permanent << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_optionVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionVersion=" << StringUtils::URLEncode(m_optionVersion.c_str()) << "&";
  }

  if(m_optionSettingsHasBeenSet)
  {
      unsigned optionSettingsIdx = 1;
      for(auto& item : m_optionSettings)
      {
        Aws::StringStream optionSettingsSs;
        optionSettingsSs << location << index << locationValue << ".OptionSettings.OptionSetting." << optionSettingsIdx++;
        item.OutputToStream(oStream, optionSettingsSs.str().c_str());
      }
  }

  if(m_dBSecurityGroupMembershipsHasBeenSet)
  {
      unsigned dBSecurityGroupMembershipsIdx = 1;
      for(auto& item : m_dBSecurityGroupMemberships)
      {
        Aws::StringStream dBSecurityGroupMembershipsSs;
        dBSecurityGroupMembershipsSs << location << index << locationValue << ".DBSecurityGroupMemberships.DBSecurityGroup." << dBSecurityGroupMembershipsIdx++;
        item.OutputToStream(oStream, dBSecurityGroupMembershipsSs.str().c_str());
      }
  }

  if(m_vpcSecurityGroupMembershipsHasBeenSet)
  {
      unsigned vpcSecurityGroupMembershipsIdx = 1;
      for(auto& item : m_vpcSecurityGroupMemberships)
      {
        Aws::StringStream vpcSecurityGroupMembershipsSs;
        vpcSecurityGroupMembershipsSs << location << index << locationValue << ".VpcSecurityGroupMemberships.VpcSecurityGroupMembership." << vpcSecurityGroupMembershipsIdx++;
        item.OutputToStream(oStream, vpcSecurityGroupMembershipsSs.str().c_str());
      }
  }

}

void Option::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_optionNameHasBeenSet)
  {
      oStream << location << ".OptionName=" << StringUtils::URLEncode(m_optionName.c_str()) << "&";
  }
  if(m_optionDescriptionHasBeenSet)
  {
      oStream << location << ".OptionDescription=" << StringUtils::URLEncode(m_optionDescription.c_str()) << "&";
  }
  if(m_persistentHasBeenSet)
  {
      oStream << location << ".Persistent=" << std::boolalpha << m_persistent << "&";
  }
  if(m_permanentHasBeenSet)
  {
      oStream << location << ".Permanent=" << std::boolalpha << m_permanent << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_optionVersionHasBeenSet)
  {
      oStream << location << ".OptionVersion=" << StringUtils::URLEncode(m_optionVersion.c_str()) << "&";
  }
  if(m_optionSettingsHasBeenSet)
  {
      unsigned optionSettingsIdx = 1;
      for(auto& item : m_optionSettings)
      {
        Aws::StringStream optionSettingsSs;
        optionSettingsSs << location << ".OptionSettings.OptionSetting." << optionSettingsIdx++;
        item.OutputToStream(oStream, optionSettingsSs.str().c_str());
      }
  }
  if(m_dBSecurityGroupMembershipsHasBeenSet)
  {
      unsigned dBSecurityGroupMembershipsIdx = 1;
      for(auto& item : m_dBSecurityGroupMemberships)
      {
        Aws::StringStream dBSecurityGroupMembershipsSs;
        dBSecurityGroupMembershipsSs << location << ".DBSecurityGroupMemberships.DBSecurityGroup." << dBSecurityGroupMembershipsIdx++;
        item.OutputToStream(oStream, dBSecurityGroupMembershipsSs.str().c_str());
      }
  }
  if(m_vpcSecurityGroupMembershipsHasBeenSet)
  {
      unsigned vpcSecurityGroupMembershipsIdx = 1;
      for(auto& item : m_vpcSecurityGroupMemberships)
      {
        Aws::StringStream vpcSecurityGroupMembershipsSs;
        vpcSecurityGroupMembershipsSs << location << ".VpcSecurityGroupMemberships.VpcSecurityGroupMembership." << vpcSecurityGroupMembershipsIdx++;
        item.OutputToStream(oStream, vpcSecurityGroupMembershipsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
