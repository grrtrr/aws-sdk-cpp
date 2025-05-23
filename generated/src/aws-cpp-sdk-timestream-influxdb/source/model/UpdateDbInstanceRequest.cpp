﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/UpdateDbInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDbInstanceRequest::UpdateDbInstanceRequest() : 
    m_identifierHasBeenSet(false),
    m_logDeliveryConfigurationHasBeenSet(false),
    m_dbParameterGroupIdentifierHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_dbInstanceType(DbInstanceType::NOT_SET),
    m_dbInstanceTypeHasBeenSet(false),
    m_deploymentType(DeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_dbStorageType(DbStorageType::NOT_SET),
    m_dbStorageTypeHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false)
{
}

Aws::String UpdateDbInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_logDeliveryConfigurationHasBeenSet)
  {
   payload.WithObject("logDeliveryConfiguration", m_logDeliveryConfiguration.Jsonize());

  }

  if(m_dbParameterGroupIdentifierHasBeenSet)
  {
   payload.WithString("dbParameterGroupIdentifier", m_dbParameterGroupIdentifier);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_dbInstanceTypeHasBeenSet)
  {
   payload.WithString("dbInstanceType", DbInstanceTypeMapper::GetNameForDbInstanceType(m_dbInstanceType));
  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("deploymentType", DeploymentTypeMapper::GetNameForDeploymentType(m_deploymentType));
  }

  if(m_dbStorageTypeHasBeenSet)
  {
   payload.WithString("dbStorageType", DbStorageTypeMapper::GetNameForDbStorageType(m_dbStorageType));
  }

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("allocatedStorage", m_allocatedStorage);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDbInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonTimestreamInfluxDB.UpdateDbInstance"));
  return headers;

}




