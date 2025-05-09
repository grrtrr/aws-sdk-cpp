﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/ModelPackageGroupStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A group of versioned models in the Model Registry.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageGroup">AWS
   * API Reference</a></p>
   */
  class ModelPackageGroup
  {
  public:
    AWS_SAGEMAKER_API ModelPackageGroup();
    AWS_SAGEMAKER_API ModelPackageGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = value; }
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::move(value); }
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName.assign(value); }
    inline ModelPackageGroup& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}
    inline ModelPackageGroup& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}
    inline ModelPackageGroup& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupArn() const{ return m_modelPackageGroupArn; }
    inline bool ModelPackageGroupArnHasBeenSet() const { return m_modelPackageGroupArnHasBeenSet; }
    inline void SetModelPackageGroupArn(const Aws::String& value) { m_modelPackageGroupArnHasBeenSet = true; m_modelPackageGroupArn = value; }
    inline void SetModelPackageGroupArn(Aws::String&& value) { m_modelPackageGroupArnHasBeenSet = true; m_modelPackageGroupArn = std::move(value); }
    inline void SetModelPackageGroupArn(const char* value) { m_modelPackageGroupArnHasBeenSet = true; m_modelPackageGroupArn.assign(value); }
    inline ModelPackageGroup& WithModelPackageGroupArn(const Aws::String& value) { SetModelPackageGroupArn(value); return *this;}
    inline ModelPackageGroup& WithModelPackageGroupArn(Aws::String&& value) { SetModelPackageGroupArn(std::move(value)); return *this;}
    inline ModelPackageGroup& WithModelPackageGroupArn(const char* value) { SetModelPackageGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the model group.</p>
     */
    inline const Aws::String& GetModelPackageGroupDescription() const{ return m_modelPackageGroupDescription; }
    inline bool ModelPackageGroupDescriptionHasBeenSet() const { return m_modelPackageGroupDescriptionHasBeenSet; }
    inline void SetModelPackageGroupDescription(const Aws::String& value) { m_modelPackageGroupDescriptionHasBeenSet = true; m_modelPackageGroupDescription = value; }
    inline void SetModelPackageGroupDescription(Aws::String&& value) { m_modelPackageGroupDescriptionHasBeenSet = true; m_modelPackageGroupDescription = std::move(value); }
    inline void SetModelPackageGroupDescription(const char* value) { m_modelPackageGroupDescriptionHasBeenSet = true; m_modelPackageGroupDescription.assign(value); }
    inline ModelPackageGroup& WithModelPackageGroupDescription(const Aws::String& value) { SetModelPackageGroupDescription(value); return *this;}
    inline ModelPackageGroup& WithModelPackageGroupDescription(Aws::String&& value) { SetModelPackageGroupDescription(std::move(value)); return *this;}
    inline ModelPackageGroup& WithModelPackageGroupDescription(const char* value) { SetModelPackageGroupDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the model group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ModelPackageGroup& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ModelPackageGroup& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline ModelPackageGroup& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline ModelPackageGroup& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model group. This can be one of the following values.</p>
     * <ul> <li> <p> <code>PENDING</code> - The model group is pending being
     * created.</p> </li> <li> <p> <code>IN_PROGRESS</code> - The model group is in the
     * process of being created.</p> </li> <li> <p> <code>COMPLETED</code> - The model
     * group was successfully created.</p> </li> <li> <p> <code>FAILED</code> - The
     * model group failed.</p> </li> <li> <p> <code>DELETING</code> - The model group
     * is in the process of being deleted.</p> </li> <li> <p>
     * <code>DELETE_FAILED</code> - SageMaker failed to delete the model group.</p>
     * </li> </ul>
     */
    inline const ModelPackageGroupStatus& GetModelPackageGroupStatus() const{ return m_modelPackageGroupStatus; }
    inline bool ModelPackageGroupStatusHasBeenSet() const { return m_modelPackageGroupStatusHasBeenSet; }
    inline void SetModelPackageGroupStatus(const ModelPackageGroupStatus& value) { m_modelPackageGroupStatusHasBeenSet = true; m_modelPackageGroupStatus = value; }
    inline void SetModelPackageGroupStatus(ModelPackageGroupStatus&& value) { m_modelPackageGroupStatusHasBeenSet = true; m_modelPackageGroupStatus = std::move(value); }
    inline ModelPackageGroup& WithModelPackageGroupStatus(const ModelPackageGroupStatus& value) { SetModelPackageGroupStatus(value); return *this;}
    inline ModelPackageGroup& WithModelPackageGroupStatus(ModelPackageGroupStatus&& value) { SetModelPackageGroupStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the tags associated with the model group. For more information, see
     * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ModelPackageGroup& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ModelPackageGroup& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ModelPackageGroup& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ModelPackageGroup& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    Aws::String m_modelPackageGroupArn;
    bool m_modelPackageGroupArnHasBeenSet = false;

    Aws::String m_modelPackageGroupDescription;
    bool m_modelPackageGroupDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    ModelPackageGroupStatus m_modelPackageGroupStatus;
    bool m_modelPackageGroupStatusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
