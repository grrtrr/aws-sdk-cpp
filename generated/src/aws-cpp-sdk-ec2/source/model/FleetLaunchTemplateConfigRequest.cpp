﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetLaunchTemplateConfigRequest.h>
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

FleetLaunchTemplateConfigRequest::FleetLaunchTemplateConfigRequest() : 
    m_launchTemplateSpecificationHasBeenSet(false),
    m_overridesHasBeenSet(false)
{
}

FleetLaunchTemplateConfigRequest::FleetLaunchTemplateConfigRequest(const XmlNode& xmlNode)
  : FleetLaunchTemplateConfigRequest()
{
  *this = xmlNode;
}

FleetLaunchTemplateConfigRequest& FleetLaunchTemplateConfigRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode launchTemplateSpecificationNode = resultNode.FirstChild("LaunchTemplateSpecification");
    if(!launchTemplateSpecificationNode.IsNull())
    {
      m_launchTemplateSpecification = launchTemplateSpecificationNode;
      m_launchTemplateSpecificationHasBeenSet = true;
    }
    XmlNode overridesNode = resultNode.FirstChild("Overrides");
    if(!overridesNode.IsNull())
    {
      XmlNode overridesMember = overridesNode.FirstChild("item");
      while(!overridesMember.IsNull())
      {
        m_overrides.push_back(overridesMember);
        overridesMember = overridesMember.NextNode("item");
      }

      m_overridesHasBeenSet = true;
    }
  }

  return *this;
}

void FleetLaunchTemplateConfigRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_launchTemplateSpecificationHasBeenSet)
  {
      Aws::StringStream launchTemplateSpecificationLocationAndMemberSs;
      launchTemplateSpecificationLocationAndMemberSs << location << index << locationValue << ".LaunchTemplateSpecification";
      m_launchTemplateSpecification.OutputToStream(oStream, launchTemplateSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_overridesHasBeenSet)
  {
      unsigned overridesIdx = 1;
      for(auto& item : m_overrides)
      {
        Aws::StringStream overridesSs;
        overridesSs << location << index << locationValue << ".Overrides." << overridesIdx++;
        item.OutputToStream(oStream, overridesSs.str().c_str());
      }
  }

}

void FleetLaunchTemplateConfigRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_launchTemplateSpecificationHasBeenSet)
  {
      Aws::String launchTemplateSpecificationLocationAndMember(location);
      launchTemplateSpecificationLocationAndMember += ".LaunchTemplateSpecification";
      m_launchTemplateSpecification.OutputToStream(oStream, launchTemplateSpecificationLocationAndMember.c_str());
  }
  if(m_overridesHasBeenSet)
  {
      unsigned overridesIdx = 1;
      for(auto& item : m_overrides)
      {
        Aws::StringStream overridesSs;
        overridesSs << location << ".Overrides." << overridesIdx++;
        item.OutputToStream(oStream, overridesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
