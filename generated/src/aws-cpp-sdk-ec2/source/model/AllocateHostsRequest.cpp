﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AllocateHostsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AllocateHostsRequest::AllocateHostsRequest() : 
    m_instanceFamilyHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_hostRecovery(HostRecovery::NOT_SET),
    m_hostRecoveryHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_hostMaintenance(HostMaintenance::NOT_SET),
    m_hostMaintenanceHasBeenSet(false),
    m_assetIdsHasBeenSet(false),
    m_autoPlacement(AutoPlacement::NOT_SET),
    m_autoPlacementHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_quantity(0),
    m_quantityHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false)
{
}

Aws::String AllocateHostsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AllocateHosts&";
  if(m_instanceFamilyHasBeenSet)
  {
    ss << "InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
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

  if(m_hostRecoveryHasBeenSet)
  {
    ss << "HostRecovery=" << StringUtils::URLEncode(HostRecoveryMapper::GetNameForHostRecovery(m_hostRecovery)) << "&";
  }

  if(m_outpostArnHasBeenSet)
  {
    ss << "OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

  if(m_hostMaintenanceHasBeenSet)
  {
    ss << "HostMaintenance=" << StringUtils::URLEncode(HostMaintenanceMapper::GetNameForHostMaintenance(m_hostMaintenance)) << "&";
  }

  if(m_assetIdsHasBeenSet)
  {
    unsigned assetIdsCount = 1;
    for(auto& item : m_assetIds)
    {
      ss << "AssetId." << assetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      assetIdsCount++;
    }
  }

  if(m_autoPlacementHasBeenSet)
  {
    ss << "AutoPlacement=" << StringUtils::URLEncode(AutoPlacementMapper::GetNameForAutoPlacement(m_autoPlacement)) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_quantityHasBeenSet)
  {
    ss << "Quantity=" << m_quantity << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AllocateHostsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
