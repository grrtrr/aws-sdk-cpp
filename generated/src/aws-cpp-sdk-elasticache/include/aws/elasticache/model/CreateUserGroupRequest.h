﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class CreateUserGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API CreateUserGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the user group.</p>
     */
    inline const Aws::String& GetUserGroupId() const{ return m_userGroupId; }
    inline bool UserGroupIdHasBeenSet() const { return m_userGroupIdHasBeenSet; }
    inline void SetUserGroupId(const Aws::String& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = value; }
    inline void SetUserGroupId(Aws::String&& value) { m_userGroupIdHasBeenSet = true; m_userGroupId = std::move(value); }
    inline void SetUserGroupId(const char* value) { m_userGroupIdHasBeenSet = true; m_userGroupId.assign(value); }
    inline CreateUserGroupRequest& WithUserGroupId(const Aws::String& value) { SetUserGroupId(value); return *this;}
    inline CreateUserGroupRequest& WithUserGroupId(Aws::String&& value) { SetUserGroupId(std::move(value)); return *this;}
    inline CreateUserGroupRequest& WithUserGroupId(const char* value) { SetUserGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the engine listed in a user group. The options are valkey or redis.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline CreateUserGroupRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline CreateUserGroupRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline CreateUserGroupRequest& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of user IDs that belong to the user group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }
    inline CreateUserGroupRequest& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}
    inline CreateUserGroupRequest& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}
    inline CreateUserGroupRequest& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }
    inline CreateUserGroupRequest& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }
    inline CreateUserGroupRequest& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags to be added to this resource. A tag is a key-value pair. A tag
     * key must be accompanied by a tag value, although null is accepted. Available for
     * Valkey and Redis OSS only.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateUserGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateUserGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateUserGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateUserGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_userGroupId;
    bool m_userGroupIdHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
