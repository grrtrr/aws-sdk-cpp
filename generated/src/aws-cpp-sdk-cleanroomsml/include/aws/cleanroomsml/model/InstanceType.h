﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class InstanceType
  {
    NOT_SET,
    ml_m4_xlarge,
    ml_m4_2xlarge,
    ml_m4_4xlarge,
    ml_m4_10xlarge,
    ml_m4_16xlarge,
    ml_g4dn_xlarge,
    ml_g4dn_2xlarge,
    ml_g4dn_4xlarge,
    ml_g4dn_8xlarge,
    ml_g4dn_12xlarge,
    ml_g4dn_16xlarge,
    ml_m5_large,
    ml_m5_xlarge,
    ml_m5_2xlarge,
    ml_m5_4xlarge,
    ml_m5_12xlarge,
    ml_m5_24xlarge,
    ml_c4_xlarge,
    ml_c4_2xlarge,
    ml_c4_4xlarge,
    ml_c4_8xlarge,
    ml_p2_xlarge,
    ml_p2_8xlarge,
    ml_p2_16xlarge,
    ml_p3_2xlarge,
    ml_p3_8xlarge,
    ml_p3_16xlarge,
    ml_p3dn_24xlarge,
    ml_p4d_24xlarge,
    ml_p4de_24xlarge,
    ml_p5_48xlarge,
    ml_c5_xlarge,
    ml_c5_2xlarge,
    ml_c5_4xlarge,
    ml_c5_9xlarge,
    ml_c5_18xlarge,
    ml_c5n_xlarge,
    ml_c5n_2xlarge,
    ml_c5n_4xlarge,
    ml_c5n_9xlarge,
    ml_c5n_18xlarge,
    ml_g5_xlarge,
    ml_g5_2xlarge,
    ml_g5_4xlarge,
    ml_g5_8xlarge,
    ml_g5_16xlarge,
    ml_g5_12xlarge,
    ml_g5_24xlarge,
    ml_g5_48xlarge,
    ml_trn1_2xlarge,
    ml_trn1_32xlarge,
    ml_trn1n_32xlarge,
    ml_m6i_large,
    ml_m6i_xlarge,
    ml_m6i_2xlarge,
    ml_m6i_4xlarge,
    ml_m6i_8xlarge,
    ml_m6i_12xlarge,
    ml_m6i_16xlarge,
    ml_m6i_24xlarge,
    ml_m6i_32xlarge,
    ml_c6i_xlarge,
    ml_c6i_2xlarge,
    ml_c6i_8xlarge,
    ml_c6i_4xlarge,
    ml_c6i_12xlarge,
    ml_c6i_16xlarge,
    ml_c6i_24xlarge,
    ml_c6i_32xlarge,
    ml_r5d_large,
    ml_r5d_xlarge,
    ml_r5d_2xlarge,
    ml_r5d_4xlarge,
    ml_r5d_8xlarge,
    ml_r5d_12xlarge,
    ml_r5d_16xlarge,
    ml_r5d_24xlarge,
    ml_t3_medium,
    ml_t3_large,
    ml_t3_xlarge,
    ml_t3_2xlarge,
    ml_r5_large,
    ml_r5_xlarge,
    ml_r5_2xlarge,
    ml_r5_4xlarge,
    ml_r5_8xlarge,
    ml_r5_12xlarge,
    ml_r5_16xlarge,
    ml_r5_24xlarge
  };

namespace InstanceTypeMapper
{
AWS_CLEANROOMSML_API InstanceType GetInstanceTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForInstanceType(InstanceType value);
} // namespace InstanceTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
