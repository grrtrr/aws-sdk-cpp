﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateNatGatewayRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateNatGatewayRequest::CreateNatGatewayRequest() : 
    m_allocationIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_connectivityType(ConnectivityType::NOT_SET),
    m_connectivityTypeHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_secondaryAllocationIdsHasBeenSet(false),
    m_secondaryPrivateIpAddressesHasBeenSet(false),
    m_secondaryPrivateIpAddressCount(0),
    m_secondaryPrivateIpAddressCountHasBeenSet(false)
{
}

Aws::String CreateNatGatewayRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateNatGateway&";
  if(m_allocationIdHasBeenSet)
  {
    ss << "AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
    ss << "SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_connectivityTypeHasBeenSet)
  {
    ss << "ConnectivityType=" << StringUtils::URLEncode(ConnectivityTypeMapper::GetNameForConnectivityType(m_connectivityType)) << "&";
  }

  if(m_privateIpAddressHasBeenSet)
  {
    ss << "PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

  if(m_secondaryAllocationIdsHasBeenSet)
  {
    unsigned secondaryAllocationIdsCount = 1;
    for(auto& item : m_secondaryAllocationIds)
    {
      ss << "SecondaryAllocationId." << secondaryAllocationIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      secondaryAllocationIdsCount++;
    }
  }

  if(m_secondaryPrivateIpAddressesHasBeenSet)
  {
    unsigned secondaryPrivateIpAddressesCount = 1;
    for(auto& item : m_secondaryPrivateIpAddresses)
    {
      ss << "SecondaryPrivateIpAddress." << secondaryPrivateIpAddressesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      secondaryPrivateIpAddressesCount++;
    }
  }

  if(m_secondaryPrivateIpAddressCountHasBeenSet)
  {
    ss << "SecondaryPrivateIpAddressCount=" << m_secondaryPrivateIpAddressCount << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateNatGatewayRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
