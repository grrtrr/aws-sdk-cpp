﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AvailabilityZoneOptInStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AvailabilityZoneState.h>
#include <aws/ec2/model/AvailabilityZoneMessage.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes Availability Zones, Local Zones, and Wavelength
   * Zones.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AvailabilityZone
  {
  public:
    AWS_EC2_API AvailabilityZone();
    AWS_EC2_API AvailabilityZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AvailabilityZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>For Availability Zones, this parameter always has the value of
     * <code>opt-in-not-required</code>.</p> <p>For Local Zones and Wavelength Zones,
     * this parameter is the opt-in status. The possible values are
     * <code>opted-in</code> and <code>not-opted-in</code>.</p>
     */
    inline const AvailabilityZoneOptInStatus& GetOptInStatus() const{ return m_optInStatus; }
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }
    inline void SetOptInStatus(const AvailabilityZoneOptInStatus& value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }
    inline void SetOptInStatus(AvailabilityZoneOptInStatus&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::move(value); }
    inline AvailabilityZone& WithOptInStatus(const AvailabilityZoneOptInStatus& value) { SetOptInStatus(value); return *this;}
    inline AvailabilityZone& WithOptInStatus(AvailabilityZoneOptInStatus&& value) { SetOptInStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any messages about the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline const Aws::Vector<AvailabilityZoneMessage>& GetMessages() const{ return m_messages; }
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
    inline void SetMessages(const Aws::Vector<AvailabilityZoneMessage>& value) { m_messagesHasBeenSet = true; m_messages = value; }
    inline void SetMessages(Aws::Vector<AvailabilityZoneMessage>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }
    inline AvailabilityZone& WithMessages(const Aws::Vector<AvailabilityZoneMessage>& value) { SetMessages(value); return *this;}
    inline AvailabilityZone& WithMessages(Aws::Vector<AvailabilityZoneMessage>&& value) { SetMessages(std::move(value)); return *this;}
    inline AvailabilityZone& AddMessages(const AvailabilityZoneMessage& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }
    inline AvailabilityZone& AddMessages(AvailabilityZoneMessage&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Region.</p>
     */
    inline const Aws::String& GetRegionName() const{ return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    inline void SetRegionName(const Aws::String& value) { m_regionNameHasBeenSet = true; m_regionName = value; }
    inline void SetRegionName(Aws::String&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }
    inline void SetRegionName(const char* value) { m_regionNameHasBeenSet = true; m_regionName.assign(value); }
    inline AvailabilityZone& WithRegionName(const Aws::String& value) { SetRegionName(value); return *this;}
    inline AvailabilityZone& WithRegionName(Aws::String&& value) { SetRegionName(std::move(value)); return *this;}
    inline AvailabilityZone& WithRegionName(const char* value) { SetRegionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline const Aws::String& GetZoneName() const{ return m_zoneName; }
    inline bool ZoneNameHasBeenSet() const { return m_zoneNameHasBeenSet; }
    inline void SetZoneName(const Aws::String& value) { m_zoneNameHasBeenSet = true; m_zoneName = value; }
    inline void SetZoneName(Aws::String&& value) { m_zoneNameHasBeenSet = true; m_zoneName = std::move(value); }
    inline void SetZoneName(const char* value) { m_zoneNameHasBeenSet = true; m_zoneName.assign(value); }
    inline AvailabilityZone& WithZoneName(const Aws::String& value) { SetZoneName(value); return *this;}
    inline AvailabilityZone& WithZoneName(Aws::String&& value) { SetZoneName(std::move(value)); return *this;}
    inline AvailabilityZone& WithZoneName(const char* value) { SetZoneName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Availability Zone, Local Zone, or Wavelength Zone.</p>
     */
    inline const Aws::String& GetZoneId() const{ return m_zoneId; }
    inline bool ZoneIdHasBeenSet() const { return m_zoneIdHasBeenSet; }
    inline void SetZoneId(const Aws::String& value) { m_zoneIdHasBeenSet = true; m_zoneId = value; }
    inline void SetZoneId(Aws::String&& value) { m_zoneIdHasBeenSet = true; m_zoneId = std::move(value); }
    inline void SetZoneId(const char* value) { m_zoneIdHasBeenSet = true; m_zoneId.assign(value); }
    inline AvailabilityZone& WithZoneId(const Aws::String& value) { SetZoneId(value); return *this;}
    inline AvailabilityZone& WithZoneId(Aws::String&& value) { SetZoneId(std::move(value)); return *this;}
    inline AvailabilityZone& WithZoneId(const char* value) { SetZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the zone group. For example:</p> <ul> <li> <p>Availability Zones
     * - <code>us-east-1-zg-1</code> </p> </li> <li> <p>Local Zones -
     * <code>us-west-2-lax-1</code> </p> </li> <li> <p>Wavelength Zones -
     * <code>us-east-1-wl1-bos-wlz-1</code> </p> </li> </ul>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline AvailabilityZone& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline AvailabilityZone& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline AvailabilityZone& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the network border group.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = value; }
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::move(value); }
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup.assign(value); }
    inline AvailabilityZone& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}
    inline AvailabilityZone& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}
    inline AvailabilityZone& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of zone.</p> <p>Valid values: <code>availability-zone</code> |
     * <code>local-zone</code> | <code>wavelength-zone</code> </p>
     */
    inline const Aws::String& GetZoneType() const{ return m_zoneType; }
    inline bool ZoneTypeHasBeenSet() const { return m_zoneTypeHasBeenSet; }
    inline void SetZoneType(const Aws::String& value) { m_zoneTypeHasBeenSet = true; m_zoneType = value; }
    inline void SetZoneType(Aws::String&& value) { m_zoneTypeHasBeenSet = true; m_zoneType = std::move(value); }
    inline void SetZoneType(const char* value) { m_zoneTypeHasBeenSet = true; m_zoneType.assign(value); }
    inline AvailabilityZone& WithZoneType(const Aws::String& value) { SetZoneType(value); return *this;}
    inline AvailabilityZone& WithZoneType(Aws::String&& value) { SetZoneType(std::move(value)); return *this;}
    inline AvailabilityZone& WithZoneType(const char* value) { SetZoneType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the zone that handles some of the Local Zone or Wavelength Zone
     * control plane operations, such as API calls.</p>
     */
    inline const Aws::String& GetParentZoneName() const{ return m_parentZoneName; }
    inline bool ParentZoneNameHasBeenSet() const { return m_parentZoneNameHasBeenSet; }
    inline void SetParentZoneName(const Aws::String& value) { m_parentZoneNameHasBeenSet = true; m_parentZoneName = value; }
    inline void SetParentZoneName(Aws::String&& value) { m_parentZoneNameHasBeenSet = true; m_parentZoneName = std::move(value); }
    inline void SetParentZoneName(const char* value) { m_parentZoneNameHasBeenSet = true; m_parentZoneName.assign(value); }
    inline AvailabilityZone& WithParentZoneName(const Aws::String& value) { SetParentZoneName(value); return *this;}
    inline AvailabilityZone& WithParentZoneName(Aws::String&& value) { SetParentZoneName(std::move(value)); return *this;}
    inline AvailabilityZone& WithParentZoneName(const char* value) { SetParentZoneName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the zone that handles some of the Local Zone or Wavelength Zone
     * control plane operations, such as API calls.</p>
     */
    inline const Aws::String& GetParentZoneId() const{ return m_parentZoneId; }
    inline bool ParentZoneIdHasBeenSet() const { return m_parentZoneIdHasBeenSet; }
    inline void SetParentZoneId(const Aws::String& value) { m_parentZoneIdHasBeenSet = true; m_parentZoneId = value; }
    inline void SetParentZoneId(Aws::String&& value) { m_parentZoneIdHasBeenSet = true; m_parentZoneId = std::move(value); }
    inline void SetParentZoneId(const char* value) { m_parentZoneIdHasBeenSet = true; m_parentZoneId.assign(value); }
    inline AvailabilityZone& WithParentZoneId(const Aws::String& value) { SetParentZoneId(value); return *this;}
    inline AvailabilityZone& WithParentZoneId(Aws::String&& value) { SetParentZoneId(std::move(value)); return *this;}
    inline AvailabilityZone& WithParentZoneId(const char* value) { SetParentZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long name of the Availability Zone group, Local Zone group, or Wavelength
     * Zone group.</p>
     */
    inline const Aws::String& GetGroupLongName() const{ return m_groupLongName; }
    inline bool GroupLongNameHasBeenSet() const { return m_groupLongNameHasBeenSet; }
    inline void SetGroupLongName(const Aws::String& value) { m_groupLongNameHasBeenSet = true; m_groupLongName = value; }
    inline void SetGroupLongName(Aws::String&& value) { m_groupLongNameHasBeenSet = true; m_groupLongName = std::move(value); }
    inline void SetGroupLongName(const char* value) { m_groupLongNameHasBeenSet = true; m_groupLongName.assign(value); }
    inline AvailabilityZone& WithGroupLongName(const Aws::String& value) { SetGroupLongName(value); return *this;}
    inline AvailabilityZone& WithGroupLongName(Aws::String&& value) { SetGroupLongName(std::move(value)); return *this;}
    inline AvailabilityZone& WithGroupLongName(const char* value) { SetGroupLongName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the Availability Zone, Local Zone, or Wavelength Zone. The
     * possible values are <code>available</code>, <code>unavailable</code>, and
     * <code>constrained</code>.</p>
     */
    inline const AvailabilityZoneState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const AvailabilityZoneState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(AvailabilityZoneState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline AvailabilityZone& WithState(const AvailabilityZoneState& value) { SetState(value); return *this;}
    inline AvailabilityZone& WithState(AvailabilityZoneState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    AvailabilityZoneOptInStatus m_optInStatus;
    bool m_optInStatusHasBeenSet = false;

    Aws::Vector<AvailabilityZoneMessage> m_messages;
    bool m_messagesHasBeenSet = false;

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    Aws::String m_zoneName;
    bool m_zoneNameHasBeenSet = false;

    Aws::String m_zoneId;
    bool m_zoneIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;

    Aws::String m_zoneType;
    bool m_zoneTypeHasBeenSet = false;

    Aws::String m_parentZoneName;
    bool m_parentZoneNameHasBeenSet = false;

    Aws::String m_parentZoneId;
    bool m_parentZoneIdHasBeenSet = false;

    Aws::String m_groupLongName;
    bool m_groupLongNameHasBeenSet = false;

    AvailabilityZoneState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
