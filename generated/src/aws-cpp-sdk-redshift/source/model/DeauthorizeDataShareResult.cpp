﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeauthorizeDataShareResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DeauthorizeDataShareResult::DeauthorizeDataShareResult() : 
    m_allowPubliclyAccessibleConsumers(false),
    m_dataShareType(DataShareType::NOT_SET)
{
}

DeauthorizeDataShareResult::DeauthorizeDataShareResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : DeauthorizeDataShareResult()
{
  *this = result;
}

DeauthorizeDataShareResult& DeauthorizeDataShareResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeauthorizeDataShareResult"))
  {
    resultNode = rootNode.FirstChild("DeauthorizeDataShareResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode dataShareArnNode = resultNode.FirstChild("DataShareArn");
    if(!dataShareArnNode.IsNull())
    {
      m_dataShareArn = Aws::Utils::Xml::DecodeEscapedXmlText(dataShareArnNode.GetText());
    }
    XmlNode producerArnNode = resultNode.FirstChild("ProducerArn");
    if(!producerArnNode.IsNull())
    {
      m_producerArn = Aws::Utils::Xml::DecodeEscapedXmlText(producerArnNode.GetText());
    }
    XmlNode allowPubliclyAccessibleConsumersNode = resultNode.FirstChild("AllowPubliclyAccessibleConsumers");
    if(!allowPubliclyAccessibleConsumersNode.IsNull())
    {
      m_allowPubliclyAccessibleConsumers = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allowPubliclyAccessibleConsumersNode.GetText()).c_str()).c_str());
    }
    XmlNode dataShareAssociationsNode = resultNode.FirstChild("DataShareAssociations");
    if(!dataShareAssociationsNode.IsNull())
    {
      XmlNode dataShareAssociationsMember = dataShareAssociationsNode.FirstChild("member");
      while(!dataShareAssociationsMember.IsNull())
      {
        m_dataShareAssociations.push_back(dataShareAssociationsMember);
        dataShareAssociationsMember = dataShareAssociationsMember.NextNode("member");
      }

    }
    XmlNode managedByNode = resultNode.FirstChild("ManagedBy");
    if(!managedByNode.IsNull())
    {
      m_managedBy = Aws::Utils::Xml::DecodeEscapedXmlText(managedByNode.GetText());
    }
    XmlNode dataShareTypeNode = resultNode.FirstChild("DataShareType");
    if(!dataShareTypeNode.IsNull())
    {
      m_dataShareType = DataShareTypeMapper::GetDataShareTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dataShareTypeNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DeauthorizeDataShareResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
