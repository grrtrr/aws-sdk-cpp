﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/HostEnvironment.h>
#include <aws/storagegateway/model/GatewayCapacity.h>
#include <aws/storagegateway/model/NetworkInterface.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DescribeGatewayInformationOutput">AWS
   * API Reference</a></p>
   */
  class DescribeGatewayInformationResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeGatewayInformationResult();
    AWS_STORAGEGATEWAY_API DescribeGatewayInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeGatewayInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }
    inline DescribeGatewayInformationResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }
    inline void SetGatewayId(const Aws::String& value) { m_gatewayId = value; }
    inline void SetGatewayId(Aws::String&& value) { m_gatewayId = std::move(value); }
    inline void SetGatewayId(const char* value) { m_gatewayId.assign(value); }
    inline DescribeGatewayInformationResult& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }
    inline void SetGatewayName(const Aws::String& value) { m_gatewayName = value; }
    inline void SetGatewayName(Aws::String&& value) { m_gatewayName = std::move(value); }
    inline void SetGatewayName(const char* value) { m_gatewayName.assign(value); }
    inline DescribeGatewayInformationResult& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayName(Aws::String&& value) { SetGatewayName(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the time zone configured for the gateway.</p>
     */
    inline const Aws::String& GetGatewayTimezone() const{ return m_gatewayTimezone; }
    inline void SetGatewayTimezone(const Aws::String& value) { m_gatewayTimezone = value; }
    inline void SetGatewayTimezone(Aws::String&& value) { m_gatewayTimezone = std::move(value); }
    inline void SetGatewayTimezone(const char* value) { m_gatewayTimezone.assign(value); }
    inline DescribeGatewayInformationResult& WithGatewayTimezone(const Aws::String& value) { SetGatewayTimezone(value); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayTimezone(Aws::String&& value) { SetGatewayTimezone(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayTimezone(const char* value) { SetGatewayTimezone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates the operating state of the gateway.</p>
     */
    inline const Aws::String& GetGatewayState() const{ return m_gatewayState; }
    inline void SetGatewayState(const Aws::String& value) { m_gatewayState = value; }
    inline void SetGatewayState(Aws::String&& value) { m_gatewayState = std::move(value); }
    inline void SetGatewayState(const char* value) { m_gatewayState.assign(value); }
    inline DescribeGatewayInformationResult& WithGatewayState(const Aws::String& value) { SetGatewayState(value); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayState(Aws::String&& value) { SetGatewayState(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayState(const char* value) { SetGatewayState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>NetworkInterface</a> array that contains descriptions of the gateway
     * network interfaces.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetGatewayNetworkInterfaces() const{ return m_gatewayNetworkInterfaces; }
    inline void SetGatewayNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_gatewayNetworkInterfaces = value; }
    inline void SetGatewayNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_gatewayNetworkInterfaces = std::move(value); }
    inline DescribeGatewayInformationResult& WithGatewayNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetGatewayNetworkInterfaces(value); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetGatewayNetworkInterfaces(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& AddGatewayNetworkInterfaces(const NetworkInterface& value) { m_gatewayNetworkInterfaces.push_back(value); return *this; }
    inline DescribeGatewayInformationResult& AddGatewayNetworkInterfaces(NetworkInterface&& value) { m_gatewayNetworkInterfaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the gateway.</p>  <p>Amazon FSx File Gateway is no
     * longer available to new customers. Existing customers of FSx File Gateway can
     * continue to use the service normally. For capabilities similar to FSx File
     * Gateway, visit <a
     * href="https://aws.amazon.com/blogs/storage/switch-your-file-share-access-from-amazon-fsx-file-gateway-to-amazon-fsx-for-windows-file-server/">this
     * blog post</a>.</p> 
     */
    inline const Aws::String& GetGatewayType() const{ return m_gatewayType; }
    inline void SetGatewayType(const Aws::String& value) { m_gatewayType = value; }
    inline void SetGatewayType(Aws::String&& value) { m_gatewayType = std::move(value); }
    inline void SetGatewayType(const char* value) { m_gatewayType.assign(value); }
    inline DescribeGatewayInformationResult& WithGatewayType(const Aws::String& value) { SetGatewayType(value); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayType(Aws::String&& value) { SetGatewayType(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayType(const char* value) { SetGatewayType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which an update to the gateway is available. This date is in the
     * time zone of the gateway. If the gateway is not available for an update this
     * field is not returned in the response.</p>
     */
    inline const Aws::String& GetNextUpdateAvailabilityDate() const{ return m_nextUpdateAvailabilityDate; }
    inline void SetNextUpdateAvailabilityDate(const Aws::String& value) { m_nextUpdateAvailabilityDate = value; }
    inline void SetNextUpdateAvailabilityDate(Aws::String&& value) { m_nextUpdateAvailabilityDate = std::move(value); }
    inline void SetNextUpdateAvailabilityDate(const char* value) { m_nextUpdateAvailabilityDate.assign(value); }
    inline DescribeGatewayInformationResult& WithNextUpdateAvailabilityDate(const Aws::String& value) { SetNextUpdateAvailabilityDate(value); return *this;}
    inline DescribeGatewayInformationResult& WithNextUpdateAvailabilityDate(Aws::String&& value) { SetNextUpdateAvailabilityDate(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithNextUpdateAvailabilityDate(const char* value) { SetNextUpdateAvailabilityDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the last software update was applied to the gateway. If the
     * gateway has never been updated, this field does not return a value in the
     * response. This only only exist and returns once it have been chosen and set by
     * the SGW service, based on the OS version of the gateway VM</p>
     */
    inline const Aws::String& GetLastSoftwareUpdate() const{ return m_lastSoftwareUpdate; }
    inline void SetLastSoftwareUpdate(const Aws::String& value) { m_lastSoftwareUpdate = value; }
    inline void SetLastSoftwareUpdate(Aws::String&& value) { m_lastSoftwareUpdate = std::move(value); }
    inline void SetLastSoftwareUpdate(const char* value) { m_lastSoftwareUpdate.assign(value); }
    inline DescribeGatewayInformationResult& WithLastSoftwareUpdate(const Aws::String& value) { SetLastSoftwareUpdate(value); return *this;}
    inline DescribeGatewayInformationResult& WithLastSoftwareUpdate(Aws::String&& value) { SetLastSoftwareUpdate(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithLastSoftwareUpdate(const char* value) { SetLastSoftwareUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon EC2 instance that was used to launch the gateway.</p>
     */
    inline const Aws::String& GetEc2InstanceId() const{ return m_ec2InstanceId; }
    inline void SetEc2InstanceId(const Aws::String& value) { m_ec2InstanceId = value; }
    inline void SetEc2InstanceId(Aws::String&& value) { m_ec2InstanceId = std::move(value); }
    inline void SetEc2InstanceId(const char* value) { m_ec2InstanceId.assign(value); }
    inline DescribeGatewayInformationResult& WithEc2InstanceId(const Aws::String& value) { SetEc2InstanceId(value); return *this;}
    inline DescribeGatewayInformationResult& WithEc2InstanceId(Aws::String&& value) { SetEc2InstanceId(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithEc2InstanceId(const char* value) { SetEc2InstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the Amazon EC2 instance is located.</p>
     */
    inline const Aws::String& GetEc2InstanceRegion() const{ return m_ec2InstanceRegion; }
    inline void SetEc2InstanceRegion(const Aws::String& value) { m_ec2InstanceRegion = value; }
    inline void SetEc2InstanceRegion(Aws::String&& value) { m_ec2InstanceRegion = std::move(value); }
    inline void SetEc2InstanceRegion(const char* value) { m_ec2InstanceRegion.assign(value); }
    inline DescribeGatewayInformationResult& WithEc2InstanceRegion(const Aws::String& value) { SetEc2InstanceRegion(value); return *this;}
    inline DescribeGatewayInformationResult& WithEc2InstanceRegion(Aws::String&& value) { SetEc2InstanceRegion(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithEc2InstanceRegion(const char* value) { SetEc2InstanceRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags assigned to the gateway, sorted alphabetically by key
     * name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline DescribeGatewayInformationResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DescribeGatewayInformationResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline DescribeGatewayInformationResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the virtual private cloud (VPC) endpoint for
     * your gateway.</p>
     */
    inline const Aws::String& GetVPCEndpoint() const{ return m_vPCEndpoint; }
    inline void SetVPCEndpoint(const Aws::String& value) { m_vPCEndpoint = value; }
    inline void SetVPCEndpoint(Aws::String&& value) { m_vPCEndpoint = std::move(value); }
    inline void SetVPCEndpoint(const char* value) { m_vPCEndpoint.assign(value); }
    inline DescribeGatewayInformationResult& WithVPCEndpoint(const Aws::String& value) { SetVPCEndpoint(value); return *this;}
    inline DescribeGatewayInformationResult& WithVPCEndpoint(Aws::String&& value) { SetVPCEndpoint(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithVPCEndpoint(const char* value) { SetVPCEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch log group that is
     * used to monitor events in the gateway. This field only only exist and returns
     * once it have been chosen and set by the SGW service, based on the OS version of
     * the gateway VM</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupARN() const{ return m_cloudWatchLogGroupARN; }
    inline void SetCloudWatchLogGroupARN(const Aws::String& value) { m_cloudWatchLogGroupARN = value; }
    inline void SetCloudWatchLogGroupARN(Aws::String&& value) { m_cloudWatchLogGroupARN = std::move(value); }
    inline void SetCloudWatchLogGroupARN(const char* value) { m_cloudWatchLogGroupARN.assign(value); }
    inline DescribeGatewayInformationResult& WithCloudWatchLogGroupARN(const Aws::String& value) { SetCloudWatchLogGroupARN(value); return *this;}
    inline DescribeGatewayInformationResult& WithCloudWatchLogGroupARN(Aws::String&& value) { SetCloudWatchLogGroupARN(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithCloudWatchLogGroupARN(const char* value) { SetCloudWatchLogGroupARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of hardware or software platform on which the gateway is
     * running.</p>  <p>Tape Gateway is no longer available on Snow Family
     * devices.</p> 
     */
    inline const HostEnvironment& GetHostEnvironment() const{ return m_hostEnvironment; }
    inline void SetHostEnvironment(const HostEnvironment& value) { m_hostEnvironment = value; }
    inline void SetHostEnvironment(HostEnvironment&& value) { m_hostEnvironment = std::move(value); }
    inline DescribeGatewayInformationResult& WithHostEnvironment(const HostEnvironment& value) { SetHostEnvironment(value); return *this;}
    inline DescribeGatewayInformationResult& WithHostEnvironment(HostEnvironment&& value) { SetHostEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of endpoint for your gateway.</p> <p>Valid Values:
     * <code>STANDARD</code> | <code>FIPS</code> </p>
     */
    inline const Aws::String& GetEndpointType() const{ return m_endpointType; }
    inline void SetEndpointType(const Aws::String& value) { m_endpointType = value; }
    inline void SetEndpointType(Aws::String&& value) { m_endpointType = std::move(value); }
    inline void SetEndpointType(const char* value) { m_endpointType.assign(value); }
    inline DescribeGatewayInformationResult& WithEndpointType(const Aws::String& value) { SetEndpointType(value); return *this;}
    inline DescribeGatewayInformationResult& WithEndpointType(Aws::String&& value) { SetEndpointType(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithEndpointType(const char* value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date after which this gateway will not receive software updates for new
     * features.</p>
     */
    inline const Aws::String& GetSoftwareUpdatesEndDate() const{ return m_softwareUpdatesEndDate; }
    inline void SetSoftwareUpdatesEndDate(const Aws::String& value) { m_softwareUpdatesEndDate = value; }
    inline void SetSoftwareUpdatesEndDate(Aws::String&& value) { m_softwareUpdatesEndDate = std::move(value); }
    inline void SetSoftwareUpdatesEndDate(const char* value) { m_softwareUpdatesEndDate.assign(value); }
    inline DescribeGatewayInformationResult& WithSoftwareUpdatesEndDate(const Aws::String& value) { SetSoftwareUpdatesEndDate(value); return *this;}
    inline DescribeGatewayInformationResult& WithSoftwareUpdatesEndDate(Aws::String&& value) { SetSoftwareUpdatesEndDate(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithSoftwareUpdatesEndDate(const char* value) { SetSoftwareUpdatesEndDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date after which this gateway will not receive software updates for new
     * features and bug fixes.</p>
     */
    inline const Aws::String& GetDeprecationDate() const{ return m_deprecationDate; }
    inline void SetDeprecationDate(const Aws::String& value) { m_deprecationDate = value; }
    inline void SetDeprecationDate(Aws::String&& value) { m_deprecationDate = std::move(value); }
    inline void SetDeprecationDate(const char* value) { m_deprecationDate.assign(value); }
    inline DescribeGatewayInformationResult& WithDeprecationDate(const Aws::String& value) { SetDeprecationDate(value); return *this;}
    inline DescribeGatewayInformationResult& WithDeprecationDate(Aws::String&& value) { SetDeprecationDate(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithDeprecationDate(const char* value) { SetDeprecationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the size of the gateway's metadata cache.</p>
     */
    inline const GatewayCapacity& GetGatewayCapacity() const{ return m_gatewayCapacity; }
    inline void SetGatewayCapacity(const GatewayCapacity& value) { m_gatewayCapacity = value; }
    inline void SetGatewayCapacity(GatewayCapacity&& value) { m_gatewayCapacity = std::move(value); }
    inline DescribeGatewayInformationResult& WithGatewayCapacity(const GatewayCapacity& value) { SetGatewayCapacity(value); return *this;}
    inline DescribeGatewayInformationResult& WithGatewayCapacity(GatewayCapacity&& value) { SetGatewayCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the metadata cache sizes that the gateway can support based on its
     * current hardware specifications.</p>
     */
    inline const Aws::Vector<GatewayCapacity>& GetSupportedGatewayCapacities() const{ return m_supportedGatewayCapacities; }
    inline void SetSupportedGatewayCapacities(const Aws::Vector<GatewayCapacity>& value) { m_supportedGatewayCapacities = value; }
    inline void SetSupportedGatewayCapacities(Aws::Vector<GatewayCapacity>&& value) { m_supportedGatewayCapacities = std::move(value); }
    inline DescribeGatewayInformationResult& WithSupportedGatewayCapacities(const Aws::Vector<GatewayCapacity>& value) { SetSupportedGatewayCapacities(value); return *this;}
    inline DescribeGatewayInformationResult& WithSupportedGatewayCapacities(Aws::Vector<GatewayCapacity>&& value) { SetSupportedGatewayCapacities(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& AddSupportedGatewayCapacities(const GatewayCapacity& value) { m_supportedGatewayCapacities.push_back(value); return *this; }
    inline DescribeGatewayInformationResult& AddSupportedGatewayCapacities(GatewayCapacity&& value) { m_supportedGatewayCapacities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the specific instance of the host platform running
     * the gateway. This value is only available for certain host environments, and its
     * format depends on the host environment type.</p>
     */
    inline const Aws::String& GetHostEnvironmentId() const{ return m_hostEnvironmentId; }
    inline void SetHostEnvironmentId(const Aws::String& value) { m_hostEnvironmentId = value; }
    inline void SetHostEnvironmentId(Aws::String&& value) { m_hostEnvironmentId = std::move(value); }
    inline void SetHostEnvironmentId(const char* value) { m_hostEnvironmentId.assign(value); }
    inline DescribeGatewayInformationResult& WithHostEnvironmentId(const Aws::String& value) { SetHostEnvironmentId(value); return *this;}
    inline DescribeGatewayInformationResult& WithHostEnvironmentId(Aws::String&& value) { SetHostEnvironmentId(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithHostEnvironmentId(const char* value) { SetHostEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the software running on the gateway appliance.</p>
     */
    inline const Aws::String& GetSoftwareVersion() const{ return m_softwareVersion; }
    inline void SetSoftwareVersion(const Aws::String& value) { m_softwareVersion = value; }
    inline void SetSoftwareVersion(Aws::String&& value) { m_softwareVersion = std::move(value); }
    inline void SetSoftwareVersion(const char* value) { m_softwareVersion.assign(value); }
    inline DescribeGatewayInformationResult& WithSoftwareVersion(const Aws::String& value) { SetSoftwareVersion(value); return *this;}
    inline DescribeGatewayInformationResult& WithSoftwareVersion(Aws::String&& value) { SetSoftwareVersion(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithSoftwareVersion(const char* value) { SetSoftwareVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeGatewayInformationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeGatewayInformationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeGatewayInformationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;

    Aws::String m_gatewayId;

    Aws::String m_gatewayName;

    Aws::String m_gatewayTimezone;

    Aws::String m_gatewayState;

    Aws::Vector<NetworkInterface> m_gatewayNetworkInterfaces;

    Aws::String m_gatewayType;

    Aws::String m_nextUpdateAvailabilityDate;

    Aws::String m_lastSoftwareUpdate;

    Aws::String m_ec2InstanceId;

    Aws::String m_ec2InstanceRegion;

    Aws::Vector<Tag> m_tags;

    Aws::String m_vPCEndpoint;

    Aws::String m_cloudWatchLogGroupARN;

    HostEnvironment m_hostEnvironment;

    Aws::String m_endpointType;

    Aws::String m_softwareUpdatesEndDate;

    Aws::String m_deprecationDate;

    GatewayCapacity m_gatewayCapacity;

    Aws::Vector<GatewayCapacity> m_supportedGatewayCapacities;

    Aws::String m_hostEnvironmentId;

    Aws::String m_softwareVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
