﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VCpuCountRange.h>
#include <aws/ec2/model/MemoryMiB.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/MemoryGiBPerVCpu.h>
#include <aws/ec2/model/BareMetal.h>
#include <aws/ec2/model/BurstablePerformance.h>
#include <aws/ec2/model/NetworkInterfaceCount.h>
#include <aws/ec2/model/LocalStorage.h>
#include <aws/ec2/model/TotalLocalStorageGB.h>
#include <aws/ec2/model/BaselineEbsBandwidthMbps.h>
#include <aws/ec2/model/AcceleratorCount.h>
#include <aws/ec2/model/AcceleratorTotalMemoryMiB.h>
#include <aws/ec2/model/NetworkBandwidthGbps.h>
#include <aws/ec2/model/BaselinePerformanceFactors.h>
#include <aws/ec2/model/CpuManufacturer.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceGeneration.h>
#include <aws/ec2/model/LocalStorageType.h>
#include <aws/ec2/model/AcceleratorType.h>
#include <aws/ec2/model/AcceleratorManufacturer.h>
#include <aws/ec2/model/AcceleratorName.h>
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
   * <p>The attributes for the instance types. When you specify instance attributes,
   * Amazon EC2 will identify instance types with these attributes.</p> <p>You must
   * specify <code>VCpuCount</code> and <code>MemoryMiB</code>. All other attributes
   * are optional. Any unspecified optional attribute is set to its default.</p>
   * <p>When you specify multiple attributes, you get instance types that satisfy all
   * of the specified attributes. If you specify multiple values for an attribute,
   * you get instance types that satisfy any of the specified values.</p> <p>To limit
   * the list of instance types from which Amazon EC2 can identify matching instance
   * types, you can use one of the following parameters, but not both in the same
   * request:</p> <ul> <li> <p> <code>AllowedInstanceTypes</code> - The instance
   * types to include in the list. All other instance types are ignored, even if they
   * match your specified attributes.</p> </li> <li> <p>
   * <code>ExcludedInstanceTypes</code> - The instance types to exclude from the
   * list, even if they match your specified attributes.</p> </li> </ul>  <p>If
   * you specify <code>InstanceRequirements</code>, you can't specify
   * <code>InstanceType</code>.</p> <p>Attribute-based instance type selection is
   * only supported when using Auto Scaling groups, EC2 Fleet, and Spot Fleet to
   * launch instances. If you plan to use the launch template in the <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-instance-wizard.html">launch
   * instance wizard</a> or with the <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances
   * API</a>, you can't specify <code>InstanceRequirements</code>.</p>  <p>For
   * more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-mixed-instances-group-attribute-based-instance-type-selection.html">Create
   * mixed instances group using attribute-based instance type selection</a> in the
   * <i>Amazon EC2 Auto Scaling User Guide</i>, and also <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-attribute-based-instance-type-selection.html">Specify
   * attributes for instance type selection for EC2 Fleet or Spot Fleet</a> and <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-placement-score.html">Spot
   * placement score</a> in the <i>Amazon EC2 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceRequirements">AWS
   * API Reference</a></p>
   */
  class InstanceRequirements
  {
  public:
    AWS_EC2_API InstanceRequirements();
    AWS_EC2_API InstanceRequirements(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceRequirements& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The minimum and maximum number of vCPUs.</p>
     */
    inline const VCpuCountRange& GetVCpuCount() const{ return m_vCpuCount; }
    inline bool VCpuCountHasBeenSet() const { return m_vCpuCountHasBeenSet; }
    inline void SetVCpuCount(const VCpuCountRange& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = value; }
    inline void SetVCpuCount(VCpuCountRange&& value) { m_vCpuCountHasBeenSet = true; m_vCpuCount = std::move(value); }
    inline InstanceRequirements& WithVCpuCount(const VCpuCountRange& value) { SetVCpuCount(value); return *this;}
    inline InstanceRequirements& WithVCpuCount(VCpuCountRange&& value) { SetVCpuCount(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum amount of memory, in MiB.</p>
     */
    inline const MemoryMiB& GetMemoryMiB() const{ return m_memoryMiB; }
    inline bool MemoryMiBHasBeenSet() const { return m_memoryMiBHasBeenSet; }
    inline void SetMemoryMiB(const MemoryMiB& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = value; }
    inline void SetMemoryMiB(MemoryMiB&& value) { m_memoryMiBHasBeenSet = true; m_memoryMiB = std::move(value); }
    inline InstanceRequirements& WithMemoryMiB(const MemoryMiB& value) { SetMemoryMiB(value); return *this;}
    inline InstanceRequirements& WithMemoryMiB(MemoryMiB&& value) { SetMemoryMiB(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU manufacturers to include.</p> <ul> <li> <p>For instance types with
     * Intel CPUs, specify <code>intel</code>.</p> </li> <li> <p>For instance types
     * with AMD CPUs, specify <code>amd</code>.</p> </li> <li> <p>For instance types
     * with Amazon Web Services CPUs, specify <code>amazon-web-services</code>.</p>
     * </li> <li> <p>For instance types with Apple CPUs, specify
     * <code>apple</code>.</p> </li> </ul>  <p>Don't confuse the CPU manufacturer
     * with the CPU architecture. Instances will be launched with a compatible CPU
     * architecture based on the Amazon Machine Image (AMI) that you specify in your
     * launch template.</p>  <p>Default: Any manufacturer</p>
     */
    inline const Aws::Vector<CpuManufacturer>& GetCpuManufacturers() const{ return m_cpuManufacturers; }
    inline bool CpuManufacturersHasBeenSet() const { return m_cpuManufacturersHasBeenSet; }
    inline void SetCpuManufacturers(const Aws::Vector<CpuManufacturer>& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers = value; }
    inline void SetCpuManufacturers(Aws::Vector<CpuManufacturer>&& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers = std::move(value); }
    inline InstanceRequirements& WithCpuManufacturers(const Aws::Vector<CpuManufacturer>& value) { SetCpuManufacturers(value); return *this;}
    inline InstanceRequirements& WithCpuManufacturers(Aws::Vector<CpuManufacturer>&& value) { SetCpuManufacturers(std::move(value)); return *this;}
    inline InstanceRequirements& AddCpuManufacturers(const CpuManufacturer& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers.push_back(value); return *this; }
    inline InstanceRequirements& AddCpuManufacturers(CpuManufacturer&& value) { m_cpuManufacturersHasBeenSet = true; m_cpuManufacturers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum amount of memory per vCPU, in GiB.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline const MemoryGiBPerVCpu& GetMemoryGiBPerVCpu() const{ return m_memoryGiBPerVCpu; }
    inline bool MemoryGiBPerVCpuHasBeenSet() const { return m_memoryGiBPerVCpuHasBeenSet; }
    inline void SetMemoryGiBPerVCpu(const MemoryGiBPerVCpu& value) { m_memoryGiBPerVCpuHasBeenSet = true; m_memoryGiBPerVCpu = value; }
    inline void SetMemoryGiBPerVCpu(MemoryGiBPerVCpu&& value) { m_memoryGiBPerVCpuHasBeenSet = true; m_memoryGiBPerVCpu = std::move(value); }
    inline InstanceRequirements& WithMemoryGiBPerVCpu(const MemoryGiBPerVCpu& value) { SetMemoryGiBPerVCpu(value); return *this;}
    inline InstanceRequirements& WithMemoryGiBPerVCpu(MemoryGiBPerVCpu&& value) { SetMemoryGiBPerVCpu(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance types to exclude.</p> <p>You can use strings with one or more
     * wild cards, represented by an asterisk (<code>*</code>), to exclude an instance
     * type, size, or generation. The following are examples: <code>m5.8xlarge</code>,
     * <code>c5*.*</code>, <code>m5a.*</code>, <code>r*</code>, <code>*3*</code>.</p>
     * <p>For example, if you specify <code>c5*</code>,Amazon EC2 will exclude the
     * entire C5 instance family, which includes all C5a and C5n instance types. If you
     * specify <code>m5a.*</code>, Amazon EC2 will exclude all the M5a instance types,
     * but not the M5n instance types.</p>  <p>If you specify
     * <code>ExcludedInstanceTypes</code>, you can't specify
     * <code>AllowedInstanceTypes</code>.</p>  <p>Default: No excluded instance
     * types</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludedInstanceTypes() const{ return m_excludedInstanceTypes; }
    inline bool ExcludedInstanceTypesHasBeenSet() const { return m_excludedInstanceTypesHasBeenSet; }
    inline void SetExcludedInstanceTypes(const Aws::Vector<Aws::String>& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = value; }
    inline void SetExcludedInstanceTypes(Aws::Vector<Aws::String>&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes = std::move(value); }
    inline InstanceRequirements& WithExcludedInstanceTypes(const Aws::Vector<Aws::String>& value) { SetExcludedInstanceTypes(value); return *this;}
    inline InstanceRequirements& WithExcludedInstanceTypes(Aws::Vector<Aws::String>&& value) { SetExcludedInstanceTypes(std::move(value)); return *this;}
    inline InstanceRequirements& AddExcludedInstanceTypes(const Aws::String& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(value); return *this; }
    inline InstanceRequirements& AddExcludedInstanceTypes(Aws::String&& value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(std::move(value)); return *this; }
    inline InstanceRequirements& AddExcludedInstanceTypes(const char* value) { m_excludedInstanceTypesHasBeenSet = true; m_excludedInstanceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether current or previous generation instance types are included.
     * The current generation instance types are recommended for use. Current
     * generation instance types are typically the latest two to three generations in
     * each instance family. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>For current generation
     * instance types, specify <code>current</code>.</p> <p>For previous generation
     * instance types, specify <code>previous</code>.</p> <p>Default: Current and
     * previous generation instance types</p>
     */
    inline const Aws::Vector<InstanceGeneration>& GetInstanceGenerations() const{ return m_instanceGenerations; }
    inline bool InstanceGenerationsHasBeenSet() const { return m_instanceGenerationsHasBeenSet; }
    inline void SetInstanceGenerations(const Aws::Vector<InstanceGeneration>& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations = value; }
    inline void SetInstanceGenerations(Aws::Vector<InstanceGeneration>&& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations = std::move(value); }
    inline InstanceRequirements& WithInstanceGenerations(const Aws::Vector<InstanceGeneration>& value) { SetInstanceGenerations(value); return *this;}
    inline InstanceRequirements& WithInstanceGenerations(Aws::Vector<InstanceGeneration>&& value) { SetInstanceGenerations(std::move(value)); return *this;}
    inline InstanceRequirements& AddInstanceGenerations(const InstanceGeneration& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations.push_back(value); return *this; }
    inline InstanceRequirements& AddInstanceGenerations(InstanceGeneration&& value) { m_instanceGenerationsHasBeenSet = true; m_instanceGenerations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[Price protection] The price protection threshold for Spot Instances, as a
     * percentage higher than an identified Spot price. The identified Spot price is
     * the Spot price of the lowest priced current generation C, M, or R instance type
     * with your specified attributes. If no current generation C, M, or R instance
     * type matches your attributes, then the identified Spot price is from the lowest
     * priced current generation instance types, and failing that, from the lowest
     * priced previous generation instance types that match your attributes. When
     * Amazon EC2 selects instance types with your attributes, it will exclude instance
     * types whose Spot price exceeds your specified threshold.</p> <p>The parameter
     * accepts an integer, which Amazon EC2 interprets as a percentage.</p> <p>If you
     * set <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is applied based on the
     * per-vCPU or per-memory price instead of the per-instance price.</p> <p>This
     * parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements.html">GetInstanceTypesFromInstanceRequirements</a>.</p>
     *  <p>Only one of <code>SpotMaxPricePercentageOverLowestPrice</code> or
     * <code>MaxSpotPriceAsPercentageOfOptimalOnDemandPrice</code> can be specified. If
     * you don't specify either, Amazon EC2 will automatically apply optimal price
     * protection to consistently select from a wide range of instance types. To
     * indicate no price protection threshold for Spot Instances, meaning you want to
     * consider all instance types that match your attributes, include one of these
     * parameters and specify a high value, such as <code>999999</code>.</p> 
     * <p>Default: <code>100</code> </p>
     */
    inline int GetSpotMaxPricePercentageOverLowestPrice() const{ return m_spotMaxPricePercentageOverLowestPrice; }
    inline bool SpotMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_spotMaxPricePercentageOverLowestPriceHasBeenSet; }
    inline void SetSpotMaxPricePercentageOverLowestPrice(int value) { m_spotMaxPricePercentageOverLowestPriceHasBeenSet = true; m_spotMaxPricePercentageOverLowestPrice = value; }
    inline InstanceRequirements& WithSpotMaxPricePercentageOverLowestPrice(int value) { SetSpotMaxPricePercentageOverLowestPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Price protection] The price protection threshold for On-Demand Instances, as
     * a percentage higher than an identified On-Demand price. The identified On-Demand
     * price is the price of the lowest priced current generation C, M, or R instance
     * type with your specified attributes. When Amazon EC2 selects instance types with
     * your attributes, it will exclude instance types whose price exceeds your
     * specified threshold.</p> <p>The parameter accepts an integer, which Amazon EC2
     * interprets as a percentage.</p> <p>To turn off price protection, specify a high
     * value, such as <code>999999</code>.</p> <p>This parameter is not supported for
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>
     * and <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetInstanceTypesFromInstanceRequirements.html">GetInstanceTypesFromInstanceRequirements</a>.</p>
     *  <p>If you set <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is applied based on the
     * per-vCPU or per-memory price instead of the per-instance price.</p> 
     * <p>Default: <code>20</code> </p>
     */
    inline int GetOnDemandMaxPricePercentageOverLowestPrice() const{ return m_onDemandMaxPricePercentageOverLowestPrice; }
    inline bool OnDemandMaxPricePercentageOverLowestPriceHasBeenSet() const { return m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet; }
    inline void SetOnDemandMaxPricePercentageOverLowestPrice(int value) { m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = true; m_onDemandMaxPricePercentageOverLowestPrice = value; }
    inline InstanceRequirements& WithOnDemandMaxPricePercentageOverLowestPrice(int value) { SetOnDemandMaxPricePercentageOverLowestPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether bare metal instance types must be included, excluded, or
     * required.</p> <ul> <li> <p>To include bare metal instance types, specify
     * <code>included</code>.</p> </li> <li> <p>To require only bare metal instance
     * types, specify <code>required</code>.</p> </li> <li> <p>To exclude bare metal
     * instance types, specify <code>excluded</code>.</p> </li> </ul> <p>Default:
     * <code>excluded</code> </p>
     */
    inline const BareMetal& GetBareMetal() const{ return m_bareMetal; }
    inline bool BareMetalHasBeenSet() const { return m_bareMetalHasBeenSet; }
    inline void SetBareMetal(const BareMetal& value) { m_bareMetalHasBeenSet = true; m_bareMetal = value; }
    inline void SetBareMetal(BareMetal&& value) { m_bareMetalHasBeenSet = true; m_bareMetal = std::move(value); }
    inline InstanceRequirements& WithBareMetal(const BareMetal& value) { SetBareMetal(value); return *this;}
    inline InstanceRequirements& WithBareMetal(BareMetal&& value) { SetBareMetal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether burstable performance T instance types are included,
     * excluded, or required. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/burstable-performance-instances.html">Burstable
     * performance instances</a>.</p> <ul> <li> <p>To include burstable performance
     * instance types, specify <code>included</code>.</p> </li> <li> <p>To require only
     * burstable performance instance types, specify <code>required</code>.</p> </li>
     * <li> <p>To exclude burstable performance instance types, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>excluded</code> </p>
     */
    inline const BurstablePerformance& GetBurstablePerformance() const{ return m_burstablePerformance; }
    inline bool BurstablePerformanceHasBeenSet() const { return m_burstablePerformanceHasBeenSet; }
    inline void SetBurstablePerformance(const BurstablePerformance& value) { m_burstablePerformanceHasBeenSet = true; m_burstablePerformance = value; }
    inline void SetBurstablePerformance(BurstablePerformance&& value) { m_burstablePerformanceHasBeenSet = true; m_burstablePerformance = std::move(value); }
    inline InstanceRequirements& WithBurstablePerformance(const BurstablePerformance& value) { SetBurstablePerformance(value); return *this;}
    inline InstanceRequirements& WithBurstablePerformance(BurstablePerformance&& value) { SetBurstablePerformance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether instance types must support hibernation for On-Demand
     * Instances.</p> <p>This parameter is not supported for <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetSpotPlacementScores.html">GetSpotPlacementScores</a>.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetRequireHibernateSupport() const{ return m_requireHibernateSupport; }
    inline bool RequireHibernateSupportHasBeenSet() const { return m_requireHibernateSupportHasBeenSet; }
    inline void SetRequireHibernateSupport(bool value) { m_requireHibernateSupportHasBeenSet = true; m_requireHibernateSupport = value; }
    inline InstanceRequirements& WithRequireHibernateSupport(bool value) { SetRequireHibernateSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum number of network interfaces.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline const NetworkInterfaceCount& GetNetworkInterfaceCount() const{ return m_networkInterfaceCount; }
    inline bool NetworkInterfaceCountHasBeenSet() const { return m_networkInterfaceCountHasBeenSet; }
    inline void SetNetworkInterfaceCount(const NetworkInterfaceCount& value) { m_networkInterfaceCountHasBeenSet = true; m_networkInterfaceCount = value; }
    inline void SetNetworkInterfaceCount(NetworkInterfaceCount&& value) { m_networkInterfaceCountHasBeenSet = true; m_networkInterfaceCount = std::move(value); }
    inline InstanceRequirements& WithNetworkInterfaceCount(const NetworkInterfaceCount& value) { SetNetworkInterfaceCount(value); return *this;}
    inline InstanceRequirements& WithNetworkInterfaceCount(NetworkInterfaceCount&& value) { SetNetworkInterfaceCount(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether instance types with instance store volumes are included,
     * excluded, or required. For more information, <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/InstanceStorage.html">Amazon
     * EC2 instance store</a> in the <i>Amazon EC2 User Guide</i>.</p> <ul> <li> <p>To
     * include instance types with instance store volumes, specify
     * <code>included</code>.</p> </li> <li> <p>To require only instance types with
     * instance store volumes, specify <code>required</code>.</p> </li> <li> <p>To
     * exclude instance types with instance store volumes, specify
     * <code>excluded</code>.</p> </li> </ul> <p>Default: <code>included</code> </p>
     */
    inline const LocalStorage& GetLocalStorage() const{ return m_localStorage; }
    inline bool LocalStorageHasBeenSet() const { return m_localStorageHasBeenSet; }
    inline void SetLocalStorage(const LocalStorage& value) { m_localStorageHasBeenSet = true; m_localStorage = value; }
    inline void SetLocalStorage(LocalStorage&& value) { m_localStorageHasBeenSet = true; m_localStorage = std::move(value); }
    inline InstanceRequirements& WithLocalStorage(const LocalStorage& value) { SetLocalStorage(value); return *this;}
    inline InstanceRequirements& WithLocalStorage(LocalStorage&& value) { SetLocalStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of local storage that is required.</p> <ul> <li> <p>For instance
     * types with hard disk drive (HDD) storage, specify <code>hdd</code>.</p> </li>
     * <li> <p>For instance types with solid state drive (SSD) storage, specify
     * <code>ssd</code>.</p> </li> </ul> <p>Default: <code>hdd</code> and
     * <code>ssd</code> </p>
     */
    inline const Aws::Vector<LocalStorageType>& GetLocalStorageTypes() const{ return m_localStorageTypes; }
    inline bool LocalStorageTypesHasBeenSet() const { return m_localStorageTypesHasBeenSet; }
    inline void SetLocalStorageTypes(const Aws::Vector<LocalStorageType>& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes = value; }
    inline void SetLocalStorageTypes(Aws::Vector<LocalStorageType>&& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes = std::move(value); }
    inline InstanceRequirements& WithLocalStorageTypes(const Aws::Vector<LocalStorageType>& value) { SetLocalStorageTypes(value); return *this;}
    inline InstanceRequirements& WithLocalStorageTypes(Aws::Vector<LocalStorageType>&& value) { SetLocalStorageTypes(std::move(value)); return *this;}
    inline InstanceRequirements& AddLocalStorageTypes(const LocalStorageType& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes.push_back(value); return *this; }
    inline InstanceRequirements& AddLocalStorageTypes(LocalStorageType&& value) { m_localStorageTypesHasBeenSet = true; m_localStorageTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum amount of total local storage, in GB.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline const TotalLocalStorageGB& GetTotalLocalStorageGB() const{ return m_totalLocalStorageGB; }
    inline bool TotalLocalStorageGBHasBeenSet() const { return m_totalLocalStorageGBHasBeenSet; }
    inline void SetTotalLocalStorageGB(const TotalLocalStorageGB& value) { m_totalLocalStorageGBHasBeenSet = true; m_totalLocalStorageGB = value; }
    inline void SetTotalLocalStorageGB(TotalLocalStorageGB&& value) { m_totalLocalStorageGBHasBeenSet = true; m_totalLocalStorageGB = std::move(value); }
    inline InstanceRequirements& WithTotalLocalStorageGB(const TotalLocalStorageGB& value) { SetTotalLocalStorageGB(value); return *this;}
    inline InstanceRequirements& WithTotalLocalStorageGB(TotalLocalStorageGB&& value) { SetTotalLocalStorageGB(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum baseline bandwidth to Amazon EBS, in Mbps. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebs-optimized.html">Amazon
     * EBS–optimized instances</a> in the <i>Amazon EC2 User Guide</i>.</p> <p>Default:
     * No minimum or maximum limits</p>
     */
    inline const BaselineEbsBandwidthMbps& GetBaselineEbsBandwidthMbps() const{ return m_baselineEbsBandwidthMbps; }
    inline bool BaselineEbsBandwidthMbpsHasBeenSet() const { return m_baselineEbsBandwidthMbpsHasBeenSet; }
    inline void SetBaselineEbsBandwidthMbps(const BaselineEbsBandwidthMbps& value) { m_baselineEbsBandwidthMbpsHasBeenSet = true; m_baselineEbsBandwidthMbps = value; }
    inline void SetBaselineEbsBandwidthMbps(BaselineEbsBandwidthMbps&& value) { m_baselineEbsBandwidthMbpsHasBeenSet = true; m_baselineEbsBandwidthMbps = std::move(value); }
    inline InstanceRequirements& WithBaselineEbsBandwidthMbps(const BaselineEbsBandwidthMbps& value) { SetBaselineEbsBandwidthMbps(value); return *this;}
    inline InstanceRequirements& WithBaselineEbsBandwidthMbps(BaselineEbsBandwidthMbps&& value) { SetBaselineEbsBandwidthMbps(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accelerator types that must be on the instance type.</p> <ul> <li> <p>For
     * instance types with FPGA accelerators, specify <code>fpga</code>.</p> </li> <li>
     * <p>For instance types with GPU accelerators, specify <code>gpu</code>.</p> </li>
     * <li> <p>For instance types with Inference accelerators, specify
     * <code>inference</code>.</p> </li> <li> <p>For instance types with Inference
     * accelerators, specify <code>inference</code>.</p> </li> </ul> <p>Default: Any
     * accelerator type</p>
     */
    inline const Aws::Vector<AcceleratorType>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }
    inline void SetAcceleratorTypes(const Aws::Vector<AcceleratorType>& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = value; }
    inline void SetAcceleratorTypes(Aws::Vector<AcceleratorType>&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::move(value); }
    inline InstanceRequirements& WithAcceleratorTypes(const Aws::Vector<AcceleratorType>& value) { SetAcceleratorTypes(value); return *this;}
    inline InstanceRequirements& WithAcceleratorTypes(Aws::Vector<AcceleratorType>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}
    inline InstanceRequirements& AddAcceleratorTypes(const AcceleratorType& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }
    inline InstanceRequirements& AddAcceleratorTypes(AcceleratorType&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum number of accelerators (GPUs, FPGAs, or Amazon Web
     * Services Inferentia chips) on an instance.</p> <p>To exclude accelerator-enabled
     * instance types, set <code>Max</code> to <code>0</code>.</p> <p>Default: No
     * minimum or maximum limits</p>
     */
    inline const AcceleratorCount& GetAcceleratorCount() const{ return m_acceleratorCount; }
    inline bool AcceleratorCountHasBeenSet() const { return m_acceleratorCountHasBeenSet; }
    inline void SetAcceleratorCount(const AcceleratorCount& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = value; }
    inline void SetAcceleratorCount(AcceleratorCount&& value) { m_acceleratorCountHasBeenSet = true; m_acceleratorCount = std::move(value); }
    inline InstanceRequirements& WithAcceleratorCount(const AcceleratorCount& value) { SetAcceleratorCount(value); return *this;}
    inline InstanceRequirements& WithAcceleratorCount(AcceleratorCount&& value) { SetAcceleratorCount(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether instance types must have accelerators by specific
     * manufacturers.</p> <ul> <li> <p>For instance types with Amazon Web Services
     * devices, specify <code>amazon-web-services</code>.</p> </li> <li> <p>For
     * instance types with AMD devices, specify <code>amd</code>.</p> </li> <li> <p>For
     * instance types with Habana devices, specify <code>habana</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA devices, specify <code>nvidia</code>.</p>
     * </li> <li> <p>For instance types with Xilinx devices, specify
     * <code>xilinx</code>.</p> </li> </ul> <p>Default: Any manufacturer</p>
     */
    inline const Aws::Vector<AcceleratorManufacturer>& GetAcceleratorManufacturers() const{ return m_acceleratorManufacturers; }
    inline bool AcceleratorManufacturersHasBeenSet() const { return m_acceleratorManufacturersHasBeenSet; }
    inline void SetAcceleratorManufacturers(const Aws::Vector<AcceleratorManufacturer>& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers = value; }
    inline void SetAcceleratorManufacturers(Aws::Vector<AcceleratorManufacturer>&& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers = std::move(value); }
    inline InstanceRequirements& WithAcceleratorManufacturers(const Aws::Vector<AcceleratorManufacturer>& value) { SetAcceleratorManufacturers(value); return *this;}
    inline InstanceRequirements& WithAcceleratorManufacturers(Aws::Vector<AcceleratorManufacturer>&& value) { SetAcceleratorManufacturers(std::move(value)); return *this;}
    inline InstanceRequirements& AddAcceleratorManufacturers(const AcceleratorManufacturer& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers.push_back(value); return *this; }
    inline InstanceRequirements& AddAcceleratorManufacturers(AcceleratorManufacturer&& value) { m_acceleratorManufacturersHasBeenSet = true; m_acceleratorManufacturers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The accelerators that must be on the instance type.</p> <ul> <li> <p>For
     * instance types with NVIDIA A10G GPUs, specify <code>a10g</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA A100 GPUs, specify <code>a100</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA H100 GPUs, specify
     * <code>h100</code>.</p> </li> <li> <p>For instance types with Amazon Web Services
     * Inferentia chips, specify <code>inferentia</code>.</p> </li> <li> <p>For
     * instance types with NVIDIA GRID K520 GPUs, specify <code>k520</code>.</p> </li>
     * <li> <p>For instance types with NVIDIA K80 GPUs, specify <code>k80</code>.</p>
     * </li> <li> <p>For instance types with NVIDIA M60 GPUs, specify
     * <code>m60</code>.</p> </li> <li> <p>For instance types with AMD Radeon Pro V520
     * GPUs, specify <code>radeon-pro-v520</code>.</p> </li> <li> <p>For instance types
     * with NVIDIA T4 GPUs, specify <code>t4</code>.</p> </li> <li> <p>For instance
     * types with NVIDIA T4G GPUs, specify <code>t4g</code>.</p> </li> <li> <p>For
     * instance types with Xilinx VU9P FPGAs, specify <code>vu9p</code>.</p> </li> <li>
     * <p>For instance types with NVIDIA V100 GPUs, specify <code>v100</code>.</p>
     * </li> </ul> <p>Default: Any accelerator</p>
     */
    inline const Aws::Vector<AcceleratorName>& GetAcceleratorNames() const{ return m_acceleratorNames; }
    inline bool AcceleratorNamesHasBeenSet() const { return m_acceleratorNamesHasBeenSet; }
    inline void SetAcceleratorNames(const Aws::Vector<AcceleratorName>& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames = value; }
    inline void SetAcceleratorNames(Aws::Vector<AcceleratorName>&& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames = std::move(value); }
    inline InstanceRequirements& WithAcceleratorNames(const Aws::Vector<AcceleratorName>& value) { SetAcceleratorNames(value); return *this;}
    inline InstanceRequirements& WithAcceleratorNames(Aws::Vector<AcceleratorName>&& value) { SetAcceleratorNames(std::move(value)); return *this;}
    inline InstanceRequirements& AddAcceleratorNames(const AcceleratorName& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames.push_back(value); return *this; }
    inline InstanceRequirements& AddAcceleratorNames(AcceleratorName&& value) { m_acceleratorNamesHasBeenSet = true; m_acceleratorNames.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum amount of total accelerator memory, in MiB.</p>
     * <p>Default: No minimum or maximum limits</p>
     */
    inline const AcceleratorTotalMemoryMiB& GetAcceleratorTotalMemoryMiB() const{ return m_acceleratorTotalMemoryMiB; }
    inline bool AcceleratorTotalMemoryMiBHasBeenSet() const { return m_acceleratorTotalMemoryMiBHasBeenSet; }
    inline void SetAcceleratorTotalMemoryMiB(const AcceleratorTotalMemoryMiB& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = value; }
    inline void SetAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiB&& value) { m_acceleratorTotalMemoryMiBHasBeenSet = true; m_acceleratorTotalMemoryMiB = std::move(value); }
    inline InstanceRequirements& WithAcceleratorTotalMemoryMiB(const AcceleratorTotalMemoryMiB& value) { SetAcceleratorTotalMemoryMiB(value); return *this;}
    inline InstanceRequirements& WithAcceleratorTotalMemoryMiB(AcceleratorTotalMemoryMiB&& value) { SetAcceleratorTotalMemoryMiB(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum and maximum amount of network bandwidth, in gigabits per second
     * (Gbps).</p> <p>Default: No minimum or maximum limits</p>
     */
    inline const NetworkBandwidthGbps& GetNetworkBandwidthGbps() const{ return m_networkBandwidthGbps; }
    inline bool NetworkBandwidthGbpsHasBeenSet() const { return m_networkBandwidthGbpsHasBeenSet; }
    inline void SetNetworkBandwidthGbps(const NetworkBandwidthGbps& value) { m_networkBandwidthGbpsHasBeenSet = true; m_networkBandwidthGbps = value; }
    inline void SetNetworkBandwidthGbps(NetworkBandwidthGbps&& value) { m_networkBandwidthGbpsHasBeenSet = true; m_networkBandwidthGbps = std::move(value); }
    inline InstanceRequirements& WithNetworkBandwidthGbps(const NetworkBandwidthGbps& value) { SetNetworkBandwidthGbps(value); return *this;}
    inline InstanceRequirements& WithNetworkBandwidthGbps(NetworkBandwidthGbps&& value) { SetNetworkBandwidthGbps(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance types to apply your specified attributes against. All other
     * instance types are ignored, even if they match your specified attributes.</p>
     * <p>You can use strings with one or more wild cards, represented by an asterisk
     * (<code>*</code>), to allow an instance type, size, or generation. The following
     * are examples: <code>m5.8xlarge</code>, <code>c5*.*</code>, <code>m5a.*</code>,
     * <code>r*</code>, <code>*3*</code>.</p> <p>For example, if you specify
     * <code>c5*</code>,Amazon EC2 will allow the entire C5 instance family, which
     * includes all C5a and C5n instance types. If you specify <code>m5a.*</code>,
     * Amazon EC2 will allow all the M5a instance types, but not the M5n instance
     * types.</p>  <p>If you specify <code>AllowedInstanceTypes</code>, you can't
     * specify <code>ExcludedInstanceTypes</code>.</p>  <p>Default: All instance
     * types</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedInstanceTypes() const{ return m_allowedInstanceTypes; }
    inline bool AllowedInstanceTypesHasBeenSet() const { return m_allowedInstanceTypesHasBeenSet; }
    inline void SetAllowedInstanceTypes(const Aws::Vector<Aws::String>& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes = value; }
    inline void SetAllowedInstanceTypes(Aws::Vector<Aws::String>&& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes = std::move(value); }
    inline InstanceRequirements& WithAllowedInstanceTypes(const Aws::Vector<Aws::String>& value) { SetAllowedInstanceTypes(value); return *this;}
    inline InstanceRequirements& WithAllowedInstanceTypes(Aws::Vector<Aws::String>&& value) { SetAllowedInstanceTypes(std::move(value)); return *this;}
    inline InstanceRequirements& AddAllowedInstanceTypes(const Aws::String& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes.push_back(value); return *this; }
    inline InstanceRequirements& AddAllowedInstanceTypes(Aws::String&& value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes.push_back(std::move(value)); return *this; }
    inline InstanceRequirements& AddAllowedInstanceTypes(const char* value) { m_allowedInstanceTypesHasBeenSet = true; m_allowedInstanceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>[Price protection] The price protection threshold for Spot Instances, as a
     * percentage of an identified On-Demand price. The identified On-Demand price is
     * the price of the lowest priced current generation C, M, or R instance type with
     * your specified attributes. If no current generation C, M, or R instance type
     * matches your attributes, then the identified price is from the lowest priced
     * current generation instance types, and failing that, from the lowest priced
     * previous generation instance types that match your attributes. When Amazon EC2
     * selects instance types with your attributes, it will exclude instance types
     * whose price exceeds your specified threshold.</p> <p>The parameter accepts an
     * integer, which Amazon EC2 interprets as a percentage.</p> <p>If you set
     * <code>TargetCapacityUnitType</code> to <code>vcpu</code> or
     * <code>memory-mib</code>, the price protection threshold is based on the per vCPU
     * or per memory price instead of the per instance price.</p>  <p>Only one of
     * <code>SpotMaxPricePercentageOverLowestPrice</code> or
     * <code>MaxSpotPriceAsPercentageOfOptimalOnDemandPrice</code> can be specified. If
     * you don't specify either, Amazon EC2 will automatically apply optimal price
     * protection to consistently select from a wide range of instance types. To
     * indicate no price protection threshold for Spot Instances, meaning you want to
     * consider all instance types that match your attributes, include one of these
     * parameters and specify a high value, such as <code>999999</code>.</p> 
     */
    inline int GetMaxSpotPriceAsPercentageOfOptimalOnDemandPrice() const{ return m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice; }
    inline bool MaxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet() const { return m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet; }
    inline void SetMaxSpotPriceAsPercentageOfOptimalOnDemandPrice(int value) { m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet = true; m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice = value; }
    inline InstanceRequirements& WithMaxSpotPriceAsPercentageOfOptimalOnDemandPrice(int value) { SetMaxSpotPriceAsPercentageOfOptimalOnDemandPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The baseline performance to consider, using an instance family as a baseline
     * reference. The instance family establishes the lowest acceptable level of
     * performance. Amazon EC2 uses this baseline to guide instance type selection, but
     * there is no guarantee that the selected instance types will always exceed the
     * baseline for every application. Currently, this parameter only supports CPU
     * performance as a baseline performance factor. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-fleet-attribute-based-instance-type-selection.html#ec2fleet-abis-performance-protection">Performance
     * protection</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const BaselinePerformanceFactors& GetBaselinePerformanceFactors() const{ return m_baselinePerformanceFactors; }
    inline bool BaselinePerformanceFactorsHasBeenSet() const { return m_baselinePerformanceFactorsHasBeenSet; }
    inline void SetBaselinePerformanceFactors(const BaselinePerformanceFactors& value) { m_baselinePerformanceFactorsHasBeenSet = true; m_baselinePerformanceFactors = value; }
    inline void SetBaselinePerformanceFactors(BaselinePerformanceFactors&& value) { m_baselinePerformanceFactorsHasBeenSet = true; m_baselinePerformanceFactors = std::move(value); }
    inline InstanceRequirements& WithBaselinePerformanceFactors(const BaselinePerformanceFactors& value) { SetBaselinePerformanceFactors(value); return *this;}
    inline InstanceRequirements& WithBaselinePerformanceFactors(BaselinePerformanceFactors&& value) { SetBaselinePerformanceFactors(std::move(value)); return *this;}
    ///@}
  private:

    VCpuCountRange m_vCpuCount;
    bool m_vCpuCountHasBeenSet = false;

    MemoryMiB m_memoryMiB;
    bool m_memoryMiBHasBeenSet = false;

    Aws::Vector<CpuManufacturer> m_cpuManufacturers;
    bool m_cpuManufacturersHasBeenSet = false;

    MemoryGiBPerVCpu m_memoryGiBPerVCpu;
    bool m_memoryGiBPerVCpuHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludedInstanceTypes;
    bool m_excludedInstanceTypesHasBeenSet = false;

    Aws::Vector<InstanceGeneration> m_instanceGenerations;
    bool m_instanceGenerationsHasBeenSet = false;

    int m_spotMaxPricePercentageOverLowestPrice;
    bool m_spotMaxPricePercentageOverLowestPriceHasBeenSet = false;

    int m_onDemandMaxPricePercentageOverLowestPrice;
    bool m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = false;

    BareMetal m_bareMetal;
    bool m_bareMetalHasBeenSet = false;

    BurstablePerformance m_burstablePerformance;
    bool m_burstablePerformanceHasBeenSet = false;

    bool m_requireHibernateSupport;
    bool m_requireHibernateSupportHasBeenSet = false;

    NetworkInterfaceCount m_networkInterfaceCount;
    bool m_networkInterfaceCountHasBeenSet = false;

    LocalStorage m_localStorage;
    bool m_localStorageHasBeenSet = false;

    Aws::Vector<LocalStorageType> m_localStorageTypes;
    bool m_localStorageTypesHasBeenSet = false;

    TotalLocalStorageGB m_totalLocalStorageGB;
    bool m_totalLocalStorageGBHasBeenSet = false;

    BaselineEbsBandwidthMbps m_baselineEbsBandwidthMbps;
    bool m_baselineEbsBandwidthMbpsHasBeenSet = false;

    Aws::Vector<AcceleratorType> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet = false;

    AcceleratorCount m_acceleratorCount;
    bool m_acceleratorCountHasBeenSet = false;

    Aws::Vector<AcceleratorManufacturer> m_acceleratorManufacturers;
    bool m_acceleratorManufacturersHasBeenSet = false;

    Aws::Vector<AcceleratorName> m_acceleratorNames;
    bool m_acceleratorNamesHasBeenSet = false;

    AcceleratorTotalMemoryMiB m_acceleratorTotalMemoryMiB;
    bool m_acceleratorTotalMemoryMiBHasBeenSet = false;

    NetworkBandwidthGbps m_networkBandwidthGbps;
    bool m_networkBandwidthGbpsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedInstanceTypes;
    bool m_allowedInstanceTypesHasBeenSet = false;

    int m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice;
    bool m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet = false;

    BaselinePerformanceFactors m_baselinePerformanceFactors;
    bool m_baselinePerformanceFactorsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
