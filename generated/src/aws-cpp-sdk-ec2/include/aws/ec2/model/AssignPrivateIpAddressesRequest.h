﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for AssignPrivateIpAddresses.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssignPrivateIpAddressesRequest">AWS
   * API Reference</a></p>
   */
  class AssignPrivateIpAddressesRequest : public EC2Request
  {
  public:
    AWS_EC2_API AssignPrivateIpAddressesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssignPrivateIpAddresses"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>One or more IPv4 prefixes assigned to the network interface. You can't use
     * this option if you use the <code>Ipv4PrefixCount</code> option.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv4Prefixes() const{ return m_ipv4Prefixes; }
    inline bool Ipv4PrefixesHasBeenSet() const { return m_ipv4PrefixesHasBeenSet; }
    inline void SetIpv4Prefixes(const Aws::Vector<Aws::String>& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = value; }
    inline void SetIpv4Prefixes(Aws::Vector<Aws::String>&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes = std::move(value); }
    inline AssignPrivateIpAddressesRequest& WithIpv4Prefixes(const Aws::Vector<Aws::String>& value) { SetIpv4Prefixes(value); return *this;}
    inline AssignPrivateIpAddressesRequest& WithIpv4Prefixes(Aws::Vector<Aws::String>&& value) { SetIpv4Prefixes(std::move(value)); return *this;}
    inline AssignPrivateIpAddressesRequest& AddIpv4Prefixes(const Aws::String& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }
    inline AssignPrivateIpAddressesRequest& AddIpv4Prefixes(Aws::String&& value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(std::move(value)); return *this; }
    inline AssignPrivateIpAddressesRequest& AddIpv4Prefixes(const char* value) { m_ipv4PrefixesHasBeenSet = true; m_ipv4Prefixes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of IPv4 prefixes that Amazon Web Services automatically assigns to
     * the network interface. You can't use this option if you use the <code>Ipv4
     * Prefixes</code> option.</p>
     */
    inline int GetIpv4PrefixCount() const{ return m_ipv4PrefixCount; }
    inline bool Ipv4PrefixCountHasBeenSet() const { return m_ipv4PrefixCountHasBeenSet; }
    inline void SetIpv4PrefixCount(int value) { m_ipv4PrefixCountHasBeenSet = true; m_ipv4PrefixCount = value; }
    inline AssignPrivateIpAddressesRequest& WithIpv4PrefixCount(int value) { SetIpv4PrefixCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline AssignPrivateIpAddressesRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline AssignPrivateIpAddressesRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline AssignPrivateIpAddressesRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses to be assigned as a secondary private IP address to the
     * network interface. You can't specify this parameter when also specifying a
     * number of secondary IP addresses.</p> <p>If you don't specify an IP address,
     * Amazon EC2 automatically selects an IP address within the subnet range.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
    inline void SetPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }
    inline void SetPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }
    inline AssignPrivateIpAddressesRequest& WithPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { SetPrivateIpAddresses(value); return *this;}
    inline AssignPrivateIpAddressesRequest& WithPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}
    inline AssignPrivateIpAddressesRequest& AddPrivateIpAddresses(const Aws::String& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }
    inline AssignPrivateIpAddressesRequest& AddPrivateIpAddresses(Aws::String&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }
    inline AssignPrivateIpAddressesRequest& AddPrivateIpAddresses(const char* value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of secondary IP addresses to assign to the network interface. You
     * can't specify this parameter when also specifying private IP addresses.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const{ return m_secondaryPrivateIpAddressCount; }
    inline bool SecondaryPrivateIpAddressCountHasBeenSet() const { return m_secondaryPrivateIpAddressCountHasBeenSet; }
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }
    inline AssignPrivateIpAddressesRequest& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to allow an IP address that is already assigned to another
     * network interface or instance to be reassigned to the specified network
     * interface.</p>
     */
    inline bool GetAllowReassignment() const{ return m_allowReassignment; }
    inline bool AllowReassignmentHasBeenSet() const { return m_allowReassignmentHasBeenSet; }
    inline void SetAllowReassignment(bool value) { m_allowReassignmentHasBeenSet = true; m_allowReassignment = value; }
    inline AssignPrivateIpAddressesRequest& WithAllowReassignment(bool value) { SetAllowReassignment(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ipv4Prefixes;
    bool m_ipv4PrefixesHasBeenSet = false;

    int m_ipv4PrefixCount;
    bool m_ipv4PrefixCountHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    int m_secondaryPrivateIpAddressCount;
    bool m_secondaryPrivateIpAddressCountHasBeenSet = false;

    bool m_allowReassignment;
    bool m_allowReassignmentHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
