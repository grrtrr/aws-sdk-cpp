﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/AvailabilityZoneRebalancing.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/ecs/model/DeploymentConfiguration.h>
#include <aws/ecs/model/NetworkConfiguration.h>
#include <aws/ecs/model/SchedulingStrategy.h>
#include <aws/ecs/model/DeploymentController.h>
#include <aws/ecs/model/PropagateTags.h>
#include <aws/ecs/model/ServiceConnectConfiguration.h>
#include <aws/ecs/model/LoadBalancer.h>
#include <aws/ecs/model/ServiceRegistry.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <aws/ecs/model/PlacementConstraint.h>
#include <aws/ecs/model/PlacementStrategy.h>
#include <aws/ecs/model/Tag.h>
#include <aws/ecs/model/ServiceVolumeConfiguration.h>
#include <aws/ecs/model/VpcLatticeConfiguration.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class CreateServiceRequest : public ECSRequest
  {
  public:
    AWS_ECS_API CreateServiceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateService"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that you run
     * your service on. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }
    inline CreateServiceRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}
    inline CreateServiceRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}
    inline CreateServiceRequest& WithCluster(const char* value) { SetCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your service. Up to 255 letters (uppercase and lowercase),
     * numbers, underscores, and hyphens are allowed. Service names must be unique
     * within a cluster, but you can have similarly named services in multiple clusters
     * within a Region or across multiple Regions.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline CreateServiceRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline CreateServiceRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline CreateServiceRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>family</code> and <code>revision</code>
     * (<code>family:revision</code>) or full ARN of the task definition to run in your
     * service. If a <code>revision</code> isn't specified, the latest
     * <code>ACTIVE</code> revision is used.</p> <p>A task definition must be specified
     * if the service uses either the <code>ECS</code> or <code>CODE_DEPLOY</code>
     * deployment controllers.</p> <p>For more information about deployment types, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-types.html">Amazon
     * ECS deployment types</a>.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }
    inline CreateServiceRequest& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}
    inline CreateServiceRequest& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}
    inline CreateServiceRequest& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to use Availability Zone rebalancing for the service.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-rebalancing.html">Balancing
     * an Amazon ECS service across Availability Zones</a> in the <i> <i>Amazon Elastic
     * Container Service Developer Guide</i> </i>.</p>
     */
    inline const AvailabilityZoneRebalancing& GetAvailabilityZoneRebalancing() const{ return m_availabilityZoneRebalancing; }
    inline bool AvailabilityZoneRebalancingHasBeenSet() const { return m_availabilityZoneRebalancingHasBeenSet; }
    inline void SetAvailabilityZoneRebalancing(const AvailabilityZoneRebalancing& value) { m_availabilityZoneRebalancingHasBeenSet = true; m_availabilityZoneRebalancing = value; }
    inline void SetAvailabilityZoneRebalancing(AvailabilityZoneRebalancing&& value) { m_availabilityZoneRebalancingHasBeenSet = true; m_availabilityZoneRebalancing = std::move(value); }
    inline CreateServiceRequest& WithAvailabilityZoneRebalancing(const AvailabilityZoneRebalancing& value) { SetAvailabilityZoneRebalancing(value); return *this;}
    inline CreateServiceRequest& WithAvailabilityZoneRebalancing(AvailabilityZoneRebalancing&& value) { SetAvailabilityZoneRebalancing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A load balancer object representing the load balancers to use with your
     * service. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-load-balancing.html">Service
     * load balancing</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>If the service uses the rolling update (<code>ECS</code>)
     * deployment controller and using either an Application Load Balancer or Network
     * Load Balancer, you must specify one or more target group ARNs to attach to the
     * service. The service-linked role is required for services that use multiple
     * target groups. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using-service-linked-roles.html">Using
     * service-linked roles for Amazon ECS</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p> <p>If the service uses the
     * <code>CODE_DEPLOY</code> deployment controller, the service is required to use
     * either an Application Load Balancer or Network Load Balancer. When creating an
     * CodeDeploy deployment group, you specify two target groups (referred to as a
     * <code>targetGroupPair</code>). During a deployment, CodeDeploy determines which
     * task set in your service has the status <code>PRIMARY</code>, and it associates
     * one target group with it. Then, it also associates the other target group with
     * the replacement task set. The load balancer can also have up to two listeners: a
     * required listener for production traffic and an optional listener that you can
     * use to perform validation tests with Lambda functions before routing production
     * traffic to it.</p> <p>If you use the <code>CODE_DEPLOY</code> deployment
     * controller, these values can be changed when updating the service.</p> <p>For
     * Application Load Balancers and Network Load Balancers, this object must contain
     * the load balancer target group ARN, the container name, and the container port
     * to access from the load balancer. The container name must be as it appears in a
     * container definition. The load balancer name parameter must be omitted. When a
     * task from this service is placed on a container instance, the container instance
     * and port combination is registered as a target in the target group that's
     * specified here.</p> <p>For Classic Load Balancers, this object must contain the
     * load balancer name, the container name , and the container port to access from
     * the load balancer. The container name must be as it appears in a container
     * definition. The target group ARN parameter must be omitted. When a task from
     * this service is placed on a container instance, the container instance is
     * registered with the load balancer that's specified here.</p> <p>Services with
     * tasks that use the <code>awsvpc</code> network mode (for example, those with the
     * Fargate launch type) only support Application Load Balancers and Network Load
     * Balancers. Classic Load Balancers aren't supported. Also, when you create any
     * target groups for these services, you must choose <code>ip</code> as the target
     * type, not <code>instance</code>. This is because tasks that use the
     * <code>awsvpc</code> network mode are associated with an elastic network
     * interface, not an Amazon EC2 instance.</p>
     */
    inline const Aws::Vector<LoadBalancer>& GetLoadBalancers() const{ return m_loadBalancers; }
    inline bool LoadBalancersHasBeenSet() const { return m_loadBalancersHasBeenSet; }
    inline void SetLoadBalancers(const Aws::Vector<LoadBalancer>& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = value; }
    inline void SetLoadBalancers(Aws::Vector<LoadBalancer>&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers = std::move(value); }
    inline CreateServiceRequest& WithLoadBalancers(const Aws::Vector<LoadBalancer>& value) { SetLoadBalancers(value); return *this;}
    inline CreateServiceRequest& WithLoadBalancers(Aws::Vector<LoadBalancer>&& value) { SetLoadBalancers(std::move(value)); return *this;}
    inline CreateServiceRequest& AddLoadBalancers(const LoadBalancer& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(value); return *this; }
    inline CreateServiceRequest& AddLoadBalancers(LoadBalancer&& value) { m_loadBalancersHasBeenSet = true; m_loadBalancers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of the service discovery registry to associate with this service.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
     * discovery</a>.</p>  <p>Each service may be associated with one service
     * registry. Multiple service registries for each service isn't supported.</p>
     * 
     */
    inline const Aws::Vector<ServiceRegistry>& GetServiceRegistries() const{ return m_serviceRegistries; }
    inline bool ServiceRegistriesHasBeenSet() const { return m_serviceRegistriesHasBeenSet; }
    inline void SetServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = value; }
    inline void SetServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries = std::move(value); }
    inline CreateServiceRequest& WithServiceRegistries(const Aws::Vector<ServiceRegistry>& value) { SetServiceRegistries(value); return *this;}
    inline CreateServiceRequest& WithServiceRegistries(Aws::Vector<ServiceRegistry>&& value) { SetServiceRegistries(std::move(value)); return *this;}
    inline CreateServiceRequest& AddServiceRegistries(const ServiceRegistry& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(value); return *this; }
    inline CreateServiceRequest& AddServiceRegistries(ServiceRegistry&& value) { m_serviceRegistriesHasBeenSet = true; m_serviceRegistries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of instantiations of the specified task definition to place and
     * keep running in your service.</p> <p>This is required if
     * <code>schedulingStrategy</code> is <code>REPLICA</code> or isn't specified. If
     * <code>schedulingStrategy</code> is <code>DAEMON</code> then this isn't
     * required.</p>
     */
    inline int GetDesiredCount() const{ return m_desiredCount; }
    inline bool DesiredCountHasBeenSet() const { return m_desiredCountHasBeenSet; }
    inline void SetDesiredCount(int value) { m_desiredCountHasBeenSet = true; m_desiredCount = value; }
    inline CreateServiceRequest& WithDesiredCount(int value) { SetDesiredCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier that you provide to ensure the idempotency of the request. It
     * must be unique and is case sensitive. Up to 36 ASCII characters in the range of
     * 33-126 (inclusive) are allowed.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateServiceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateServiceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateServiceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The infrastructure that you run your service on. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon
     * ECS launch types</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>The <code>FARGATE</code> launch type runs your tasks on
     * Fargate On-Demand infrastructure.</p>  <p>Fargate Spot infrastructure is
     * available for use but a capacity provider strategy must be used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/fargate-capacity-providers.html">Fargate
     * capacity providers</a> in the <i>Amazon ECS Developer Guide</i>.</p> 
     * <p>The <code>EC2</code> launch type runs your tasks on Amazon EC2 instances
     * registered to your cluster.</p> <p>The <code>EXTERNAL</code> launch type runs
     * your tasks on your on-premises server or virtual machine (VM) capacity
     * registered to your cluster.</p> <p>A service can use either a launch type or a
     * capacity provider strategy. If a <code>launchType</code> is specified, the
     * <code>capacityProviderStrategy</code> parameter must be omitted.</p>
     */
    inline const LaunchType& GetLaunchType() const{ return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(const LaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline void SetLaunchType(LaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }
    inline CreateServiceRequest& WithLaunchType(const LaunchType& value) { SetLaunchType(value); return *this;}
    inline CreateServiceRequest& WithLaunchType(LaunchType&& value) { SetLaunchType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capacity provider strategy to use for the service.</p> <p>If a
     * <code>capacityProviderStrategy</code> is specified, the <code>launchType</code>
     * parameter must be omitted. If no <code>capacityProviderStrategy</code> or
     * <code>launchType</code> is specified, the
     * <code>defaultCapacityProviderStrategy</code> for the cluster is used.</p> <p>A
     * capacity provider strategy can contain a maximum of 20 capacity providers.</p>
     */
    inline const Aws::Vector<CapacityProviderStrategyItem>& GetCapacityProviderStrategy() const{ return m_capacityProviderStrategy; }
    inline bool CapacityProviderStrategyHasBeenSet() const { return m_capacityProviderStrategyHasBeenSet; }
    inline void SetCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = value; }
    inline void SetCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy = std::move(value); }
    inline CreateServiceRequest& WithCapacityProviderStrategy(const Aws::Vector<CapacityProviderStrategyItem>& value) { SetCapacityProviderStrategy(value); return *this;}
    inline CreateServiceRequest& WithCapacityProviderStrategy(Aws::Vector<CapacityProviderStrategyItem>&& value) { SetCapacityProviderStrategy(std::move(value)); return *this;}
    inline CreateServiceRequest& AddCapacityProviderStrategy(const CapacityProviderStrategyItem& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(value); return *this; }
    inline CreateServiceRequest& AddCapacityProviderStrategy(CapacityProviderStrategyItem&& value) { m_capacityProviderStrategyHasBeenSet = true; m_capacityProviderStrategy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The platform version that your tasks in the service are running on. A
     * platform version is specified only for tasks using the Fargate launch type. If
     * one isn't specified, the <code>LATEST</code> platform version is used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
     * platform versions</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }
    inline CreateServiceRequest& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}
    inline CreateServiceRequest& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}
    inline CreateServiceRequest& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or full Amazon Resource Name (ARN) of the IAM role that allows
     * Amazon ECS to make calls to your load balancer on your behalf. This parameter is
     * only permitted if you are using a load balancer with your service and your task
     * definition doesn't use the <code>awsvpc</code> network mode. If you specify the
     * <code>role</code> parameter, you must also specify a load balancer object with
     * the <code>loadBalancers</code> parameter.</p>  <p>If your account has
     * already created the Amazon ECS service-linked role, that role is used for your
     * service unless you specify a role here. The service-linked role is required if
     * your task definition uses the <code>awsvpc</code> network mode or if the service
     * is configured to use service discovery, an external deployment controller,
     * multiple target groups, or Elastic Inference accelerators in which case you
     * don't specify a role here. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/using-service-linked-roles.html">Using
     * service-linked roles for Amazon ECS</a> in the <i>Amazon Elastic Container
     * Service Developer Guide</i>.</p>  <p>If your specified role has a
     * path other than <code>/</code>, then you must either specify the full role ARN
     * (this is recommended) or prefix the role name with the path. For example, if a
     * role with the name <code>bar</code> has a path of <code>/foo/</code> then you
     * would specify <code>/foo/bar</code> as the role name. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline CreateServiceRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline CreateServiceRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline CreateServiceRequest& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional deployment parameters that control how many tasks run during the
     * deployment and the ordering of stopping and starting tasks.</p>
     */
    inline const DeploymentConfiguration& GetDeploymentConfiguration() const{ return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    inline void SetDeploymentConfiguration(const DeploymentConfiguration& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = value; }
    inline void SetDeploymentConfiguration(DeploymentConfiguration&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::move(value); }
    inline CreateServiceRequest& WithDeploymentConfiguration(const DeploymentConfiguration& value) { SetDeploymentConfiguration(value); return *this;}
    inline CreateServiceRequest& WithDeploymentConfiguration(DeploymentConfiguration&& value) { SetDeploymentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of placement constraint objects to use for tasks in your service.
     * You can specify a maximum of 10 constraints for each task. This limit includes
     * constraints in the task definition and those specified at runtime.</p>
     */
    inline const Aws::Vector<PlacementConstraint>& GetPlacementConstraints() const{ return m_placementConstraints; }
    inline bool PlacementConstraintsHasBeenSet() const { return m_placementConstraintsHasBeenSet; }
    inline void SetPlacementConstraints(const Aws::Vector<PlacementConstraint>& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = value; }
    inline void SetPlacementConstraints(Aws::Vector<PlacementConstraint>&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints = std::move(value); }
    inline CreateServiceRequest& WithPlacementConstraints(const Aws::Vector<PlacementConstraint>& value) { SetPlacementConstraints(value); return *this;}
    inline CreateServiceRequest& WithPlacementConstraints(Aws::Vector<PlacementConstraint>&& value) { SetPlacementConstraints(std::move(value)); return *this;}
    inline CreateServiceRequest& AddPlacementConstraints(const PlacementConstraint& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(value); return *this; }
    inline CreateServiceRequest& AddPlacementConstraints(PlacementConstraint&& value) { m_placementConstraintsHasBeenSet = true; m_placementConstraints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The placement strategy objects to use for tasks in your service. You can
     * specify a maximum of 5 strategy rules for each service.</p>
     */
    inline const Aws::Vector<PlacementStrategy>& GetPlacementStrategy() const{ return m_placementStrategy; }
    inline bool PlacementStrategyHasBeenSet() const { return m_placementStrategyHasBeenSet; }
    inline void SetPlacementStrategy(const Aws::Vector<PlacementStrategy>& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = value; }
    inline void SetPlacementStrategy(Aws::Vector<PlacementStrategy>&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = std::move(value); }
    inline CreateServiceRequest& WithPlacementStrategy(const Aws::Vector<PlacementStrategy>& value) { SetPlacementStrategy(value); return *this;}
    inline CreateServiceRequest& WithPlacementStrategy(Aws::Vector<PlacementStrategy>&& value) { SetPlacementStrategy(std::move(value)); return *this;}
    inline CreateServiceRequest& AddPlacementStrategy(const PlacementStrategy& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.push_back(value); return *this; }
    inline CreateServiceRequest& AddPlacementStrategy(PlacementStrategy&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The network configuration for the service. This parameter is required for
     * task definitions that use the <code>awsvpc</code> network mode to receive their
     * own elastic network interface, and it isn't supported for other network modes.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Task
     * networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }
    inline CreateServiceRequest& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}
    inline CreateServiceRequest& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period of time, in seconds, that the Amazon ECS service scheduler ignores
     * unhealthy Elastic Load Balancing, VPC Lattice, and container health checks after
     * a task has first started. If you don't specify a health check grace period
     * value, the default value of <code>0</code> is used. If you don't use any of the
     * health checks, then <code>healthCheckGracePeriodSeconds</code> is unused.</p>
     * <p>If your service's tasks take a while to start and respond to health checks,
     * you can specify a health check grace period of up to 2,147,483,647 seconds
     * (about 69 years). During that time, the Amazon ECS service scheduler ignores
     * health check status. This grace period can prevent the service scheduler from
     * marking tasks as unhealthy and stopping them before they have time to come
     * up.</p>
     */
    inline int GetHealthCheckGracePeriodSeconds() const{ return m_healthCheckGracePeriodSeconds; }
    inline bool HealthCheckGracePeriodSecondsHasBeenSet() const { return m_healthCheckGracePeriodSecondsHasBeenSet; }
    inline void SetHealthCheckGracePeriodSeconds(int value) { m_healthCheckGracePeriodSecondsHasBeenSet = true; m_healthCheckGracePeriodSeconds = value; }
    inline CreateServiceRequest& WithHealthCheckGracePeriodSeconds(int value) { SetHealthCheckGracePeriodSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling strategy to use for the service. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs_services.html">Services</a>.</p>
     * <p>There are two service scheduler strategies available:</p> <ul> <li> <p>
     * <code>REPLICA</code>-The replica scheduling strategy places and maintains the
     * desired number of tasks across your cluster. By default, the service scheduler
     * spreads tasks across Availability Zones. You can use task placement strategies
     * and constraints to customize task placement decisions. This scheduler strategy
     * is required if the service uses the <code>CODE_DEPLOY</code> or
     * <code>EXTERNAL</code> deployment controller types.</p> </li> <li> <p>
     * <code>DAEMON</code>-The daemon scheduling strategy deploys exactly one task on
     * each active container instance that meets all of the task placement constraints
     * that you specify in your cluster. The service scheduler also evaluates the task
     * placement constraints for running tasks and will stop tasks that don't meet the
     * placement constraints. When you're using this strategy, you don't need to
     * specify a desired number of tasks, a task placement strategy, or use Service
     * Auto Scaling policies.</p>  <p>Tasks using the Fargate launch type or the
     * <code>CODE_DEPLOY</code> or <code>EXTERNAL</code> deployment controller types
     * don't support the <code>DAEMON</code> scheduling strategy.</p>  </li>
     * </ul>
     */
    inline const SchedulingStrategy& GetSchedulingStrategy() const{ return m_schedulingStrategy; }
    inline bool SchedulingStrategyHasBeenSet() const { return m_schedulingStrategyHasBeenSet; }
    inline void SetSchedulingStrategy(const SchedulingStrategy& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = value; }
    inline void SetSchedulingStrategy(SchedulingStrategy&& value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = std::move(value); }
    inline CreateServiceRequest& WithSchedulingStrategy(const SchedulingStrategy& value) { SetSchedulingStrategy(value); return *this;}
    inline CreateServiceRequest& WithSchedulingStrategy(SchedulingStrategy&& value) { SetSchedulingStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment controller to use for the service. If no deployment controller
     * is specified, the default value of <code>ECS</code> is used.</p>
     */
    inline const DeploymentController& GetDeploymentController() const{ return m_deploymentController; }
    inline bool DeploymentControllerHasBeenSet() const { return m_deploymentControllerHasBeenSet; }
    inline void SetDeploymentController(const DeploymentController& value) { m_deploymentControllerHasBeenSet = true; m_deploymentController = value; }
    inline void SetDeploymentController(DeploymentController&& value) { m_deploymentControllerHasBeenSet = true; m_deploymentController = std::move(value); }
    inline CreateServiceRequest& WithDeploymentController(const DeploymentController& value) { SetDeploymentController(value); return *this;}
    inline CreateServiceRequest& WithDeploymentController(DeploymentController&& value) { SetDeploymentController(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata that you apply to the service to help you categorize and
     * organize them. Each tag consists of a key and an optional value, both of which
     * you define. When a service is deleted, the tags are deleted as well.</p> <p>The
     * following basic restrictions apply to tags:</p> <ul> <li> <p>Maximum number of
     * tags per resource - 50</p> </li> <li> <p>For each resource, each tag key must be
     * unique, and each tag key can have only one value.</p> </li> <li> <p>Maximum key
     * length - 128 Unicode characters in UTF-8</p> </li> <li> <p>Maximum value length
     * - 256 Unicode characters in UTF-8</p> </li> <li> <p>If your tagging schema is
     * used across multiple services and resources, remember that other services may
     * have restrictions on allowed characters. Generally allowed characters are:
     * letters, numbers, and spaces representable in UTF-8, and the following
     * characters: + - = . _ : / @.</p> </li> <li> <p>Tag keys and values are
     * case-sensitive.</p> </li> <li> <p>Do not use <code>aws:</code>,
     * <code>AWS:</code>, or any upper or lowercase combination of such as a prefix for
     * either keys or values as it is reserved for Amazon Web Services use. You cannot
     * edit or delete tag keys or values with this prefix. Tags with this prefix do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateServiceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateServiceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateServiceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateServiceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to turn on Amazon ECS managed tags for the tasks within the
     * service. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-using-tags.html">Tagging
     * your Amazon ECS resources</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> <p>When you use Amazon ECS managed tags, you need to
     * set the <code>propagateTags</code> request parameter.</p>
     */
    inline bool GetEnableECSManagedTags() const{ return m_enableECSManagedTags; }
    inline bool EnableECSManagedTagsHasBeenSet() const { return m_enableECSManagedTagsHasBeenSet; }
    inline void SetEnableECSManagedTags(bool value) { m_enableECSManagedTagsHasBeenSet = true; m_enableECSManagedTags = value; }
    inline CreateServiceRequest& WithEnableECSManagedTags(bool value) { SetEnableECSManagedTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to propagate the tags from the task definition to the task.
     * If no value is specified, the tags aren't propagated. Tags can only be
     * propagated to the task during task creation. To add tags to a task after task
     * creation, use the <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_TagResource.html">TagResource</a>
     * API action.</p> <p>You must set this to a value other than <code>NONE</code>
     * when you use Cost Explorer. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/usage-reports.html">Amazon
     * ECS usage reports</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p> <p>The default is <code>NONE</code>.</p>
     */
    inline const PropagateTags& GetPropagateTags() const{ return m_propagateTags; }
    inline bool PropagateTagsHasBeenSet() const { return m_propagateTagsHasBeenSet; }
    inline void SetPropagateTags(const PropagateTags& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = value; }
    inline void SetPropagateTags(PropagateTags&& value) { m_propagateTagsHasBeenSet = true; m_propagateTags = std::move(value); }
    inline CreateServiceRequest& WithPropagateTags(const PropagateTags& value) { SetPropagateTags(value); return *this;}
    inline CreateServiceRequest& WithPropagateTags(PropagateTags&& value) { SetPropagateTags(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the execute command functionality is turned on for the
     * service. If <code>true</code>, this enables execute command functionality on all
     * containers in the service tasks.</p>
     */
    inline bool GetEnableExecuteCommand() const{ return m_enableExecuteCommand; }
    inline bool EnableExecuteCommandHasBeenSet() const { return m_enableExecuteCommandHasBeenSet; }
    inline void SetEnableExecuteCommand(bool value) { m_enableExecuteCommandHasBeenSet = true; m_enableExecuteCommand = value; }
    inline CreateServiceRequest& WithEnableExecuteCommand(bool value) { SetEnableExecuteCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for this service to discover and connect to services, and
     * be discovered by, and connected from, other services within a namespace.</p>
     * <p>Tasks that run in a namespace can use short names to connect to services in
     * the namespace. Tasks can connect to services across all of the clusters in the
     * namespace. Tasks connect through a managed proxy container that collects logs
     * and metrics for increased visibility. Only the tasks that Amazon ECS services
     * create are supported with Service Connect. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-connect.html">Service
     * Connect</a> in the <i>Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const ServiceConnectConfiguration& GetServiceConnectConfiguration() const{ return m_serviceConnectConfiguration; }
    inline bool ServiceConnectConfigurationHasBeenSet() const { return m_serviceConnectConfigurationHasBeenSet; }
    inline void SetServiceConnectConfiguration(const ServiceConnectConfiguration& value) { m_serviceConnectConfigurationHasBeenSet = true; m_serviceConnectConfiguration = value; }
    inline void SetServiceConnectConfiguration(ServiceConnectConfiguration&& value) { m_serviceConnectConfigurationHasBeenSet = true; m_serviceConnectConfiguration = std::move(value); }
    inline CreateServiceRequest& WithServiceConnectConfiguration(const ServiceConnectConfiguration& value) { SetServiceConnectConfiguration(value); return *this;}
    inline CreateServiceRequest& WithServiceConnectConfiguration(ServiceConnectConfiguration&& value) { SetServiceConnectConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a volume specified in the task definition as a volume
     * that is configured at launch time. Currently, the only supported volume type is
     * an Amazon EBS volume.</p>
     */
    inline const Aws::Vector<ServiceVolumeConfiguration>& GetVolumeConfigurations() const{ return m_volumeConfigurations; }
    inline bool VolumeConfigurationsHasBeenSet() const { return m_volumeConfigurationsHasBeenSet; }
    inline void SetVolumeConfigurations(const Aws::Vector<ServiceVolumeConfiguration>& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = value; }
    inline void SetVolumeConfigurations(Aws::Vector<ServiceVolumeConfiguration>&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations = std::move(value); }
    inline CreateServiceRequest& WithVolumeConfigurations(const Aws::Vector<ServiceVolumeConfiguration>& value) { SetVolumeConfigurations(value); return *this;}
    inline CreateServiceRequest& WithVolumeConfigurations(Aws::Vector<ServiceVolumeConfiguration>&& value) { SetVolumeConfigurations(std::move(value)); return *this;}
    inline CreateServiceRequest& AddVolumeConfigurations(const ServiceVolumeConfiguration& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(value); return *this; }
    inline CreateServiceRequest& AddVolumeConfigurations(ServiceVolumeConfiguration&& value) { m_volumeConfigurationsHasBeenSet = true; m_volumeConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The VPC Lattice configuration for the service being created.</p>
     */
    inline const Aws::Vector<VpcLatticeConfiguration>& GetVpcLatticeConfigurations() const{ return m_vpcLatticeConfigurations; }
    inline bool VpcLatticeConfigurationsHasBeenSet() const { return m_vpcLatticeConfigurationsHasBeenSet; }
    inline void SetVpcLatticeConfigurations(const Aws::Vector<VpcLatticeConfiguration>& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations = value; }
    inline void SetVpcLatticeConfigurations(Aws::Vector<VpcLatticeConfiguration>&& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations = std::move(value); }
    inline CreateServiceRequest& WithVpcLatticeConfigurations(const Aws::Vector<VpcLatticeConfiguration>& value) { SetVpcLatticeConfigurations(value); return *this;}
    inline CreateServiceRequest& WithVpcLatticeConfigurations(Aws::Vector<VpcLatticeConfiguration>&& value) { SetVpcLatticeConfigurations(std::move(value)); return *this;}
    inline CreateServiceRequest& AddVpcLatticeConfigurations(const VpcLatticeConfiguration& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations.push_back(value); return *this; }
    inline CreateServiceRequest& AddVpcLatticeConfigurations(VpcLatticeConfiguration&& value) { m_vpcLatticeConfigurationsHasBeenSet = true; m_vpcLatticeConfigurations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet = false;

    AvailabilityZoneRebalancing m_availabilityZoneRebalancing;
    bool m_availabilityZoneRebalancingHasBeenSet = false;

    Aws::Vector<LoadBalancer> m_loadBalancers;
    bool m_loadBalancersHasBeenSet = false;

    Aws::Vector<ServiceRegistry> m_serviceRegistries;
    bool m_serviceRegistriesHasBeenSet = false;

    int m_desiredCount;
    bool m_desiredCountHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    LaunchType m_launchType;
    bool m_launchTypeHasBeenSet = false;

    Aws::Vector<CapacityProviderStrategyItem> m_capacityProviderStrategy;
    bool m_capacityProviderStrategyHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;

    Aws::Vector<PlacementConstraint> m_placementConstraints;
    bool m_placementConstraintsHasBeenSet = false;

    Aws::Vector<PlacementStrategy> m_placementStrategy;
    bool m_placementStrategyHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    int m_healthCheckGracePeriodSeconds;
    bool m_healthCheckGracePeriodSecondsHasBeenSet = false;

    SchedulingStrategy m_schedulingStrategy;
    bool m_schedulingStrategyHasBeenSet = false;

    DeploymentController m_deploymentController;
    bool m_deploymentControllerHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_enableECSManagedTags;
    bool m_enableECSManagedTagsHasBeenSet = false;

    PropagateTags m_propagateTags;
    bool m_propagateTagsHasBeenSet = false;

    bool m_enableExecuteCommand;
    bool m_enableExecuteCommandHasBeenSet = false;

    ServiceConnectConfiguration m_serviceConnectConfiguration;
    bool m_serviceConnectConfigurationHasBeenSet = false;

    Aws::Vector<ServiceVolumeConfiguration> m_volumeConfigurations;
    bool m_volumeConfigurationsHasBeenSet = false;

    Aws::Vector<VpcLatticeConfiguration> m_vpcLatticeConfigurations;
    bool m_vpcLatticeConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
