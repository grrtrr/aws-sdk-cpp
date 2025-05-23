﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayRouteTablePropagation.h>
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

TransitGatewayRouteTablePropagation::TransitGatewayRouteTablePropagation() : 
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(TransitGatewayAttachmentResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_state(TransitGatewayPropagationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_transitGatewayRouteTableAnnouncementIdHasBeenSet(false)
{
}

TransitGatewayRouteTablePropagation::TransitGatewayRouteTablePropagation(const XmlNode& xmlNode)
  : TransitGatewayRouteTablePropagation()
{
  *this = xmlNode;
}

TransitGatewayRouteTablePropagation& TransitGatewayRouteTablePropagation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayAttachmentIdNode = resultNode.FirstChild("transitGatewayAttachmentId");
    if(!transitGatewayAttachmentIdNode.IsNull())
    {
      m_transitGatewayAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayAttachmentIdNode.GetText());
      m_transitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = TransitGatewayAttachmentResourceTypeMapper::GetTransitGatewayAttachmentResourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()).c_str());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayPropagationStateMapper::GetTransitGatewayPropagationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode transitGatewayRouteTableAnnouncementIdNode = resultNode.FirstChild("transitGatewayRouteTableAnnouncementId");
    if(!transitGatewayRouteTableAnnouncementIdNode.IsNull())
    {
      m_transitGatewayRouteTableAnnouncementId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayRouteTableAnnouncementIdNode.GetText());
      m_transitGatewayRouteTableAnnouncementIdHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayRouteTablePropagation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(m_resourceType)) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(TransitGatewayPropagationStateMapper::GetNameForTransitGatewayPropagationState(m_state)) << "&";
  }

  if(m_transitGatewayRouteTableAnnouncementIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayRouteTableAnnouncementId=" << StringUtils::URLEncode(m_transitGatewayRouteTableAnnouncementId.c_str()) << "&";
  }

}

void TransitGatewayRouteTablePropagation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(m_resourceType)) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(TransitGatewayPropagationStateMapper::GetNameForTransitGatewayPropagationState(m_state)) << "&";
  }
  if(m_transitGatewayRouteTableAnnouncementIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayRouteTableAnnouncementId=" << StringUtils::URLEncode(m_transitGatewayRouteTableAnnouncementId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
