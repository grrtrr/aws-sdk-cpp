﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackResourceDetail.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

StackResourceDetail::StackResourceDetail() : 
    m_stackNameHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_resourceStatus(ResourceStatus::NOT_SET),
    m_resourceStatusHasBeenSet(false),
    m_resourceStatusReasonHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_driftInformationHasBeenSet(false),
    m_moduleInfoHasBeenSet(false)
{
}

StackResourceDetail::StackResourceDetail(const XmlNode& xmlNode)
  : StackResourceDetail()
{
  *this = xmlNode;
}

StackResourceDetail& StackResourceDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackNameNode = resultNode.FirstChild("StackName");
    if(!stackNameNode.IsNull())
    {
      m_stackName = Aws::Utils::Xml::DecodeEscapedXmlText(stackNameNode.GetText());
      m_stackNameHasBeenSet = true;
    }
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if(!stackIdNode.IsNull())
    {
      m_stackId = Aws::Utils::Xml::DecodeEscapedXmlText(stackIdNode.GetText());
      m_stackIdHasBeenSet = true;
    }
    XmlNode logicalResourceIdNode = resultNode.FirstChild("LogicalResourceId");
    if(!logicalResourceIdNode.IsNull())
    {
      m_logicalResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(logicalResourceIdNode.GetText());
      m_logicalResourceIdHasBeenSet = true;
    }
    XmlNode physicalResourceIdNode = resultNode.FirstChild("PhysicalResourceId");
    if(!physicalResourceIdNode.IsNull())
    {
      m_physicalResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(physicalResourceIdNode.GetText());
      m_physicalResourceIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode lastUpdatedTimestampNode = resultNode.FirstChild("LastUpdatedTimestamp");
    if(!lastUpdatedTimestampNode.IsNull())
    {
      m_lastUpdatedTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdatedTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdatedTimestampHasBeenSet = true;
    }
    XmlNode resourceStatusNode = resultNode.FirstChild("ResourceStatus");
    if(!resourceStatusNode.IsNull())
    {
      m_resourceStatus = ResourceStatusMapper::GetResourceStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceStatusNode.GetText()).c_str()).c_str());
      m_resourceStatusHasBeenSet = true;
    }
    XmlNode resourceStatusReasonNode = resultNode.FirstChild("ResourceStatusReason");
    if(!resourceStatusReasonNode.IsNull())
    {
      m_resourceStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(resourceStatusReasonNode.GetText());
      m_resourceStatusReasonHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode metadataNode = resultNode.FirstChild("Metadata");
    if(!metadataNode.IsNull())
    {
      m_metadata = Aws::Utils::Xml::DecodeEscapedXmlText(metadataNode.GetText());
      m_metadataHasBeenSet = true;
    }
    XmlNode driftInformationNode = resultNode.FirstChild("DriftInformation");
    if(!driftInformationNode.IsNull())
    {
      m_driftInformation = driftInformationNode;
      m_driftInformationHasBeenSet = true;
    }
    XmlNode moduleInfoNode = resultNode.FirstChild("ModuleInfo");
    if(!moduleInfoNode.IsNull())
    {
      m_moduleInfo = moduleInfoNode;
      m_moduleInfoHasBeenSet = true;
    }
  }

  return *this;
}

void StackResourceDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_stackIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }

  if(m_logicalResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }

  if(m_physicalResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdatedTimestamp=" << StringUtils::URLEncode(m_lastUpdatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_resourceStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceStatus=" << StringUtils::URLEncode(ResourceStatusMapper::GetNameForResourceStatus(m_resourceStatus)) << "&";
  }

  if(m_resourceStatusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceStatusReason=" << StringUtils::URLEncode(m_resourceStatusReason.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_metadataHasBeenSet)
  {
      oStream << location << index << locationValue << ".Metadata=" << StringUtils::URLEncode(m_metadata.c_str()) << "&";
  }

  if(m_driftInformationHasBeenSet)
  {
      Aws::StringStream driftInformationLocationAndMemberSs;
      driftInformationLocationAndMemberSs << location << index << locationValue << ".DriftInformation";
      m_driftInformation.OutputToStream(oStream, driftInformationLocationAndMemberSs.str().c_str());
  }

  if(m_moduleInfoHasBeenSet)
  {
      Aws::StringStream moduleInfoLocationAndMemberSs;
      moduleInfoLocationAndMemberSs << location << index << locationValue << ".ModuleInfo";
      m_moduleInfo.OutputToStream(oStream, moduleInfoLocationAndMemberSs.str().c_str());
  }

}

void StackResourceDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackNameHasBeenSet)
  {
      oStream << location << ".StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }
  if(m_stackIdHasBeenSet)
  {
      oStream << location << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }
  if(m_logicalResourceIdHasBeenSet)
  {
      oStream << location << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }
  if(m_physicalResourceIdHasBeenSet)
  {
      oStream << location << ".PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
  if(m_lastUpdatedTimestampHasBeenSet)
  {
      oStream << location << ".LastUpdatedTimestamp=" << StringUtils::URLEncode(m_lastUpdatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_resourceStatusHasBeenSet)
  {
      oStream << location << ".ResourceStatus=" << StringUtils::URLEncode(ResourceStatusMapper::GetNameForResourceStatus(m_resourceStatus)) << "&";
  }
  if(m_resourceStatusReasonHasBeenSet)
  {
      oStream << location << ".ResourceStatusReason=" << StringUtils::URLEncode(m_resourceStatusReason.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_metadataHasBeenSet)
  {
      oStream << location << ".Metadata=" << StringUtils::URLEncode(m_metadata.c_str()) << "&";
  }
  if(m_driftInformationHasBeenSet)
  {
      Aws::String driftInformationLocationAndMember(location);
      driftInformationLocationAndMember += ".DriftInformation";
      m_driftInformation.OutputToStream(oStream, driftInformationLocationAndMember.c_str());
  }
  if(m_moduleInfoHasBeenSet)
  {
      Aws::String moduleInfoLocationAndMember(location);
      moduleInfoLocationAndMember += ".ModuleInfo";
      m_moduleInfo.OutputToStream(oStream, moduleInfoLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
