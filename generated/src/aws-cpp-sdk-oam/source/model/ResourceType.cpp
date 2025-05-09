﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/oam/model/ResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OAM
  {
    namespace Model
    {
      namespace ResourceTypeMapper
      {

        static const int AWS_CloudWatch_Metric_HASH = HashingUtils::HashString("AWS::CloudWatch::Metric");
        static const int AWS_Logs_LogGroup_HASH = HashingUtils::HashString("AWS::Logs::LogGroup");
        static const int AWS_XRay_Trace_HASH = HashingUtils::HashString("AWS::XRay::Trace");
        static const int AWS_ApplicationInsights_Application_HASH = HashingUtils::HashString("AWS::ApplicationInsights::Application");
        static const int AWS_InternetMonitor_Monitor_HASH = HashingUtils::HashString("AWS::InternetMonitor::Monitor");
        static const int AWS_ApplicationSignals_Service_HASH = HashingUtils::HashString("AWS::ApplicationSignals::Service");
        static const int AWS_ApplicationSignals_ServiceLevelObjective_HASH = HashingUtils::HashString("AWS::ApplicationSignals::ServiceLevelObjective");


        ResourceType GetResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_CloudWatch_Metric_HASH)
          {
            return ResourceType::AWS_CloudWatch_Metric;
          }
          else if (hashCode == AWS_Logs_LogGroup_HASH)
          {
            return ResourceType::AWS_Logs_LogGroup;
          }
          else if (hashCode == AWS_XRay_Trace_HASH)
          {
            return ResourceType::AWS_XRay_Trace;
          }
          else if (hashCode == AWS_ApplicationInsights_Application_HASH)
          {
            return ResourceType::AWS_ApplicationInsights_Application;
          }
          else if (hashCode == AWS_InternetMonitor_Monitor_HASH)
          {
            return ResourceType::AWS_InternetMonitor_Monitor;
          }
          else if (hashCode == AWS_ApplicationSignals_Service_HASH)
          {
            return ResourceType::AWS_ApplicationSignals_Service;
          }
          else if (hashCode == AWS_ApplicationSignals_ServiceLevelObjective_HASH)
          {
            return ResourceType::AWS_ApplicationSignals_ServiceLevelObjective;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceType>(hashCode);
          }

          return ResourceType::NOT_SET;
        }

        Aws::String GetNameForResourceType(ResourceType enumValue)
        {
          switch(enumValue)
          {
          case ResourceType::NOT_SET:
            return {};
          case ResourceType::AWS_CloudWatch_Metric:
            return "AWS::CloudWatch::Metric";
          case ResourceType::AWS_Logs_LogGroup:
            return "AWS::Logs::LogGroup";
          case ResourceType::AWS_XRay_Trace:
            return "AWS::XRay::Trace";
          case ResourceType::AWS_ApplicationInsights_Application:
            return "AWS::ApplicationInsights::Application";
          case ResourceType::AWS_InternetMonitor_Monitor:
            return "AWS::InternetMonitor::Monitor";
          case ResourceType::AWS_ApplicationSignals_Service:
            return "AWS::ApplicationSignals::Service";
          case ResourceType::AWS_ApplicationSignals_ServiceLevelObjective:
            return "AWS::ApplicationSignals::ServiceLevelObjective";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeMapper
    } // namespace Model
  } // namespace OAM
} // namespace Aws
