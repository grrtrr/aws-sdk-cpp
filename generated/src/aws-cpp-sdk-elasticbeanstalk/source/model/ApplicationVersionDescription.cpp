﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ApplicationVersionDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

ApplicationVersionDescription::ApplicationVersionDescription() : 
    m_applicationVersionArnHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_sourceBuildInformationHasBeenSet(false),
    m_buildArnHasBeenSet(false),
    m_sourceBundleHasBeenSet(false),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdatedHasBeenSet(false),
    m_status(ApplicationVersionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ApplicationVersionDescription::ApplicationVersionDescription(const XmlNode& xmlNode)
  : ApplicationVersionDescription()
{
  *this = xmlNode;
}

ApplicationVersionDescription& ApplicationVersionDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode applicationVersionArnNode = resultNode.FirstChild("ApplicationVersionArn");
    if(!applicationVersionArnNode.IsNull())
    {
      m_applicationVersionArn = Aws::Utils::Xml::DecodeEscapedXmlText(applicationVersionArnNode.GetText());
      m_applicationVersionArnHasBeenSet = true;
    }
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    if(!applicationNameNode.IsNull())
    {
      m_applicationName = Aws::Utils::Xml::DecodeEscapedXmlText(applicationNameNode.GetText());
      m_applicationNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode versionLabelNode = resultNode.FirstChild("VersionLabel");
    if(!versionLabelNode.IsNull())
    {
      m_versionLabel = Aws::Utils::Xml::DecodeEscapedXmlText(versionLabelNode.GetText());
      m_versionLabelHasBeenSet = true;
    }
    XmlNode sourceBuildInformationNode = resultNode.FirstChild("SourceBuildInformation");
    if(!sourceBuildInformationNode.IsNull())
    {
      m_sourceBuildInformation = sourceBuildInformationNode;
      m_sourceBuildInformationHasBeenSet = true;
    }
    XmlNode buildArnNode = resultNode.FirstChild("BuildArn");
    if(!buildArnNode.IsNull())
    {
      m_buildArn = Aws::Utils::Xml::DecodeEscapedXmlText(buildArnNode.GetText());
      m_buildArnHasBeenSet = true;
    }
    XmlNode sourceBundleNode = resultNode.FirstChild("SourceBundle");
    if(!sourceBundleNode.IsNull())
    {
      m_sourceBundle = sourceBundleNode;
      m_sourceBundleHasBeenSet = true;
    }
    XmlNode dateCreatedNode = resultNode.FirstChild("DateCreated");
    if(!dateCreatedNode.IsNull())
    {
      m_dateCreated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dateCreatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_dateCreatedHasBeenSet = true;
    }
    XmlNode dateUpdatedNode = resultNode.FirstChild("DateUpdated");
    if(!dateUpdatedNode.IsNull())
    {
      m_dateUpdated = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dateUpdatedNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_dateUpdatedHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ApplicationVersionStatusMapper::GetApplicationVersionStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationVersionDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_applicationVersionArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplicationVersionArn=" << StringUtils::URLEncode(m_applicationVersionArn.c_str()) << "&";
  }

  if(m_applicationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_versionLabelHasBeenSet)
  {
      oStream << location << index << locationValue << ".VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }

  if(m_sourceBuildInformationHasBeenSet)
  {
      Aws::StringStream sourceBuildInformationLocationAndMemberSs;
      sourceBuildInformationLocationAndMemberSs << location << index << locationValue << ".SourceBuildInformation";
      m_sourceBuildInformation.OutputToStream(oStream, sourceBuildInformationLocationAndMemberSs.str().c_str());
  }

  if(m_buildArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".BuildArn=" << StringUtils::URLEncode(m_buildArn.c_str()) << "&";
  }

  if(m_sourceBundleHasBeenSet)
  {
      Aws::StringStream sourceBundleLocationAndMemberSs;
      sourceBundleLocationAndMemberSs << location << index << locationValue << ".SourceBundle";
      m_sourceBundle.OutputToStream(oStream, sourceBundleLocationAndMemberSs.str().c_str());
  }

  if(m_dateCreatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateCreated=" << StringUtils::URLEncode(m_dateCreated.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateUpdated=" << StringUtils::URLEncode(m_dateUpdated.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(ApplicationVersionStatusMapper::GetNameForApplicationVersionStatus(m_status)) << "&";
  }

}

void ApplicationVersionDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_applicationVersionArnHasBeenSet)
  {
      oStream << location << ".ApplicationVersionArn=" << StringUtils::URLEncode(m_applicationVersionArn.c_str()) << "&";
  }
  if(m_applicationNameHasBeenSet)
  {
      oStream << location << ".ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_versionLabelHasBeenSet)
  {
      oStream << location << ".VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }
  if(m_sourceBuildInformationHasBeenSet)
  {
      Aws::String sourceBuildInformationLocationAndMember(location);
      sourceBuildInformationLocationAndMember += ".SourceBuildInformation";
      m_sourceBuildInformation.OutputToStream(oStream, sourceBuildInformationLocationAndMember.c_str());
  }
  if(m_buildArnHasBeenSet)
  {
      oStream << location << ".BuildArn=" << StringUtils::URLEncode(m_buildArn.c_str()) << "&";
  }
  if(m_sourceBundleHasBeenSet)
  {
      Aws::String sourceBundleLocationAndMember(location);
      sourceBundleLocationAndMember += ".SourceBundle";
      m_sourceBundle.OutputToStream(oStream, sourceBundleLocationAndMember.c_str());
  }
  if(m_dateCreatedHasBeenSet)
  {
      oStream << location << ".DateCreated=" << StringUtils::URLEncode(m_dateCreated.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << ".DateUpdated=" << StringUtils::URLEncode(m_dateUpdated.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(ApplicationVersionStatusMapper::GetNameForApplicationVersionStatus(m_status)) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
