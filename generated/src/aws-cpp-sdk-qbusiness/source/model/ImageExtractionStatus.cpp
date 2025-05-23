﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ImageExtractionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace ImageExtractionStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ImageExtractionStatus GetImageExtractionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ImageExtractionStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ImageExtractionStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageExtractionStatus>(hashCode);
          }

          return ImageExtractionStatus::NOT_SET;
        }

        Aws::String GetNameForImageExtractionStatus(ImageExtractionStatus enumValue)
        {
          switch(enumValue)
          {
          case ImageExtractionStatus::NOT_SET:
            return {};
          case ImageExtractionStatus::ENABLED:
            return "ENABLED";
          case ImageExtractionStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageExtractionStatusMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
