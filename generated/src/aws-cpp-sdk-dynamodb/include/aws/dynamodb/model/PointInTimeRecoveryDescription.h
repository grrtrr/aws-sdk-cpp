﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/PointInTimeRecoveryStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>The description of the point in time settings applied to the
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/PointInTimeRecoveryDescription">AWS
   * API Reference</a></p>
   */
  class PointInTimeRecoveryDescription
  {
  public:
    AWS_DYNAMODB_API PointInTimeRecoveryDescription();
    AWS_DYNAMODB_API PointInTimeRecoveryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API PointInTimeRecoveryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current state of point in time recovery:</p> <ul> <li> <p>
     * <code>ENABLED</code> - Point in time recovery is enabled.</p> </li> <li> <p>
     * <code>DISABLED</code> - Point in time recovery is disabled.</p> </li> </ul>
     */
    inline const PointInTimeRecoveryStatus& GetPointInTimeRecoveryStatus() const{ return m_pointInTimeRecoveryStatus; }
    inline bool PointInTimeRecoveryStatusHasBeenSet() const { return m_pointInTimeRecoveryStatusHasBeenSet; }
    inline void SetPointInTimeRecoveryStatus(const PointInTimeRecoveryStatus& value) { m_pointInTimeRecoveryStatusHasBeenSet = true; m_pointInTimeRecoveryStatus = value; }
    inline void SetPointInTimeRecoveryStatus(PointInTimeRecoveryStatus&& value) { m_pointInTimeRecoveryStatusHasBeenSet = true; m_pointInTimeRecoveryStatus = std::move(value); }
    inline PointInTimeRecoveryDescription& WithPointInTimeRecoveryStatus(const PointInTimeRecoveryStatus& value) { SetPointInTimeRecoveryStatus(value); return *this;}
    inline PointInTimeRecoveryDescription& WithPointInTimeRecoveryStatus(PointInTimeRecoveryStatus&& value) { SetPointInTimeRecoveryStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of preceding days for which continuous backups are taken and
     * maintained. Your table data is only recoverable to any point-in-time from within
     * the configured recovery period. This parameter is optional. If no value is
     * provided, the value will default to 35.</p>
     */
    inline int GetRecoveryPeriodInDays() const{ return m_recoveryPeriodInDays; }
    inline bool RecoveryPeriodInDaysHasBeenSet() const { return m_recoveryPeriodInDaysHasBeenSet; }
    inline void SetRecoveryPeriodInDays(int value) { m_recoveryPeriodInDaysHasBeenSet = true; m_recoveryPeriodInDays = value; }
    inline PointInTimeRecoveryDescription& WithRecoveryPeriodInDays(int value) { SetRecoveryPeriodInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the earliest point in time you can restore your table to. You can
     * restore your table to any point in time during the last 35 days. </p>
     */
    inline const Aws::Utils::DateTime& GetEarliestRestorableDateTime() const{ return m_earliestRestorableDateTime; }
    inline bool EarliestRestorableDateTimeHasBeenSet() const { return m_earliestRestorableDateTimeHasBeenSet; }
    inline void SetEarliestRestorableDateTime(const Aws::Utils::DateTime& value) { m_earliestRestorableDateTimeHasBeenSet = true; m_earliestRestorableDateTime = value; }
    inline void SetEarliestRestorableDateTime(Aws::Utils::DateTime&& value) { m_earliestRestorableDateTimeHasBeenSet = true; m_earliestRestorableDateTime = std::move(value); }
    inline PointInTimeRecoveryDescription& WithEarliestRestorableDateTime(const Aws::Utils::DateTime& value) { SetEarliestRestorableDateTime(value); return *this;}
    inline PointInTimeRecoveryDescription& WithEarliestRestorableDateTime(Aws::Utils::DateTime&& value) { SetEarliestRestorableDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>LatestRestorableDateTime</code> is typically 5 minutes before the
     * current time. </p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableDateTime() const{ return m_latestRestorableDateTime; }
    inline bool LatestRestorableDateTimeHasBeenSet() const { return m_latestRestorableDateTimeHasBeenSet; }
    inline void SetLatestRestorableDateTime(const Aws::Utils::DateTime& value) { m_latestRestorableDateTimeHasBeenSet = true; m_latestRestorableDateTime = value; }
    inline void SetLatestRestorableDateTime(Aws::Utils::DateTime&& value) { m_latestRestorableDateTimeHasBeenSet = true; m_latestRestorableDateTime = std::move(value); }
    inline PointInTimeRecoveryDescription& WithLatestRestorableDateTime(const Aws::Utils::DateTime& value) { SetLatestRestorableDateTime(value); return *this;}
    inline PointInTimeRecoveryDescription& WithLatestRestorableDateTime(Aws::Utils::DateTime&& value) { SetLatestRestorableDateTime(std::move(value)); return *this;}
    ///@}
  private:

    PointInTimeRecoveryStatus m_pointInTimeRecoveryStatus;
    bool m_pointInTimeRecoveryStatusHasBeenSet = false;

    int m_recoveryPeriodInDays;
    bool m_recoveryPeriodInDaysHasBeenSet = false;

    Aws::Utils::DateTime m_earliestRestorableDateTime;
    bool m_earliestRestorableDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_latestRestorableDateTime;
    bool m_latestRestorableDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
