﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/DatabaseInsightsMode.h>
#include <aws/rds/model/CloudwatchLogsExportConfiguration.h>
#include <aws/rds/model/ReplicaMode.h>
#include <aws/rds/model/AutomationMode.h>
#include <aws/rds/model/ProcessorFeature.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBInstanceMessage">AWS
   * API Reference</a></p>
   */
  class ModifyDBInstanceRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyDBInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBInstance"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of DB instance to modify. This value is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing DB instance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new amount of storage in gibibytes (GiB) to allocate for the DB
     * instance.</p> <p>For RDS for Db2, MariaDB, RDS for MySQL, RDS for Oracle, and
     * RDS for PostgreSQL, the value supplied must be at least 10% greater than the
     * current value. Values that are not at least 10% greater than the existing value
     * are rounded up so that they are 10% greater than the current value.</p> <p>For
     * the valid values for allocated storage for each engine, see
     * <code>CreateDBInstance</code>.</p> <p>Constraints:</p> <ul> <li> <p>When you
     * increase the allocated storage for a DB instance that uses Provisioned IOPS
     * (<code>gp3</code>, <code>io1</code>, or <code>io2</code> storage type), you must
     * also specify the <code>Iops</code> parameter. You can use the current value for
     * <code>Iops</code>.</p> </li> </ul>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }
    inline ModifyDBInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new compute and memory capacity of the DB instance, for example
     * <code>db.m4.large</code>. Not all DB instance classes are available in all
     * Amazon Web Services Regions, or for all database engines. For the full list of
     * DB instance classes, and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide</i> or <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.DBInstanceClass.html">Aurora
     * DB instance classes</a> in the <i>Amazon Aurora User Guide</i>. For RDS Custom,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-reqs-limits.html#custom-reqs-limits.instances">DB
     * instance class support for RDS Custom for Oracle</a> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/custom-reqs-limits-MS.html#custom-reqs-limits.instancesMS">
     * DB instance class support for RDS Custom for SQL Server</a>.</p> <p>If you
     * modify the DB instance class, an outage occurs during the change. The change is
     * applied during the next maintenance window, unless you specify
     * <code>ApplyImmediately</code> in your request. </p> <p>Default: Uses existing
     * setting</p> <p>Constraints:</p> <ul> <li> <p>If you are modifying the DB
     * instance class and upgrading the engine version at the same time, the currently
     * running engine version must be supported on the specified DB instance class.
     * Otherwise, the operation returns an error. In this case, first run the operation
     * to upgrade the engine version, and then run it again to modify the DB instance
     * class.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}
    inline ModifyDBInstanceRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC. If your DB instance isn't in a VPC,
     * you can also use this parameter to move your DB instance into a VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html#USER_VPC.Non-VPC2VPC">Working
     * with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Changing the subnet group causes an outage during the change. The change is
     * applied during the next maintenance window, unless you enable
     * <code>ApplyImmediately</code>.</p> <p>This setting doesn't apply to RDS Custom
     * DB instances.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DB subnet group.</p> </li> </ul> <p>Example:
     * <code>mydbsubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }
    inline ModifyDBInstanceRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}
    inline ModifyDBInstanceRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting doesn't result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match existing
     * DB security groups.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }
    inline bool DBSecurityGroupsHasBeenSet() const { return m_dBSecurityGroupsHasBeenSet; }
    inline void SetDBSecurityGroups(const Aws::Vector<Aws::String>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }
    inline void SetDBSecurityGroups(Aws::Vector<Aws::String>&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::move(value); }
    inline ModifyDBInstanceRequest& WithDBSecurityGroups(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroups(value); return *this;}
    inline ModifyDBInstanceRequest& WithDBSecurityGroups(Aws::Vector<Aws::String>&& value) { SetDBSecurityGroups(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(const Aws::String& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(Aws::String&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(std::move(value)); return *this; }
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(const char* value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon EC2 VPC security groups to associate with this DB instance.
     * This change is asynchronously applied as soon as possible.</p> <p>This setting
     * doesn't apply to the following DB instances:</p> <ul> <li> <p>Amazon Aurora (The
     * associated list of EC2 VPC security groups is managed by the DB cluster. For
     * more information, see <code>ModifyDBCluster</code>.)</p> </li> <li> <p>RDS
     * Custom</p> </li> </ul> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing VPC security group IDs.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }
    inline ModifyDBInstanceRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}
    inline ModifyDBInstanceRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the DB instance. By default,
     * this parameter is disabled.</p> <p>If this parameter is disabled, changes to the
     * DB instance are applied during the next maintenance window. Some parameter
     * changes can cause an outage and are applied on the next call to
     * <a>RebootDBInstance</a>, or the next failure reboot. Review the table of
     * parameters in <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.DBInstance.Modifying.html">Modifying
     * a DB Instance</a> in the <i>Amazon RDS User Guide</i> to see the impact of
     * enabling or disabling <code>ApplyImmediately</code> for each modified parameter
     * and to determine when the changes are applied.</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline ModifyDBInstanceRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new password for the master user.</p> <p>Changing this parameter doesn't
     * result in an outage and the change is asynchronously applied as soon as
     * possible. Between the time of the request and the completion of the request, the
     * <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response.</p> 
     * <p>Amazon RDS API operations never return the password, so this operation
     * provides a way to regain access to a primary instance user if the password is
     * lost. This includes restoring privileges that might have been accidentally
     * revoked.</p>  <p>This setting doesn't apply to the following DB
     * instances:</p> <ul> <li> <p>Amazon Aurora (The password for the master user is
     * managed by the DB cluster. For more information, see
     * <code>ModifyDBCluster</code>.)</p> </li> <li> <p>RDS Custom</p> </li> </ul>
     * <p>Default: Uses existing setting</p> <p>Constraints:</p> <ul> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> <li>
     * <p>Can include any printable ASCII character except "/", """, or "@". For RDS
     * for Oracle, can't include the "&amp;" (ampersand) or the "'" (single quotes)
     * character.</p> </li> </ul> <p>Length Constraints:</p> <ul> <li> <p>RDS for Db2 -
     * Must contain from 8 to 255 characters.</p> </li> <li> <p>RDS for MariaDB - Must
     * contain from 8 to 41 characters.</p> </li> <li> <p>RDS for Microsoft SQL Server
     * - Must contain from 8 to 128 characters.</p> </li> <li> <p>RDS for MySQL - Must
     * contain from 8 to 41 characters.</p> </li> <li> <p>RDS for Oracle - Must contain
     * from 8 to 30 characters.</p> </li> <li> <p>RDS for PostgreSQL - Must contain
     * from 8 to 128 characters.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }
    inline ModifyDBInstanceRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}
    inline ModifyDBInstanceRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the DB parameter group to apply to the DB instance.</p>
     * <p>Changing this setting doesn't result in an outage. The parameter group name
     * itself is changed immediately, but the actual parameter changes are not applied
     * until you reboot the instance without failover. In this case, the DB instance
     * isn't rebooted automatically, and the parameter changes aren't applied during
     * the next maintenance window. However, if you modify dynamic parameters in the
     * newly associated DB parameter group, these changes are applied immediately
     * without a reboot.</p> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p> <p>Default: Uses existing setting</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be in the same DB parameter group family as the DB instance.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain automated backups. Setting this parameter to a
     * positive number enables backups. Setting this parameter to 0 disables automated
     * backups.</p>  <p>Enabling and disabling backups can result in a brief I/O
     * suspension that lasts from a few seconds to a few minutes, depending on the size
     * and class of your DB instance.</p>  <p>These changes are applied during
     * the next maintenance window unless the <code>ApplyImmediately</code> parameter
     * is enabled for this request. If you change the parameter from one non-zero value
     * to another non-zero value, the change is asynchronously applied as soon as
     * possible.</p> <p>This setting doesn't apply to Amazon Aurora DB instances. The
     * retention period for automated backups is managed by the DB cluster. For more
     * information, see <code>ModifyDBCluster</code>.</p> <p>Default: Uses existing
     * setting</p> <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35.</p>
     * </li> <li> <p>Can't be set to 0 if the DB instance is a source to read
     * replicas.</p> </li> <li> <p>Can't be set to 0 for an RDS Custom for Oracle DB
     * instance.</p> </li> </ul>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }
    inline ModifyDBInstanceRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, as determined by the <code>BackupRetentionPeriod</code>
     * parameter. Changing this parameter doesn't result in an outage and the change is
     * asynchronously applied as soon as possible. The default is a 30-minute window
     * selected at random from an 8-hour block of time for each Amazon Web Services
     * Region. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_WorkingWithAutomatedBackups.html#USER_WorkingWithAutomatedBackups.BackupWindow">Backup
     * window</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This setting doesn't
     * apply to Amazon Aurora DB instances. The daily time range for creating automated
     * backups is managed by the DB cluster. For more information, see
     * <code>ModifyDBCluster</code>.</p> <p>Constraints:</p> <ul> <li> <p>Must be in
     * the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weekly time range during which system maintenance can occur, which might
     * result in an outage. Changing this parameter doesn't result in an outage, except
     * in the following situation, and the change is asynchronously applied as soon as
     * possible. If there are pending actions that cause a reboot, and the maintenance
     * window is changed to include the current time, then changing this parameter
     * causes a reboot of the DB instance. If you change this window to the current
     * time, there must be at least 30 minutes between the current time and end of the
     * window to ensure pending changes are applied.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_UpgradeDBInstance.Maintenance.html#Concepts.DBMaintenance">Amazon
     * RDS Maintenance Window</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default:
     * Uses existing setting</p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>ddd:hh24:mi-ddd:hh24:mi</code>.</p> </li> <li> <p>The day values must be
     * <code>mon | tue | wed | thu | fri | sat | sun</code>. </p> </li> <li> <p>Must be
     * in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with
     * the preferred backup window.</p> </li> <li> <p>Must be at least 30 minutes.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is a Multi-AZ deployment. Changing this
     * parameter doesn't result in an outage. The change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is enabled
     * for this request.</p> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline ModifyDBInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is enabled
     * for this request.</p> <p>For major version upgrades, if a nondefault DB
     * parameter group is currently in use, a new DB parameter group in the DB
     * parameter group family for the new engine version must be specified. The new DB
     * parameter group can be the default for that DB parameter group family.</p> <p>If
     * you specify only a major version, Amazon RDS updates the DB instance to the
     * default minor version if the current minor version is lower. For information
     * about valid engine versions, see <code>CreateDBInstance</code>, or call
     * <code>DescribeDBEngineVersions</code>.</p> <p>If the instance that you're
     * modifying is acting as a read replica, the engine version that you specify must
     * be the same or higher than the version that the source DB instance or cluster is
     * running.</p> <p>In RDS Custom for Oracle, this parameter is supported for read
     * replicas only if they are in the <code>PATCH_DB_FAILURE</code> lifecycle.</p>
     * <p>Constraints:</p> <ul> <li> <p>If you are upgrading the engine version and
     * modifying the DB instance class at the same time, the currently running engine
     * version must be supported on the specified DB instance class. Otherwise, the
     * operation returns an error. In this case, first run the operation to upgrade the
     * engine version, and then run it again to modify the DB instance class.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline ModifyDBInstanceRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline ModifyDBInstanceRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether major version upgrades are allowed. Changing this parameter
     * doesn't result in an outage and the change is asynchronously applied as soon as
     * possible.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     * <p>Constraints:</p> <ul> <li> <p>Major version upgrades must be allowed when
     * specifying a value for the <code>EngineVersion</code> parameter that's a
     * different major version than the DB instance's current version.</p> </li> </ul>
     */
    inline bool GetAllowMajorVersionUpgrade() const{ return m_allowMajorVersionUpgrade; }
    inline bool AllowMajorVersionUpgradeHasBeenSet() const { return m_allowMajorVersionUpgradeHasBeenSet; }
    inline void SetAllowMajorVersionUpgrade(bool value) { m_allowMajorVersionUpgradeHasBeenSet = true; m_allowMajorVersionUpgrade = value; }
    inline ModifyDBInstanceRequest& WithAllowMajorVersionUpgrade(bool value) { SetAllowMajorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether minor version upgrades are applied automatically to the DB
     * instance during the maintenance window. An outage occurs when all the following
     * conditions are met:</p> <ul> <li> <p>The automatic upgrade is enabled for the
     * maintenance window.</p> </li> <li> <p>A newer minor version is available.</p>
     * </li> <li> <p>RDS has enabled automatic patching for the engine version.</p>
     * </li> </ul> <p>If any of the preceding conditions isn't met, Amazon RDS applies
     * the change as soon as possible and doesn't cause an outage.</p> <p>For an RDS
     * Custom DB instance, don't enable this setting. Otherwise, the operation returns
     * an error.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }
    inline ModifyDBInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model for the DB instance.</p> <p>This setting doesn't apply to
     * Amazon Aurora or RDS Custom DB instances.</p> <p>Valid Values:</p> <ul> <li>
     * <p>RDS for Db2 - <code>bring-your-own-license</code> </p> </li> <li> <p>RDS for
     * MariaDB - <code>general-public-license</code> </p> </li> <li> <p>RDS for
     * Microsoft SQL Server - <code>license-included</code> </p> </li> <li> <p>RDS for
     * MySQL - <code>general-public-license</code> </p> </li> <li> <p>RDS for Oracle -
     * <code>bring-your-own-license | license-included</code> </p> </li> <li> <p>RDS
     * for PostgreSQL - <code>postgresql-license</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline ModifyDBInstanceRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline ModifyDBInstanceRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new Provisioned IOPS (I/O operations per second) value for the RDS
     * instance.</p> <p>Changing this setting doesn't result in an outage and the
     * change is applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is enabled for this request. If you are
     * migrating from Provisioned IOPS to standard storage, set this value to 0. The DB
     * instance will require a reboot for the change in storage type to take
     * effect.</p> <p>If you choose to migrate your DB instance from using standard
     * storage to Provisioned IOPS (io1), or from Provisioned IOPS to standard storage,
     * the process can take time. The duration of the migration depends on several
     * factors such as database load, storage size, storage type (standard or
     * Provisioned IOPS), amount of IOPS provisioned (if any), and the number of prior
     * scale storage operations. Typical migration times are under 24 hours, but the
     * process can take up to several days in some cases. During the migration, the DB
     * instance is available for use, but might experience performance degradation.
     * While the migration takes place, nightly backups for the instance are suspended.
     * No other Amazon RDS operations can take place for the instance, including
     * modifying the instance, rebooting the instance, deleting the instance, creating
     * a read replica for the instance, and creating a DB snapshot of the instance.</p>
     * <p/> <p>Constraints:</p> <ul> <li> <p>For RDS for MariaDB, RDS for MySQL, RDS
     * for Oracle, and RDS for PostgreSQL - The value supplied must be at least 10%
     * greater than the current value. Values that are not at least 10% greater than
     * the existing value are rounded up so that they are 10% greater than the current
     * value.</p> </li> <li> <p>When you increase the Provisioned IOPS, you must also
     * specify the <code>AllocatedStorage</code> parameter. You can use the current
     * value for <code>AllocatedStorage</code>.</p> </li> </ul> <p>Default: Uses
     * existing setting</p>
     */
    inline int GetIops() const{ return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline ModifyDBInstanceRequest& WithIops(int value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option group to associate the DB instance with.</p> <p>Changing this
     * parameter doesn't result in an outage, with one exception. If the parameter
     * change results in an option group that enables OEM, it can cause a brief period,
     * lasting less than a second, during which new connections are rejected but
     * existing connections aren't interrupted.</p> <p>The change is applied during the
     * next maintenance window unless the <code>ApplyImmediately</code> parameter is
     * enabled for this request.</p> <p>Permanent options, such as the TDE option for
     * Oracle Advanced Security TDE, can't be removed from an option group, and that
     * option group can't be removed from a DB instance after it is associated with a
     * DB instance.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }
    inline ModifyDBInstanceRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}
    inline ModifyDBInstanceRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new identifier for the DB instance when renaming a DB instance. When you
     * change the DB instance identifier, an instance reboot occurs immediately if you
     * enable <code>ApplyImmediately</code>, or will occur during the next maintenance
     * window if you disable <code>ApplyImmediately</code>. This value is stored as a
     * lowercase string.</p> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * letters, numbers, or hyphens.</p> </li> <li> <p>The first character must be a
     * letter.</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens.</p> </li> </ul> <p>Example: <code>mydbinstance</code> </p>
     */
    inline const Aws::String& GetNewDBInstanceIdentifier() const{ return m_newDBInstanceIdentifier; }
    inline bool NewDBInstanceIdentifierHasBeenSet() const { return m_newDBInstanceIdentifierHasBeenSet; }
    inline void SetNewDBInstanceIdentifier(const Aws::String& value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier = value; }
    inline void SetNewDBInstanceIdentifier(Aws::String&& value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier = std::move(value); }
    inline void SetNewDBInstanceIdentifier(const char* value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier.assign(value); }
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(const Aws::String& value) { SetNewDBInstanceIdentifier(value); return *this;}
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(Aws::String&& value) { SetNewDBInstanceIdentifier(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(const char* value) { SetNewDBInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type to associate with the DB instance.</p> <p>If you specify
     * <code>io1</code>, <code>io2</code>, or <code>gp3</code> you must also include a
     * value for the <code>Iops</code> parameter.</p> <p>If you choose to migrate your
     * DB instance from using standard storage to gp2 (General Purpose SSD), gp3, or
     * Provisioned IOPS (io1), or from these storage types to standard storage, the
     * process can take time. The duration of the migration depends on several factors
     * such as database load, storage size, storage type (standard or Provisioned
     * IOPS), amount of IOPS provisioned (if any), and the number of prior scale
     * storage operations. Typical migration times are under 24 hours, but the process
     * can take up to several days in some cases. During the migration, the DB instance
     * is available for use, but might experience performance degradation. While the
     * migration takes place, nightly backups for the instance are suspended. No other
     * Amazon RDS operations can take place for the instance, including modifying the
     * instance, rebooting the instance, deleting the instance, creating a read replica
     * for the instance, and creating a DB snapshot of the instance.</p> <p>Valid
     * Values: <code>gp2 | gp3 | io1 | io2 | standard</code> </p> <p>Default:
     * <code>io1</code>, if the <code>Iops</code> parameter is specified. Otherwise,
     * <code>gp2</code>.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline ModifyDBInstanceRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline ModifyDBInstanceRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }
    inline ModifyDBInstanceRequest& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}
    inline ModifyDBInstanceRequest& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const{ return m_tdeCredentialPassword; }
    inline bool TdeCredentialPasswordHasBeenSet() const { return m_tdeCredentialPasswordHasBeenSet; }
    inline void SetTdeCredentialPassword(const Aws::String& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = value; }
    inline void SetTdeCredentialPassword(Aws::String&& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = std::move(value); }
    inline void SetTdeCredentialPassword(const char* value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword.assign(value); }
    inline ModifyDBInstanceRequest& WithTdeCredentialPassword(const Aws::String& value) { SetTdeCredentialPassword(value); return *this;}
    inline ModifyDBInstanceRequest& WithTdeCredentialPassword(Aws::String&& value) { SetTdeCredentialPassword(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithTdeCredentialPassword(const char* value) { SetTdeCredentialPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CA certificate identifier to use for the DB instance's server
     * certificate.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL.html">Using
     * SSL/TLS to encrypt a connection to a DB instance</a> in the <i>Amazon RDS User
     * Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL.html">
     * Using SSL/TLS to encrypt a connection to a DB cluster</a> in the <i>Amazon
     * Aurora User Guide</i>.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::move(value); }
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory directory ID to move the DB instance to. Specify
     * <code>none</code> to remove the instance from its current domain. You must
     * create the domain before this operation. Currently, you can create only Db2,
     * MySQL, Microsoft SQL Server, Oracle, and PostgreSQL DB instances in an Active
     * Directory Domain.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/kerberos-authentication.html">
     * Kerberos Authentication</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline ModifyDBInstanceRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline ModifyDBInstanceRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name (FQDN) of an Active Directory domain.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be longer than 64 characters.</p> </li>
     * </ul> <p>Example: <code>mymanagedADtest.mymanagedAD.mydomain</code> </p>
     */
    inline const Aws::String& GetDomainFqdn() const{ return m_domainFqdn; }
    inline bool DomainFqdnHasBeenSet() const { return m_domainFqdnHasBeenSet; }
    inline void SetDomainFqdn(const Aws::String& value) { m_domainFqdnHasBeenSet = true; m_domainFqdn = value; }
    inline void SetDomainFqdn(Aws::String&& value) { m_domainFqdnHasBeenSet = true; m_domainFqdn = std::move(value); }
    inline void SetDomainFqdn(const char* value) { m_domainFqdnHasBeenSet = true; m_domainFqdn.assign(value); }
    inline ModifyDBInstanceRequest& WithDomainFqdn(const Aws::String& value) { SetDomainFqdn(value); return *this;}
    inline ModifyDBInstanceRequest& WithDomainFqdn(Aws::String&& value) { SetDomainFqdn(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDomainFqdn(const char* value) { SetDomainFqdn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Active Directory organizational unit for your DB instance to join.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the distinguished name format.</p>
     * </li> <li> <p>Can't be longer than 64 characters.</p> </li> </ul> <p>Example:
     * <code>OU=mymanagedADtestOU,DC=mymanagedADtest,DC=mymanagedAD,DC=mydomain</code>
     * </p>
     */
    inline const Aws::String& GetDomainOu() const{ return m_domainOu; }
    inline bool DomainOuHasBeenSet() const { return m_domainOuHasBeenSet; }
    inline void SetDomainOu(const Aws::String& value) { m_domainOuHasBeenSet = true; m_domainOu = value; }
    inline void SetDomainOu(Aws::String&& value) { m_domainOuHasBeenSet = true; m_domainOu = std::move(value); }
    inline void SetDomainOu(const char* value) { m_domainOuHasBeenSet = true; m_domainOu.assign(value); }
    inline ModifyDBInstanceRequest& WithDomainOu(const Aws::String& value) { SetDomainOu(value); return *this;}
    inline ModifyDBInstanceRequest& WithDomainOu(Aws::String&& value) { SetDomainOu(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDomainOu(const char* value) { SetDomainOu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Secrets Manager secret with the credentials for the user
     * joining the domain.</p> <p>Example:
     * <code>arn:aws:secretsmanager:region:account-number:secret:myselfmanagedADtestsecret-123456</code>
     * </p>
     */
    inline const Aws::String& GetDomainAuthSecretArn() const{ return m_domainAuthSecretArn; }
    inline bool DomainAuthSecretArnHasBeenSet() const { return m_domainAuthSecretArnHasBeenSet; }
    inline void SetDomainAuthSecretArn(const Aws::String& value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn = value; }
    inline void SetDomainAuthSecretArn(Aws::String&& value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn = std::move(value); }
    inline void SetDomainAuthSecretArn(const char* value) { m_domainAuthSecretArnHasBeenSet = true; m_domainAuthSecretArn.assign(value); }
    inline ModifyDBInstanceRequest& WithDomainAuthSecretArn(const Aws::String& value) { SetDomainAuthSecretArn(value); return *this;}
    inline ModifyDBInstanceRequest& WithDomainAuthSecretArn(Aws::String&& value) { SetDomainAuthSecretArn(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDomainAuthSecretArn(const char* value) { SetDomainAuthSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 DNS IP addresses of your primary and secondary Active Directory
     * domain controllers.</p> <p>Constraints:</p> <ul> <li> <p>Two IP addresses must
     * be provided. If there isn't a secondary domain controller, use the IP address of
     * the primary domain controller for both entries in the list.</p> </li> </ul>
     * <p>Example: <code>123.124.125.126,234.235.236.237</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainDnsIps() const{ return m_domainDnsIps; }
    inline bool DomainDnsIpsHasBeenSet() const { return m_domainDnsIpsHasBeenSet; }
    inline void SetDomainDnsIps(const Aws::Vector<Aws::String>& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps = value; }
    inline void SetDomainDnsIps(Aws::Vector<Aws::String>&& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps = std::move(value); }
    inline ModifyDBInstanceRequest& WithDomainDnsIps(const Aws::Vector<Aws::String>& value) { SetDomainDnsIps(value); return *this;}
    inline ModifyDBInstanceRequest& WithDomainDnsIps(Aws::Vector<Aws::String>&& value) { SetDomainDnsIps(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& AddDomainDnsIps(const Aws::String& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.push_back(value); return *this; }
    inline ModifyDBInstanceRequest& AddDomainDnsIps(Aws::String&& value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.push_back(std::move(value)); return *this; }
    inline ModifyDBInstanceRequest& AddDomainDnsIps(const char* value) { m_domainDnsIpsHasBeenSet = true; m_domainDnsIps.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy all tags from the DB instance to snapshots of the
     * DB instance. By default, tags aren't copied.</p> <p>This setting doesn't apply
     * to Amazon Aurora DB instances. Copying tags to snapshots is managed by the DB
     * cluster. Setting this value for an Aurora DB instance has no effect on the DB
     * cluster setting. For more information, see <code>ModifyDBCluster</code>.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }
    inline ModifyDBInstanceRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collection of Enhanced Monitoring
     * metrics, specify <code>0</code>.</p> <p>If <code>MonitoringRoleArn</code> is
     * specified, set <code>MonitoringInterval</code> to a value other than
     * <code>0</code>.</p> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p> <p>Valid Values: <code>0 | 1 | 5 | 10 | 15 | 30 | 60</code> </p>
     * <p>Default: <code>0</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }
    inline ModifyDBInstanceRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number on which the database accepts connections.</p> <p>The value
     * of the <code>DBPortNumber</code> parameter must not match any of the port values
     * specified for options in the option group for the DB instance.</p> <p>If you
     * change the <code>DBPortNumber</code> value, your database restarts regardless of
     * the value of the <code>ApplyImmediately</code> parameter.</p> <p>This setting
     * doesn't apply to RDS Custom DB instances.</p> <p>Valid Values:
     * <code>1150-65535</code> </p> <p>Default:</p> <ul> <li> <p>Amazon Aurora -
     * <code>3306</code> </p> </li> <li> <p>RDS for Db2 - <code>50000</code> </p> </li>
     * <li> <p>RDS for MariaDB - <code>3306</code> </p> </li> <li> <p>RDS for Microsoft
     * SQL Server - <code>1433</code> </p> </li> <li> <p>RDS for MySQL -
     * <code>3306</code> </p> </li> <li> <p>RDS for Oracle - <code>1521</code> </p>
     * </li> <li> <p>RDS for PostgreSQL - <code>5432</code> </p> </li> </ul>
     * <p>Constraints:</p> <ul> <li> <p>For RDS for Microsoft SQL Server, the value
     * can't be <code>1234</code>, <code>1434</code>, <code>3260</code>,
     * <code>3343</code>, <code>3389</code>, <code>47001</code>, or
     * <code>49152-49156</code>.</p> </li> </ul>
     */
    inline int GetDBPortNumber() const{ return m_dBPortNumber; }
    inline bool DBPortNumberHasBeenSet() const { return m_dBPortNumberHasBeenSet; }
    inline void SetDBPortNumber(int value) { m_dBPortNumberHasBeenSet = true; m_dBPortNumber = value; }
    inline ModifyDBInstanceRequest& WithDBPortNumber(int value) { SetDBPortNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is publicly accessible.</p> <p>When the DB
     * instance is publicly accessible and you connect from outside of the DB
     * instance's virtual private cloud (VPC), its Domain Name System (DNS) endpoint
     * resolves to the public IP address. When you connect from within the same VPC as
     * the DB instance, the endpoint resolves to the private IP address. Access to the
     * DB instance is ultimately controlled by the security group it uses. That public
     * access isn't permitted if the security group assigned to the DB instance doesn't
     * permit it.</p> <p>When the DB instance isn't publicly accessible, it is an
     * internal DB instance with a DNS name that resolves to a private IP address.</p>
     * <p> <code>PubliclyAccessible</code> only applies to DB instances in a VPC. The
     * DB instance must be part of a public subnet and <code>PubliclyAccessible</code>
     * must be enabled for it to be publicly accessible.</p> <p>Changes to the
     * <code>PubliclyAccessible</code> parameter are applied immediately regardless of
     * the value of the <code>ApplyImmediately</code> parameter.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }
    inline ModifyDBInstanceRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than <code>0</code>, supply a <code>MonitoringRoleArn</code> value.</p>
     * <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }
    inline ModifyDBInstanceRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}
    inline ModifyDBInstanceRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }
    inline ModifyDBInstanceRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}
    inline ModifyDBInstanceRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to remove the DB instance from the Active Directory
     * domain.</p>
     */
    inline bool GetDisableDomain() const{ return m_disableDomain; }
    inline bool DisableDomainHasBeenSet() const { return m_disableDomainHasBeenSet; }
    inline void SetDisableDomain(bool value) { m_disableDomainHasBeenSet = true; m_disableDomain = value; }
    inline ModifyDBInstanceRequest& WithDisableDomain(bool value) { SetDisableDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order of priority in which an Aurora Replica is promoted to the primary
     * instance after a failure of the existing primary instance. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.AuroraHighAvailability.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     * <p>Default: <code>1</code> </p> <p>Valid Values: <code>0 - 15</code> </p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }
    inline ModifyDBInstanceRequest& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable mapping of Amazon Web Services Identity and
     * Access Management (IAM) accounts to database accounts. By default, mapping isn't
     * enabled.</p> <p>This setting doesn't apply to Amazon Aurora. Mapping Amazon Web
     * Services IAM accounts to database accounts is managed by the DB cluster.</p>
     * <p>For more information about IAM database authentication, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication for MySQL and PostgreSQL</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }
    inline ModifyDBInstanceRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the mode of Database Insights to enable for the DB instance.</p>
     *  <p>Aurora DB instances inherit this value from the DB cluster, so you
     * can't change this value.</p> 
     */
    inline const DatabaseInsightsMode& GetDatabaseInsightsMode() const{ return m_databaseInsightsMode; }
    inline bool DatabaseInsightsModeHasBeenSet() const { return m_databaseInsightsModeHasBeenSet; }
    inline void SetDatabaseInsightsMode(const DatabaseInsightsMode& value) { m_databaseInsightsModeHasBeenSet = true; m_databaseInsightsMode = value; }
    inline void SetDatabaseInsightsMode(DatabaseInsightsMode&& value) { m_databaseInsightsModeHasBeenSet = true; m_databaseInsightsMode = std::move(value); }
    inline ModifyDBInstanceRequest& WithDatabaseInsightsMode(const DatabaseInsightsMode& value) { SetDatabaseInsightsMode(value); return *this;}
    inline ModifyDBInstanceRequest& WithDatabaseInsightsMode(DatabaseInsightsMode&& value) { SetDatabaseInsightsMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable Performance Insights for the DB instance.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Using
     * Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p> <p>This
     * setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }
    inline ModifyDBInstanceRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>This setting doesn't apply to RDS Custom
     * DB instances.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }
    inline ModifyDBInstanceRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    inline ModifyDBInstanceRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain Performance Insights data.</p> <p>This setting
     * doesn't apply to RDS Custom DB instances.</p> <p>Valid Values:</p> <ul> <li> <p>
     * <code>7</code> </p> </li> <li> <p> <i>month</i> * 31, where <i>month</i> is a
     * number of months from 1-23. Examples: <code>93</code> (3 months * 31),
     * <code>341</code> (11 months * 31), <code>589</code> (19 months * 31)</p> </li>
     * <li> <p> <code>731</code> </p> </li> </ul> <p>Default: <code>7</code> days</p>
     * <p>If you specify a retention period that isn't valid, such as <code>94</code>,
     * Amazon RDS returns an error.</p>
     */
    inline int GetPerformanceInsightsRetentionPeriod() const{ return m_performanceInsightsRetentionPeriod; }
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }
    inline ModifyDBInstanceRequest& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log types to be enabled for export to CloudWatch Logs for a specific DB
     * instance.</p> <p>A change to the <code>CloudwatchLogsExportConfiguration</code>
     * parameter is always applied to the DB instance immediately. Therefore, the
     * <code>ApplyImmediately</code> parameter has no effect.</p> <p>This setting
     * doesn't apply to RDS Custom DB instances.</p> <p>The following values are valid
     * for each DB engine:</p> <ul> <li> <p>Aurora MySQL - <code>audit | error |
     * general | slowquery | iam-db-auth-error</code> </p> </li> <li> <p>Aurora
     * PostgreSQL - <code>postgresql | iam-db-auth-error</code> </p> </li> <li> <p>RDS
     * for MySQL - <code>error | general | slowquery | iam-db-auth-error</code> </p>
     * </li> <li> <p>RDS for PostgreSQL - <code>postgresql | upgrade |
     * iam-db-auth-error</code> </p> </li> </ul> <p>For more information about
     * exporting CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">
     * Publishing Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline const CloudwatchLogsExportConfiguration& GetCloudwatchLogsExportConfiguration() const{ return m_cloudwatchLogsExportConfiguration; }
    inline bool CloudwatchLogsExportConfigurationHasBeenSet() const { return m_cloudwatchLogsExportConfigurationHasBeenSet; }
    inline void SetCloudwatchLogsExportConfiguration(const CloudwatchLogsExportConfiguration& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = value; }
    inline void SetCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfiguration&& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = std::move(value); }
    inline ModifyDBInstanceRequest& WithCloudwatchLogsExportConfiguration(const CloudwatchLogsExportConfiguration& value) { SetCloudwatchLogsExportConfiguration(value); return *this;}
    inline ModifyDBInstanceRequest& WithCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfiguration&& value) { SetCloudwatchLogsExportConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p> <p>This setting doesn't apply to RDS
     * Custom DB instances.</p>
     */
    inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }
    inline void SetProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }
    inline void SetProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }
    inline ModifyDBInstanceRequest& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}
    inline ModifyDBInstanceRequest& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }
    inline ModifyDBInstanceRequest& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance class of the DB instance uses its default
     * processor features.</p> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p>
     */
    inline bool GetUseDefaultProcessorFeatures() const{ return m_useDefaultProcessorFeatures; }
    inline bool UseDefaultProcessorFeaturesHasBeenSet() const { return m_useDefaultProcessorFeaturesHasBeenSet; }
    inline void SetUseDefaultProcessorFeatures(bool value) { m_useDefaultProcessorFeaturesHasBeenSet = true; m_useDefaultProcessorFeatures = value; }
    inline ModifyDBInstanceRequest& WithUseDefaultProcessorFeatures(bool value) { SetUseDefaultProcessorFeatures(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance has deletion protection enabled. The
     * database can't be deleted when deletion protection is enabled. By default,
     * deletion protection isn't enabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>.</p> <p>This setting doesn't apply to Amazon Aurora
     * DB instances. You can enable or disable deletion protection for the DB cluster.
     * For more information, see <code>ModifyDBCluster</code>. DB instances in a DB
     * cluster can be deleted even when deletion protection is enabled for the DB
     * cluster.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline ModifyDBInstanceRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper limit in gibibytes (GiB) to which Amazon RDS can automatically
     * scale the storage of the DB instance.</p> <p>For more information about this
     * setting, including limitations that apply to it, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PIOPS.StorageTypes.html#USER_PIOPS.Autoscaling">
     * Managing capacity automatically with Amazon RDS storage autoscaling</a> in the
     * <i>Amazon RDS User Guide</i>.</p> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p>
     */
    inline int GetMaxAllocatedStorage() const{ return m_maxAllocatedStorage; }
    inline bool MaxAllocatedStorageHasBeenSet() const { return m_maxAllocatedStorageHasBeenSet; }
    inline void SetMaxAllocatedStorage(int value) { m_maxAllocatedStorageHasBeenSet = true; m_maxAllocatedStorage = value; }
    inline ModifyDBInstanceRequest& WithMaxAllocatedStorage(int value) { SetMaxAllocatedStorage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the DB instance is restarted when you rotate your SSL/TLS
     * certificate.</p> <p>By default, the DB instance is restarted when you rotate
     * your SSL/TLS certificate. The certificate is not updated until the DB instance
     * is restarted.</p>  <p>Set this parameter only if you are <i>not</i>
     * using SSL/TLS to connect to the DB instance.</p>  <p>If you are
     * using SSL/TLS to connect to the DB instance, follow the appropriate instructions
     * for your DB engine to rotate your SSL/TLS certificate:</p> <ul> <li> <p>For more
     * information about rotating your SSL/TLS certificate for RDS DB engines, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/UsingWithRDS.SSL-certificate-rotation.html">
     * Rotating Your SSL/TLS Certificate.</a> in the <i>Amazon RDS User Guide.</i> </p>
     * </li> <li> <p>For more information about rotating your SSL/TLS certificate for
     * Aurora DB engines, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.SSL-certificate-rotation.html">
     * Rotating Your SSL/TLS Certificate</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> </li> </ul> <p>This setting doesn't apply to RDS Custom DB
     * instances.</p>
     */
    inline bool GetCertificateRotationRestart() const{ return m_certificateRotationRestart; }
    inline bool CertificateRotationRestartHasBeenSet() const { return m_certificateRotationRestartHasBeenSet; }
    inline void SetCertificateRotationRestart(bool value) { m_certificateRotationRestartHasBeenSet = true; m_certificateRotationRestart = value; }
    inline ModifyDBInstanceRequest& WithCertificateRotationRestart(bool value) { SetCertificateRotationRestart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that sets the open mode of a replica database to either mounted or
     * read-only.</p>  <p>Currently, this parameter is only supported for Oracle
     * DB instances.</p>  <p>Mounted DB replicas are included in Oracle
     * Enterprise Edition. The main use case for mounted replicas is cross-Region
     * disaster recovery. The primary database doesn't use Active Data Guard to
     * transmit information to the mounted replica. Because it doesn't accept user
     * connections, a mounted replica can't serve a read-only workload. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/oracle-read-replicas.html">Working
     * with Oracle Read Replicas for Amazon RDS</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const ReplicaMode& GetReplicaMode() const{ return m_replicaMode; }
    inline bool ReplicaModeHasBeenSet() const { return m_replicaModeHasBeenSet; }
    inline void SetReplicaMode(const ReplicaMode& value) { m_replicaModeHasBeenSet = true; m_replicaMode = value; }
    inline void SetReplicaMode(ReplicaMode&& value) { m_replicaModeHasBeenSet = true; m_replicaMode = std::move(value); }
    inline ModifyDBInstanceRequest& WithReplicaMode(const ReplicaMode& value) { SetReplicaMode(value); return *this;}
    inline ModifyDBInstanceRequest& WithReplicaMode(ReplicaMode&& value) { SetReplicaMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable a customer-owned IP address (CoIP) for an RDS on
     * Outposts DB instance.</p> <p>A <i>CoIP</i> provides local or external
     * connectivity to resources in your Outpost subnets through your on-premises
     * network. For some use cases, a CoIP can provide lower latency for connections to
     * the DB instance from outside of its virtual private cloud (VPC) on your local
     * network.</p> <p>For more information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Working
     * with Amazon RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about CoIPs, see <a
     * href="https://docs.aws.amazon.com/outposts/latest/userguide/routing.html#ip-addressing">Customer-owned
     * IP addresses</a> in the <i>Amazon Web Services Outposts User Guide</i>.</p>
     */
    inline bool GetEnableCustomerOwnedIp() const{ return m_enableCustomerOwnedIp; }
    inline bool EnableCustomerOwnedIpHasBeenSet() const { return m_enableCustomerOwnedIpHasBeenSet; }
    inline void SetEnableCustomerOwnedIp(bool value) { m_enableCustomerOwnedIpHasBeenSet = true; m_enableCustomerOwnedIp = value; }
    inline ModifyDBInstanceRequest& WithEnableCustomerOwnedIp(bool value) { SetEnableCustomerOwnedIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recovery point in Amazon Web Services
     * Backup.</p> <p>This setting doesn't apply to RDS Custom DB instances.</p>
     */
    inline const Aws::String& GetAwsBackupRecoveryPointArn() const{ return m_awsBackupRecoveryPointArn; }
    inline bool AwsBackupRecoveryPointArnHasBeenSet() const { return m_awsBackupRecoveryPointArnHasBeenSet; }
    inline void SetAwsBackupRecoveryPointArn(const Aws::String& value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn = value; }
    inline void SetAwsBackupRecoveryPointArn(Aws::String&& value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn = std::move(value); }
    inline void SetAwsBackupRecoveryPointArn(const char* value) { m_awsBackupRecoveryPointArnHasBeenSet = true; m_awsBackupRecoveryPointArn.assign(value); }
    inline ModifyDBInstanceRequest& WithAwsBackupRecoveryPointArn(const Aws::String& value) { SetAwsBackupRecoveryPointArn(value); return *this;}
    inline ModifyDBInstanceRequest& WithAwsBackupRecoveryPointArn(Aws::String&& value) { SetAwsBackupRecoveryPointArn(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithAwsBackupRecoveryPointArn(const char* value) { SetAwsBackupRecoveryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The automation mode of the RDS Custom DB instance. If <code>full</code>, the
     * DB instance automates monitoring and instance recovery. If <code>all
     * paused</code>, the instance pauses automation for the duration set by
     * <code>ResumeFullAutomationModeMinutes</code>.</p>
     */
    inline const AutomationMode& GetAutomationMode() const{ return m_automationMode; }
    inline bool AutomationModeHasBeenSet() const { return m_automationModeHasBeenSet; }
    inline void SetAutomationMode(const AutomationMode& value) { m_automationModeHasBeenSet = true; m_automationMode = value; }
    inline void SetAutomationMode(AutomationMode&& value) { m_automationModeHasBeenSet = true; m_automationMode = std::move(value); }
    inline ModifyDBInstanceRequest& WithAutomationMode(const AutomationMode& value) { SetAutomationMode(value); return *this;}
    inline ModifyDBInstanceRequest& WithAutomationMode(AutomationMode&& value) { SetAutomationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes to pause the automation. When the time period ends, RDS
     * Custom resumes full automation.</p> <p>Default: <code>60</code> </p>
     * <p>Constraints:</p> <ul> <li> <p>Must be at least 60.</p> </li> <li> <p>Must be
     * no more than 1,440.</p> </li> </ul>
     */
    inline int GetResumeFullAutomationModeMinutes() const{ return m_resumeFullAutomationModeMinutes; }
    inline bool ResumeFullAutomationModeMinutesHasBeenSet() const { return m_resumeFullAutomationModeMinutesHasBeenSet; }
    inline void SetResumeFullAutomationModeMinutes(int value) { m_resumeFullAutomationModeMinutesHasBeenSet = true; m_resumeFullAutomationModeMinutes = value; }
    inline ModifyDBInstanceRequest& WithResumeFullAutomationModeMinutes(int value) { SetResumeFullAutomationModeMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network type of the DB instance.</p> <p>The network type is determined by
     * the <code>DBSubnetGroup</code> specified for the DB instance. A
     * <code>DBSubnetGroup</code> can support only the IPv4 protocol or the IPv4 and
     * the IPv6 protocols (<code>DUAL</code>).</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p> <p>Valid Values: <code>IPV4 | DUAL</code> </p>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }
    inline ModifyDBInstanceRequest& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}
    inline ModifyDBInstanceRequest& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage throughput value for the DB instance.</p> <p>This setting applies
     * only to the <code>gp3</code> storage type.</p> <p>This setting doesn't apply to
     * Amazon Aurora or RDS Custom DB instances.</p>
     */
    inline int GetStorageThroughput() const{ return m_storageThroughput; }
    inline bool StorageThroughputHasBeenSet() const { return m_storageThroughputHasBeenSet; }
    inline void SetStorageThroughput(int value) { m_storageThroughputHasBeenSet = true; m_storageThroughput = value; }
    inline ModifyDBInstanceRequest& WithStorageThroughput(int value) { SetStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to manage the master user password with Amazon Web Services
     * Secrets Manager.</p> <p>If the DB instance doesn't manage the master user
     * password with Amazon Web Services Secrets Manager, you can turn on this
     * management. In this case, you can't specify <code>MasterUserPassword</code>.</p>
     * <p>If the DB instance already manages the master user password with Amazon Web
     * Services Secrets Manager, and you specify that the master user password is not
     * managed with Amazon Web Services Secrets Manager, then you must specify
     * <code>MasterUserPassword</code>. In this case, Amazon RDS deletes the secret and
     * uses the new password for the master user specified by
     * <code>MasterUserPassword</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master
     * user password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul>
     */
    inline bool GetManageMasterUserPassword() const{ return m_manageMasterUserPassword; }
    inline bool ManageMasterUserPasswordHasBeenSet() const { return m_manageMasterUserPasswordHasBeenSet; }
    inline void SetManageMasterUserPassword(bool value) { m_manageMasterUserPasswordHasBeenSet = true; m_manageMasterUserPassword = value; }
    inline ModifyDBInstanceRequest& WithManageMasterUserPassword(bool value) { SetManageMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to rotate the secret managed by Amazon Web Services Secrets
     * Manager for the master user password.</p> <p>This setting is valid only if the
     * master user password is managed by RDS in Amazon Web Services Secrets Manager
     * for the DB cluster. The secret value contains the updated password.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>You must apply the change
     * immediately when rotating the master user password.</p> </li> </ul>
     */
    inline bool GetRotateMasterUserPassword() const{ return m_rotateMasterUserPassword; }
    inline bool RotateMasterUserPasswordHasBeenSet() const { return m_rotateMasterUserPasswordHasBeenSet; }
    inline void SetRotateMasterUserPassword(bool value) { m_rotateMasterUserPasswordHasBeenSet = true; m_rotateMasterUserPassword = value; }
    inline ModifyDBInstanceRequest& WithRotateMasterUserPassword(bool value) { SetRotateMasterUserPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if both of the following conditions are met:</p>
     * <ul> <li> <p>The DB instance doesn't manage the master user password in Amazon
     * Web Services Secrets Manager.</p> <p>If the DB instance already manages the
     * master user password in Amazon Web Services Secrets Manager, you can't change
     * the KMS key used to encrypt the secret.</p> </li> <li> <p>You are turning on
     * <code>ManageMasterUserPassword</code> to manage the master user password in
     * Amazon Web Services Secrets Manager.</p> <p>If you are turning on
     * <code>ManageMasterUserPassword</code> and don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * </li> </ul> <p>The Amazon Web Services KMS key identifier is the key ARN, key
     * ID, alias ARN, or alias name for the KMS key. To use a KMS key in a different
     * Amazon Web Services account, specify the key ARN or alias ARN.</p> <p>There is a
     * default KMS key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default KMS key for each Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetMasterUserSecretKmsKeyId() const{ return m_masterUserSecretKmsKeyId; }
    inline bool MasterUserSecretKmsKeyIdHasBeenSet() const { return m_masterUserSecretKmsKeyIdHasBeenSet; }
    inline void SetMasterUserSecretKmsKeyId(const Aws::String& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = value; }
    inline void SetMasterUserSecretKmsKeyId(Aws::String&& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = std::move(value); }
    inline void SetMasterUserSecretKmsKeyId(const char* value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId.assign(value); }
    inline ModifyDBInstanceRequest& WithMasterUserSecretKmsKeyId(const Aws::String& value) { SetMasterUserSecretKmsKeyId(value); return *this;}
    inline ModifyDBInstanceRequest& WithMasterUserSecretKmsKeyId(Aws::String&& value) { SetMasterUserSecretKmsKeyId(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithMasterUserSecretKmsKeyId(const char* value) { SetMasterUserSecretKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target Oracle DB engine when you convert a non-CDB to a CDB. This
     * intermediate step is necessary to upgrade an Oracle Database 19c non-CDB to an
     * Oracle Database 21c CDB.</p> <p>Note the following requirements:</p> <ul> <li>
     * <p>Make sure that you specify <code>oracle-ee-cdb</code> or
     * <code>oracle-se2-cdb</code>.</p> </li> <li> <p>Make sure that your DB engine
     * runs Oracle Database 19c with an April 2021 or later RU.</p> </li> </ul> <p>Note
     * the following limitations:</p> <ul> <li> <p>You can't convert a CDB to a
     * non-CDB.</p> </li> <li> <p>You can't convert a replica database.</p> </li> <li>
     * <p>You can't convert a non-CDB to a CDB and upgrade the engine version in the
     * same command.</p> </li> <li> <p>You can't convert the existing custom parameter
     * or option group when it has options or parameters that are permanent or
     * persistent. In this situation, the DB instance reverts to the default option and
     * parameter group. To avoid reverting to the default, specify a new parameter
     * group with <code>--db-parameter-group-name</code> and a new option group with
     * <code>--option-group-name</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline ModifyDBInstanceRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline ModifyDBInstanceRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline ModifyDBInstanceRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the DB instance has a dedicated log volume (DLV)
     * enabled.</p>
     */
    inline bool GetDedicatedLogVolume() const{ return m_dedicatedLogVolume; }
    inline bool DedicatedLogVolumeHasBeenSet() const { return m_dedicatedLogVolumeHasBeenSet; }
    inline void SetDedicatedLogVolume(bool value) { m_dedicatedLogVolumeHasBeenSet = true; m_dedicatedLogVolume = value; }
    inline ModifyDBInstanceRequest& WithDedicatedLogVolume(bool value) { SetDedicatedLogVolume(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the to convert your DB instance from the single-tenant
     * conﬁguration to the multi-tenant conﬁguration. This parameter is supported only
     * for RDS for Oracle CDB instances.</p> <p>During the conversion, RDS creates an
     * initial tenant database and associates the DB name, master user name, character
     * set, and national character set metadata with this database. The tags associated
     * with the instance also propagate to the initial tenant database. You can add
     * more tenant databases to your DB instance by using the
     * <code>CreateTenantDatabase</code> operation.</p>  <p>The conversion
     * to the multi-tenant configuration is permanent and irreversible, so you can't
     * later convert back to the single-tenant configuration. When you specify this
     * parameter, you must also specify <code>ApplyImmediately</code>.</p> 
     */
    inline bool GetMultiTenant() const{ return m_multiTenant; }
    inline bool MultiTenantHasBeenSet() const { return m_multiTenantHasBeenSet; }
    inline void SetMultiTenant(bool value) { m_multiTenantHasBeenSet = true; m_multiTenant = value; }
    inline ModifyDBInstanceRequest& WithMultiTenant(bool value) { SetMultiTenant(value); return *this;}
    ///@}
  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_allowMajorVersionUpgrade;
    bool m_allowMajorVersionUpgradeHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_newDBInstanceIdentifier;
    bool m_newDBInstanceIdentifierHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet = false;

    Aws::String m_tdeCredentialPassword;
    bool m_tdeCredentialPasswordHasBeenSet = false;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainFqdn;
    bool m_domainFqdnHasBeenSet = false;

    Aws::String m_domainOu;
    bool m_domainOuHasBeenSet = false;

    Aws::String m_domainAuthSecretArn;
    bool m_domainAuthSecretArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainDnsIps;
    bool m_domainDnsIpsHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet = false;

    int m_dBPortNumber;
    bool m_dBPortNumberHasBeenSet = false;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    bool m_disableDomain;
    bool m_disableDomainHasBeenSet = false;

    int m_promotionTier;
    bool m_promotionTierHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    DatabaseInsightsMode m_databaseInsightsMode;
    bool m_databaseInsightsModeHasBeenSet = false;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod;
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    CloudwatchLogsExportConfiguration m_cloudwatchLogsExportConfiguration;
    bool m_cloudwatchLogsExportConfigurationHasBeenSet = false;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet = false;

    bool m_useDefaultProcessorFeatures;
    bool m_useDefaultProcessorFeaturesHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    int m_maxAllocatedStorage;
    bool m_maxAllocatedStorageHasBeenSet = false;

    bool m_certificateRotationRestart;
    bool m_certificateRotationRestartHasBeenSet = false;

    ReplicaMode m_replicaMode;
    bool m_replicaModeHasBeenSet = false;

    bool m_enableCustomerOwnedIp;
    bool m_enableCustomerOwnedIpHasBeenSet = false;

    Aws::String m_awsBackupRecoveryPointArn;
    bool m_awsBackupRecoveryPointArnHasBeenSet = false;

    AutomationMode m_automationMode;
    bool m_automationModeHasBeenSet = false;

    int m_resumeFullAutomationModeMinutes;
    bool m_resumeFullAutomationModeMinutesHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    int m_storageThroughput;
    bool m_storageThroughputHasBeenSet = false;

    bool m_manageMasterUserPassword;
    bool m_manageMasterUserPasswordHasBeenSet = false;

    bool m_rotateMasterUserPassword;
    bool m_rotateMasterUserPasswordHasBeenSet = false;

    Aws::String m_masterUserSecretKmsKeyId;
    bool m_masterUserSecretKmsKeyIdHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    bool m_dedicatedLogVolume;
    bool m_dedicatedLogVolumeHasBeenSet = false;

    bool m_multiTenant;
    bool m_multiTenantHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
