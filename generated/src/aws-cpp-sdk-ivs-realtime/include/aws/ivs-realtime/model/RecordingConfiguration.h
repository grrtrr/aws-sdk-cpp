﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/CompositionRecordingHlsConfiguration.h>
#include <aws/ivs-realtime/model/RecordingConfigurationFormat.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>An object representing a configuration to record a stage
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/RecordingConfiguration">AWS
   * API Reference</a></p>
   */
  class RecordingConfiguration
  {
  public:
    AWS_IVSREALTIME_API RecordingConfiguration();
    AWS_IVSREALTIME_API RecordingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API RecordingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An HLS configuration object to return information about how the recording
     * will be configured.</p>
     */
    inline const CompositionRecordingHlsConfiguration& GetHlsConfiguration() const{ return m_hlsConfiguration; }
    inline bool HlsConfigurationHasBeenSet() const { return m_hlsConfigurationHasBeenSet; }
    inline void SetHlsConfiguration(const CompositionRecordingHlsConfiguration& value) { m_hlsConfigurationHasBeenSet = true; m_hlsConfiguration = value; }
    inline void SetHlsConfiguration(CompositionRecordingHlsConfiguration&& value) { m_hlsConfigurationHasBeenSet = true; m_hlsConfiguration = std::move(value); }
    inline RecordingConfiguration& WithHlsConfiguration(const CompositionRecordingHlsConfiguration& value) { SetHlsConfiguration(value); return *this;}
    inline RecordingConfiguration& WithHlsConfiguration(CompositionRecordingHlsConfiguration&& value) { SetHlsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recording format for storing a recording in Amazon S3.</p>
     */
    inline const RecordingConfigurationFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const RecordingConfigurationFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(RecordingConfigurationFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline RecordingConfiguration& WithFormat(const RecordingConfigurationFormat& value) { SetFormat(value); return *this;}
    inline RecordingConfiguration& WithFormat(RecordingConfigurationFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}
  private:

    CompositionRecordingHlsConfiguration m_hlsConfiguration;
    bool m_hlsConfigurationHasBeenSet = false;

    RecordingConfigurationFormat m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
