﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/BillingMode.h>
#include <aws/dynamodb/model/AutoScalingSettingsUpdate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/GlobalTableGlobalSecondaryIndexSettingsUpdate.h>
#include <aws/dynamodb/model/ReplicaSettingsUpdate.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class UpdateGlobalTableSettingsRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API UpdateGlobalTableSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalTableSettings"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the global table</p>
     */
    inline const Aws::String& GetGlobalTableName() const{ return m_globalTableName; }
    inline bool GlobalTableNameHasBeenSet() const { return m_globalTableNameHasBeenSet; }
    inline void SetGlobalTableName(const Aws::String& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = value; }
    inline void SetGlobalTableName(Aws::String&& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = std::move(value); }
    inline void SetGlobalTableName(const char* value) { m_globalTableNameHasBeenSet = true; m_globalTableName.assign(value); }
    inline UpdateGlobalTableSettingsRequest& WithGlobalTableName(const Aws::String& value) { SetGlobalTableName(value); return *this;}
    inline UpdateGlobalTableSettingsRequest& WithGlobalTableName(Aws::String&& value) { SetGlobalTableName(std::move(value)); return *this;}
    inline UpdateGlobalTableSettingsRequest& WithGlobalTableName(const char* value) { SetGlobalTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billing mode of the global table. If <code>GlobalTableBillingMode</code>
     * is not specified, the global table defaults to <code>PROVISIONED</code> capacity
     * billing mode.</p> <ul> <li> <p> <code>PROVISIONED</code> - We recommend using
     * <code>PROVISIONED</code> for predictable workloads. <code>PROVISIONED</code>
     * sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/provisioned-capacity-mode.html">Provisioned
     * capacity mode</a>.</p> </li> <li> <p> <code>PAY_PER_REQUEST</code> - We
     * recommend using <code>PAY_PER_REQUEST</code> for unpredictable workloads.
     * <code>PAY_PER_REQUEST</code> sets the billing mode to <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/on-demand-capacity-mode.html">On-demand
     * capacity mode</a>. </p> </li> </ul>
     */
    inline const BillingMode& GetGlobalTableBillingMode() const{ return m_globalTableBillingMode; }
    inline bool GlobalTableBillingModeHasBeenSet() const { return m_globalTableBillingModeHasBeenSet; }
    inline void SetGlobalTableBillingMode(const BillingMode& value) { m_globalTableBillingModeHasBeenSet = true; m_globalTableBillingMode = value; }
    inline void SetGlobalTableBillingMode(BillingMode&& value) { m_globalTableBillingModeHasBeenSet = true; m_globalTableBillingMode = std::move(value); }
    inline UpdateGlobalTableSettingsRequest& WithGlobalTableBillingMode(const BillingMode& value) { SetGlobalTableBillingMode(value); return *this;}
    inline UpdateGlobalTableSettingsRequest& WithGlobalTableBillingMode(BillingMode&& value) { SetGlobalTableBillingMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException.</code> </p>
     */
    inline long long GetGlobalTableProvisionedWriteCapacityUnits() const{ return m_globalTableProvisionedWriteCapacityUnits; }
    inline bool GlobalTableProvisionedWriteCapacityUnitsHasBeenSet() const { return m_globalTableProvisionedWriteCapacityUnitsHasBeenSet; }
    inline void SetGlobalTableProvisionedWriteCapacityUnits(long long value) { m_globalTableProvisionedWriteCapacityUnitsHasBeenSet = true; m_globalTableProvisionedWriteCapacityUnits = value; }
    inline UpdateGlobalTableSettingsRequest& WithGlobalTableProvisionedWriteCapacityUnits(long long value) { SetGlobalTableProvisionedWriteCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Auto scaling settings for managing provisioned write capacity for the global
     * table.</p>
     */
    inline const AutoScalingSettingsUpdate& GetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate() const{ return m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate; }
    inline bool GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet() const { return m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet; }
    inline void SetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(const AutoScalingSettingsUpdate& value) { m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet = true; m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate = value; }
    inline void SetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(AutoScalingSettingsUpdate&& value) { m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet = true; m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate = std::move(value); }
    inline UpdateGlobalTableSettingsRequest& WithGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(const AutoScalingSettingsUpdate& value) { SetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(value); return *this;}
    inline UpdateGlobalTableSettingsRequest& WithGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(AutoScalingSettingsUpdate&& value) { SetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the settings of a global secondary index for a global table that
     * will be modified.</p>
     */
    inline const Aws::Vector<GlobalTableGlobalSecondaryIndexSettingsUpdate>& GetGlobalTableGlobalSecondaryIndexSettingsUpdate() const{ return m_globalTableGlobalSecondaryIndexSettingsUpdate; }
    inline bool GlobalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet() const { return m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet; }
    inline void SetGlobalTableGlobalSecondaryIndexSettingsUpdate(const Aws::Vector<GlobalTableGlobalSecondaryIndexSettingsUpdate>& value) { m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet = true; m_globalTableGlobalSecondaryIndexSettingsUpdate = value; }
    inline void SetGlobalTableGlobalSecondaryIndexSettingsUpdate(Aws::Vector<GlobalTableGlobalSecondaryIndexSettingsUpdate>&& value) { m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet = true; m_globalTableGlobalSecondaryIndexSettingsUpdate = std::move(value); }
    inline UpdateGlobalTableSettingsRequest& WithGlobalTableGlobalSecondaryIndexSettingsUpdate(const Aws::Vector<GlobalTableGlobalSecondaryIndexSettingsUpdate>& value) { SetGlobalTableGlobalSecondaryIndexSettingsUpdate(value); return *this;}
    inline UpdateGlobalTableSettingsRequest& WithGlobalTableGlobalSecondaryIndexSettingsUpdate(Aws::Vector<GlobalTableGlobalSecondaryIndexSettingsUpdate>&& value) { SetGlobalTableGlobalSecondaryIndexSettingsUpdate(std::move(value)); return *this;}
    inline UpdateGlobalTableSettingsRequest& AddGlobalTableGlobalSecondaryIndexSettingsUpdate(const GlobalTableGlobalSecondaryIndexSettingsUpdate& value) { m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet = true; m_globalTableGlobalSecondaryIndexSettingsUpdate.push_back(value); return *this; }
    inline UpdateGlobalTableSettingsRequest& AddGlobalTableGlobalSecondaryIndexSettingsUpdate(GlobalTableGlobalSecondaryIndexSettingsUpdate&& value) { m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet = true; m_globalTableGlobalSecondaryIndexSettingsUpdate.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the settings for a global table in a Region that will be
     * modified.</p>
     */
    inline const Aws::Vector<ReplicaSettingsUpdate>& GetReplicaSettingsUpdate() const{ return m_replicaSettingsUpdate; }
    inline bool ReplicaSettingsUpdateHasBeenSet() const { return m_replicaSettingsUpdateHasBeenSet; }
    inline void SetReplicaSettingsUpdate(const Aws::Vector<ReplicaSettingsUpdate>& value) { m_replicaSettingsUpdateHasBeenSet = true; m_replicaSettingsUpdate = value; }
    inline void SetReplicaSettingsUpdate(Aws::Vector<ReplicaSettingsUpdate>&& value) { m_replicaSettingsUpdateHasBeenSet = true; m_replicaSettingsUpdate = std::move(value); }
    inline UpdateGlobalTableSettingsRequest& WithReplicaSettingsUpdate(const Aws::Vector<ReplicaSettingsUpdate>& value) { SetReplicaSettingsUpdate(value); return *this;}
    inline UpdateGlobalTableSettingsRequest& WithReplicaSettingsUpdate(Aws::Vector<ReplicaSettingsUpdate>&& value) { SetReplicaSettingsUpdate(std::move(value)); return *this;}
    inline UpdateGlobalTableSettingsRequest& AddReplicaSettingsUpdate(const ReplicaSettingsUpdate& value) { m_replicaSettingsUpdateHasBeenSet = true; m_replicaSettingsUpdate.push_back(value); return *this; }
    inline UpdateGlobalTableSettingsRequest& AddReplicaSettingsUpdate(ReplicaSettingsUpdate&& value) { m_replicaSettingsUpdateHasBeenSet = true; m_replicaSettingsUpdate.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_globalTableName;
    bool m_globalTableNameHasBeenSet = false;

    BillingMode m_globalTableBillingMode;
    bool m_globalTableBillingModeHasBeenSet = false;

    long long m_globalTableProvisionedWriteCapacityUnits;
    bool m_globalTableProvisionedWriteCapacityUnitsHasBeenSet = false;

    AutoScalingSettingsUpdate m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate;
    bool m_globalTableProvisionedWriteCapacityAutoScalingSettingsUpdateHasBeenSet = false;

    Aws::Vector<GlobalTableGlobalSecondaryIndexSettingsUpdate> m_globalTableGlobalSecondaryIndexSettingsUpdate;
    bool m_globalTableGlobalSecondaryIndexSettingsUpdateHasBeenSet = false;

    Aws::Vector<ReplicaSettingsUpdate> m_replicaSettingsUpdate;
    bool m_replicaSettingsUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
