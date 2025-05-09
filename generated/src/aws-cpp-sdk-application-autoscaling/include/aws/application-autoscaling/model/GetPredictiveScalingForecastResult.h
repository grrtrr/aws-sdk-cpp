﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/application-autoscaling/model/CapacityForecast.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/LoadForecast.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{
  class GetPredictiveScalingForecastResult
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API GetPredictiveScalingForecastResult();
    AWS_APPLICATIONAUTOSCALING_API GetPredictiveScalingForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API GetPredictiveScalingForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The load forecast. </p>
     */
    inline const Aws::Vector<LoadForecast>& GetLoadForecast() const{ return m_loadForecast; }
    inline void SetLoadForecast(const Aws::Vector<LoadForecast>& value) { m_loadForecast = value; }
    inline void SetLoadForecast(Aws::Vector<LoadForecast>&& value) { m_loadForecast = std::move(value); }
    inline GetPredictiveScalingForecastResult& WithLoadForecast(const Aws::Vector<LoadForecast>& value) { SetLoadForecast(value); return *this;}
    inline GetPredictiveScalingForecastResult& WithLoadForecast(Aws::Vector<LoadForecast>&& value) { SetLoadForecast(std::move(value)); return *this;}
    inline GetPredictiveScalingForecastResult& AddLoadForecast(const LoadForecast& value) { m_loadForecast.push_back(value); return *this; }
    inline GetPredictiveScalingForecastResult& AddLoadForecast(LoadForecast&& value) { m_loadForecast.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The capacity forecast. </p>
     */
    inline const CapacityForecast& GetCapacityForecast() const{ return m_capacityForecast; }
    inline void SetCapacityForecast(const CapacityForecast& value) { m_capacityForecast = value; }
    inline void SetCapacityForecast(CapacityForecast&& value) { m_capacityForecast = std::move(value); }
    inline GetPredictiveScalingForecastResult& WithCapacityForecast(const CapacityForecast& value) { SetCapacityForecast(value); return *this;}
    inline GetPredictiveScalingForecastResult& WithCapacityForecast(CapacityForecast&& value) { SetCapacityForecast(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time the forecast was made. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetPredictiveScalingForecastResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetPredictiveScalingForecastResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPredictiveScalingForecastResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPredictiveScalingForecastResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPredictiveScalingForecastResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LoadForecast> m_loadForecast;

    CapacityForecast m_capacityForecast;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
