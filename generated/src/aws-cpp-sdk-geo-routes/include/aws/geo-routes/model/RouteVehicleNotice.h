﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-routes/GeoRoutes_EXPORTS.h>
#include <aws/geo-routes/model/RouteVehicleNoticeCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/geo-routes/model/RouteNoticeImpact.h>
#include <aws/geo-routes/model/RouteVehicleNoticeDetail.h>
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
namespace GeoRoutes
{
namespace Model
{

  /**
   * <p>Notices are additional information returned that indicate issues that
   * occurred during route calculation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-routes-2020-11-19/RouteVehicleNotice">AWS
   * API Reference</a></p>
   */
  class RouteVehicleNotice
  {
  public:
    AWS_GEOROUTES_API RouteVehicleNotice();
    AWS_GEOROUTES_API RouteVehicleNotice(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API RouteVehicleNotice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOROUTES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Code corresponding to the issue.</p>
     */
    inline const RouteVehicleNoticeCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const RouteVehicleNoticeCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(RouteVehicleNoticeCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline RouteVehicleNotice& WithCode(const RouteVehicleNoticeCode& value) { SetCode(value); return *this;}
    inline RouteVehicleNotice& WithCode(RouteVehicleNoticeCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional details of the notice.</p>
     */
    inline const Aws::Vector<RouteVehicleNoticeDetail>& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const Aws::Vector<RouteVehicleNoticeDetail>& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(Aws::Vector<RouteVehicleNoticeDetail>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline RouteVehicleNotice& WithDetails(const Aws::Vector<RouteVehicleNoticeDetail>& value) { SetDetails(value); return *this;}
    inline RouteVehicleNotice& WithDetails(Aws::Vector<RouteVehicleNoticeDetail>&& value) { SetDetails(std::move(value)); return *this;}
    inline RouteVehicleNotice& AddDetails(const RouteVehicleNoticeDetail& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }
    inline RouteVehicleNotice& AddDetails(RouteVehicleNoticeDetail&& value) { m_detailsHasBeenSet = true; m_details.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Impact corresponding to the issue. While Low impact notices can be safely
     * ignored, High impact notices must be evaluated further to determine the
     * impact.</p>
     */
    inline const RouteNoticeImpact& GetImpact() const{ return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    inline void SetImpact(const RouteNoticeImpact& value) { m_impactHasBeenSet = true; m_impact = value; }
    inline void SetImpact(RouteNoticeImpact&& value) { m_impactHasBeenSet = true; m_impact = std::move(value); }
    inline RouteVehicleNotice& WithImpact(const RouteNoticeImpact& value) { SetImpact(value); return *this;}
    inline RouteVehicleNotice& WithImpact(RouteNoticeImpact&& value) { SetImpact(std::move(value)); return *this;}
    ///@}
  private:

    RouteVehicleNoticeCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::Vector<RouteVehicleNoticeDetail> m_details;
    bool m_detailsHasBeenSet = false;

    RouteNoticeImpact m_impact;
    bool m_impactHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
