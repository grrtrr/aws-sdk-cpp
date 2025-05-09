﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InstanceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/RootAccess.h>
#include <aws/sagemaker/model/InstanceMetadataServiceConfiguration.h>
#include <aws/sagemaker/model/NotebookInstanceAcceleratorType.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateNotebookInstanceRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateNotebookInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotebookInstance"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the notebook instance to update.</p>
     */
    inline const Aws::String& GetNotebookInstanceName() const{ return m_notebookInstanceName; }
    inline bool NotebookInstanceNameHasBeenSet() const { return m_notebookInstanceNameHasBeenSet; }
    inline void SetNotebookInstanceName(const Aws::String& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = value; }
    inline void SetNotebookInstanceName(Aws::String&& value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName = std::move(value); }
    inline void SetNotebookInstanceName(const char* value) { m_notebookInstanceNameHasBeenSet = true; m_notebookInstanceName.assign(value); }
    inline UpdateNotebookInstanceRequest& WithNotebookInstanceName(const Aws::String& value) { SetNotebookInstanceName(value); return *this;}
    inline UpdateNotebookInstanceRequest& WithNotebookInstanceName(Aws::String&& value) { SetNotebookInstanceName(std::move(value)); return *this;}
    inline UpdateNotebookInstanceRequest& WithNotebookInstanceName(const char* value) { SetNotebookInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon ML compute instance type.</p>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline UpdateNotebookInstanceRequest& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline UpdateNotebookInstanceRequest& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that SageMaker AI can assume
     * to access the notebook instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">SageMaker
     * AI Roles</a>. </p>  <p>To be able to pass this role to SageMaker AI, the
     * caller of this API must have the <code>iam:PassRole</code> permission.</p>
     * 
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateNotebookInstanceRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateNotebookInstanceRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateNotebookInstanceRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a lifecycle configuration to associate with the notebook
     * instance. For information about lifestyle configurations, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/notebook-lifecycle-config.html">Step
     * 2.1: (Optional) Customize a Notebook Instance</a>.</p>
     */
    inline const Aws::String& GetLifecycleConfigName() const{ return m_lifecycleConfigName; }
    inline bool LifecycleConfigNameHasBeenSet() const { return m_lifecycleConfigNameHasBeenSet; }
    inline void SetLifecycleConfigName(const Aws::String& value) { m_lifecycleConfigNameHasBeenSet = true; m_lifecycleConfigName = value; }
    inline void SetLifecycleConfigName(Aws::String&& value) { m_lifecycleConfigNameHasBeenSet = true; m_lifecycleConfigName = std::move(value); }
    inline void SetLifecycleConfigName(const char* value) { m_lifecycleConfigNameHasBeenSet = true; m_lifecycleConfigName.assign(value); }
    inline UpdateNotebookInstanceRequest& WithLifecycleConfigName(const Aws::String& value) { SetLifecycleConfigName(value); return *this;}
    inline UpdateNotebookInstanceRequest& WithLifecycleConfigName(Aws::String&& value) { SetLifecycleConfigName(std::move(value)); return *this;}
    inline UpdateNotebookInstanceRequest& WithLifecycleConfigName(const char* value) { SetLifecycleConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to remove the notebook instance lifecycle
     * configuration currently associated with the notebook instance. This operation is
     * idempotent. If you specify a lifecycle configuration that is not associated with
     * the notebook instance when you call this method, it does not throw an error.</p>
     */
    inline bool GetDisassociateLifecycleConfig() const{ return m_disassociateLifecycleConfig; }
    inline bool DisassociateLifecycleConfigHasBeenSet() const { return m_disassociateLifecycleConfigHasBeenSet; }
    inline void SetDisassociateLifecycleConfig(bool value) { m_disassociateLifecycleConfigHasBeenSet = true; m_disassociateLifecycleConfig = value; }
    inline UpdateNotebookInstanceRequest& WithDisassociateLifecycleConfig(bool value) { SetDisassociateLifecycleConfig(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in GB, of the ML storage volume to attach to the notebook instance.
     * The default value is 5 GB. ML storage volumes are encrypted, so SageMaker AI
     * can't determine the amount of available free space on the volume. Because of
     * this, you can increase the volume size when you update a notebook instance, but
     * you can't decrease the volume size. If you want to decrease the size of the ML
     * storage volume in use, create a new notebook instance with the desired size.</p>
     */
    inline int GetVolumeSizeInGB() const{ return m_volumeSizeInGB; }
    inline bool VolumeSizeInGBHasBeenSet() const { return m_volumeSizeInGBHasBeenSet; }
    inline void SetVolumeSizeInGB(int value) { m_volumeSizeInGBHasBeenSet = true; m_volumeSizeInGB = value; }
    inline UpdateNotebookInstanceRequest& WithVolumeSizeInGB(int value) { SetVolumeSizeInGB(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Git repository to associate with the notebook instance as its default
     * code repository. This can be either the name of a Git repository stored as a
     * resource in your account, or the URL of a Git repository in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">Amazon
     * Web Services CodeCommit</a> or in any other Git repository. When you open a
     * notebook instance, it opens in the directory that contains this repository. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with SageMaker AI Notebook Instances</a>.</p>
     */
    inline const Aws::String& GetDefaultCodeRepository() const{ return m_defaultCodeRepository; }
    inline bool DefaultCodeRepositoryHasBeenSet() const { return m_defaultCodeRepositoryHasBeenSet; }
    inline void SetDefaultCodeRepository(const Aws::String& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = value; }
    inline void SetDefaultCodeRepository(Aws::String&& value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository = std::move(value); }
    inline void SetDefaultCodeRepository(const char* value) { m_defaultCodeRepositoryHasBeenSet = true; m_defaultCodeRepository.assign(value); }
    inline UpdateNotebookInstanceRequest& WithDefaultCodeRepository(const Aws::String& value) { SetDefaultCodeRepository(value); return *this;}
    inline UpdateNotebookInstanceRequest& WithDefaultCodeRepository(Aws::String&& value) { SetDefaultCodeRepository(std::move(value)); return *this;}
    inline UpdateNotebookInstanceRequest& WithDefaultCodeRepository(const char* value) { SetDefaultCodeRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of up to three Git repositories to associate with the notebook
     * instance. These can be either the names of Git repositories stored as resources
     * in your account, or the URL of Git repositories in <a
     * href="https://docs.aws.amazon.com/codecommit/latest/userguide/welcome.html">Amazon
     * Web Services CodeCommit</a> or in any other Git repository. These repositories
     * are cloned at the same level as the default repository of your notebook
     * instance. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/nbi-git-repo.html">Associating
     * Git Repositories with SageMaker AI Notebook Instances</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalCodeRepositories() const{ return m_additionalCodeRepositories; }
    inline bool AdditionalCodeRepositoriesHasBeenSet() const { return m_additionalCodeRepositoriesHasBeenSet; }
    inline void SetAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = value; }
    inline void SetAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories = std::move(value); }
    inline UpdateNotebookInstanceRequest& WithAdditionalCodeRepositories(const Aws::Vector<Aws::String>& value) { SetAdditionalCodeRepositories(value); return *this;}
    inline UpdateNotebookInstanceRequest& WithAdditionalCodeRepositories(Aws::Vector<Aws::String>&& value) { SetAdditionalCodeRepositories(std::move(value)); return *this;}
    inline UpdateNotebookInstanceRequest& AddAdditionalCodeRepositories(const Aws::String& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(value); return *this; }
    inline UpdateNotebookInstanceRequest& AddAdditionalCodeRepositories(Aws::String&& value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(std::move(value)); return *this; }
    inline UpdateNotebookInstanceRequest& AddAdditionalCodeRepositories(const char* value) { m_additionalCodeRepositoriesHasBeenSet = true; m_additionalCodeRepositories.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer supported. Elastic Inference (EI) is no longer
     * available.</p> <p>This parameter was used to specify a list of the EI instance
     * types to associate with this notebook instance.</p>
     */
    inline const Aws::Vector<NotebookInstanceAcceleratorType>& GetAcceleratorTypes() const{ return m_acceleratorTypes; }
    inline bool AcceleratorTypesHasBeenSet() const { return m_acceleratorTypesHasBeenSet; }
    inline void SetAcceleratorTypes(const Aws::Vector<NotebookInstanceAcceleratorType>& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = value; }
    inline void SetAcceleratorTypes(Aws::Vector<NotebookInstanceAcceleratorType>&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes = std::move(value); }
    inline UpdateNotebookInstanceRequest& WithAcceleratorTypes(const Aws::Vector<NotebookInstanceAcceleratorType>& value) { SetAcceleratorTypes(value); return *this;}
    inline UpdateNotebookInstanceRequest& WithAcceleratorTypes(Aws::Vector<NotebookInstanceAcceleratorType>&& value) { SetAcceleratorTypes(std::move(value)); return *this;}
    inline UpdateNotebookInstanceRequest& AddAcceleratorTypes(const NotebookInstanceAcceleratorType& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(value); return *this; }
    inline UpdateNotebookInstanceRequest& AddAcceleratorTypes(NotebookInstanceAcceleratorType&& value) { m_acceleratorTypesHasBeenSet = true; m_acceleratorTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer supported. Elastic Inference (EI) is no longer
     * available.</p> <p>This parameter was used to specify a list of the EI instance
     * types to remove from this notebook instance.</p>
     */
    inline bool GetDisassociateAcceleratorTypes() const{ return m_disassociateAcceleratorTypes; }
    inline bool DisassociateAcceleratorTypesHasBeenSet() const { return m_disassociateAcceleratorTypesHasBeenSet; }
    inline void SetDisassociateAcceleratorTypes(bool value) { m_disassociateAcceleratorTypesHasBeenSet = true; m_disassociateAcceleratorTypes = value; }
    inline UpdateNotebookInstanceRequest& WithDisassociateAcceleratorTypes(bool value) { SetDisassociateAcceleratorTypes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or URL of the default Git repository to remove from this notebook
     * instance. This operation is idempotent. If you specify a Git repository that is
     * not associated with the notebook instance when you call this method, it does not
     * throw an error.</p>
     */
    inline bool GetDisassociateDefaultCodeRepository() const{ return m_disassociateDefaultCodeRepository; }
    inline bool DisassociateDefaultCodeRepositoryHasBeenSet() const { return m_disassociateDefaultCodeRepositoryHasBeenSet; }
    inline void SetDisassociateDefaultCodeRepository(bool value) { m_disassociateDefaultCodeRepositoryHasBeenSet = true; m_disassociateDefaultCodeRepository = value; }
    inline UpdateNotebookInstanceRequest& WithDisassociateDefaultCodeRepository(bool value) { SetDisassociateDefaultCodeRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of names or URLs of the default Git repositories to remove from this
     * notebook instance. This operation is idempotent. If you specify a Git repository
     * that is not associated with the notebook instance when you call this method, it
     * does not throw an error.</p>
     */
    inline bool GetDisassociateAdditionalCodeRepositories() const{ return m_disassociateAdditionalCodeRepositories; }
    inline bool DisassociateAdditionalCodeRepositoriesHasBeenSet() const { return m_disassociateAdditionalCodeRepositoriesHasBeenSet; }
    inline void SetDisassociateAdditionalCodeRepositories(bool value) { m_disassociateAdditionalCodeRepositoriesHasBeenSet = true; m_disassociateAdditionalCodeRepositories = value; }
    inline UpdateNotebookInstanceRequest& WithDisassociateAdditionalCodeRepositories(bool value) { SetDisassociateAdditionalCodeRepositories(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether root access is enabled or disabled for users of the notebook
     * instance. The default value is <code>Enabled</code>.</p>  <p>If you set
     * this to <code>Disabled</code>, users don't have root access on the notebook
     * instance, but lifecycle configuration scripts still run with root
     * permissions.</p> 
     */
    inline const RootAccess& GetRootAccess() const{ return m_rootAccess; }
    inline bool RootAccessHasBeenSet() const { return m_rootAccessHasBeenSet; }
    inline void SetRootAccess(const RootAccess& value) { m_rootAccessHasBeenSet = true; m_rootAccess = value; }
    inline void SetRootAccess(RootAccess&& value) { m_rootAccessHasBeenSet = true; m_rootAccess = std::move(value); }
    inline UpdateNotebookInstanceRequest& WithRootAccess(const RootAccess& value) { SetRootAccess(value); return *this;}
    inline UpdateNotebookInstanceRequest& WithRootAccess(RootAccess&& value) { SetRootAccess(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information on the IMDS configuration of the notebook instance</p>
     */
    inline const InstanceMetadataServiceConfiguration& GetInstanceMetadataServiceConfiguration() const{ return m_instanceMetadataServiceConfiguration; }
    inline bool InstanceMetadataServiceConfigurationHasBeenSet() const { return m_instanceMetadataServiceConfigurationHasBeenSet; }
    inline void SetInstanceMetadataServiceConfiguration(const InstanceMetadataServiceConfiguration& value) { m_instanceMetadataServiceConfigurationHasBeenSet = true; m_instanceMetadataServiceConfiguration = value; }
    inline void SetInstanceMetadataServiceConfiguration(InstanceMetadataServiceConfiguration&& value) { m_instanceMetadataServiceConfigurationHasBeenSet = true; m_instanceMetadataServiceConfiguration = std::move(value); }
    inline UpdateNotebookInstanceRequest& WithInstanceMetadataServiceConfiguration(const InstanceMetadataServiceConfiguration& value) { SetInstanceMetadataServiceConfiguration(value); return *this;}
    inline UpdateNotebookInstanceRequest& WithInstanceMetadataServiceConfiguration(InstanceMetadataServiceConfiguration&& value) { SetInstanceMetadataServiceConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_notebookInstanceName;
    bool m_notebookInstanceNameHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_lifecycleConfigName;
    bool m_lifecycleConfigNameHasBeenSet = false;

    bool m_disassociateLifecycleConfig;
    bool m_disassociateLifecycleConfigHasBeenSet = false;

    int m_volumeSizeInGB;
    bool m_volumeSizeInGBHasBeenSet = false;

    Aws::String m_defaultCodeRepository;
    bool m_defaultCodeRepositoryHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalCodeRepositories;
    bool m_additionalCodeRepositoriesHasBeenSet = false;

    Aws::Vector<NotebookInstanceAcceleratorType> m_acceleratorTypes;
    bool m_acceleratorTypesHasBeenSet = false;

    bool m_disassociateAcceleratorTypes;
    bool m_disassociateAcceleratorTypesHasBeenSet = false;

    bool m_disassociateDefaultCodeRepository;
    bool m_disassociateDefaultCodeRepositoryHasBeenSet = false;

    bool m_disassociateAdditionalCodeRepositories;
    bool m_disassociateAdditionalCodeRepositoriesHasBeenSet = false;

    RootAccess m_rootAccess;
    bool m_rootAccessHasBeenSet = false;

    InstanceMetadataServiceConfiguration m_instanceMetadataServiceConfiguration;
    bool m_instanceMetadataServiceConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
