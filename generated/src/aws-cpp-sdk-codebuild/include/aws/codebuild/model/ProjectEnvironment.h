﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ComputeType.h>
#include <aws/codebuild/model/ComputeConfiguration.h>
#include <aws/codebuild/model/ProjectFleet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/RegistryCredential.h>
#include <aws/codebuild/model/ImagePullCredentialsType.h>
#include <aws/codebuild/model/EnvironmentVariable.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the build environment of the build project.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectEnvironment">AWS
   * API Reference</a></p>
   */
  class ProjectEnvironment
  {
  public:
    AWS_CODEBUILD_API ProjectEnvironment();
    AWS_CODEBUILD_API ProjectEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProjectEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of build environment to use for related builds.</p>  <p>If
     * you're using compute fleets during project creation, <code>type</code> will be
     * ignored.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild user guide</i>.</p>
     */
    inline const EnvironmentType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const EnvironmentType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(EnvironmentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ProjectEnvironment& WithType(const EnvironmentType& value) { SetType(value); return *this;}
    inline ProjectEnvironment& WithType(EnvironmentType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image tag or image digest that identifies the Docker image to use for
     * this build project. Use the following formats:</p> <ul> <li> <p>For an image
     * tag: <code>&lt;registry&gt;/&lt;repository&gt;:&lt;tag&gt;</code>. For example,
     * in the Docker repository that CodeBuild uses to manage its Docker images, this
     * would be <code>aws/codebuild/standard:4.0</code>. </p> </li> <li> <p>For an
     * image digest: <code>&lt;registry&gt;/&lt;repository&gt;@&lt;digest&gt;</code>.
     * For example, to specify an image with the digest
     * "sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf," use
     * <code>&lt;registry&gt;/&lt;repository&gt;@sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf</code>.</p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-available.html">Docker
     * images provided by CodeBuild</a> in the <i>CodeBuild user guide</i>.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline ProjectEnvironment& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline ProjectEnvironment& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline ProjectEnvironment& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the compute resources the build project uses. Available
     * values include:</p> <ul> <li> <p> <code>ATTRIBUTE_BASED_COMPUTE</code>: Specify
     * the amount of vCPUs, memory, disk space, and the type of machine.</p>  <p>
     * If you use <code>ATTRIBUTE_BASED_COMPUTE</code>, you must define your attributes
     * by using <code>computeConfiguration</code>. CodeBuild will select the cheapest
     * instance that satisfies your specified attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html#environment-reserved-capacity.types">Reserved
     * capacity environment types</a> in the <i>CodeBuild User Guide</i>.</p> 
     * </li> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 4 GiB memory and 2
     * vCPUs for builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_MEDIUM</code>: Use up
     * to 8 GiB memory and 4 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_LARGE</code>: Use up to 16 GiB memory and 8 vCPUs for
     * builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_XLARGE</code>: Use up to 72 GiB memory and 36 vCPUs for
     * builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_2XLARGE</code>: Use up to 144 GiB memory, 72 vCPUs, and 824
     * GB of SSD storage for builds. This compute type supports Docker images up to 100
     * GB uncompressed.</p> </li> <li> <p> <code>BUILD_LAMBDA_1GB</code>: Use up to 1
     * GiB memory for builds. Only available for environment type
     * <code>LINUX_LAMBDA_CONTAINER</code> and <code>ARM_LAMBDA_CONTAINER</code>.</p>
     * </li> <li> <p> <code>BUILD_LAMBDA_2GB</code>: Use up to 2 GiB memory for builds.
     * Only available for environment type <code>LINUX_LAMBDA_CONTAINER</code> and
     * <code>ARM_LAMBDA_CONTAINER</code>.</p> </li> <li> <p>
     * <code>BUILD_LAMBDA_4GB</code>: Use up to 4 GiB memory for builds. Only available
     * for environment type <code>LINUX_LAMBDA_CONTAINER</code> and
     * <code>ARM_LAMBDA_CONTAINER</code>.</p> </li> <li> <p>
     * <code>BUILD_LAMBDA_8GB</code>: Use up to 8 GiB memory for builds. Only available
     * for environment type <code>LINUX_LAMBDA_CONTAINER</code> and
     * <code>ARM_LAMBDA_CONTAINER</code>.</p> </li> <li> <p>
     * <code>BUILD_LAMBDA_10GB</code>: Use up to 10 GiB memory for builds. Only
     * available for environment type <code>LINUX_LAMBDA_CONTAINER</code> and
     * <code>ARM_LAMBDA_CONTAINER</code>.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_SMALL</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 4 GiB memory and 2 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 16 GiB memory, 4 vCPUs, and
     * 1 NVIDIA A10G Tensor Core GPU for builds.</p> </li> <li> <p> For environment
     * type <code>ARM_CONTAINER</code>, you can use up to 4 GiB memory and 2 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_LARGE</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 16 GiB memory and 8 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 255 GiB memory, 32 vCPUs,
     * and 4 NVIDIA Tesla V100 GPUs for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 16 GiB memory and 8 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html#environment.types">On-demand
     * environment types</a> in the <i>CodeBuild User Guide.</i> </p>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }
    inline ProjectEnvironment& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}
    inline ProjectEnvironment& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute configuration of the build project. This is only required if
     * <code>computeType</code> is set to <code>ATTRIBUTE_BASED_COMPUTE</code>.</p>
     */
    inline const ComputeConfiguration& GetComputeConfiguration() const{ return m_computeConfiguration; }
    inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
    inline void SetComputeConfiguration(const ComputeConfiguration& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = value; }
    inline void SetComputeConfiguration(ComputeConfiguration&& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = std::move(value); }
    inline ProjectEnvironment& WithComputeConfiguration(const ComputeConfiguration& value) { SetComputeConfiguration(value); return *this;}
    inline ProjectEnvironment& WithComputeConfiguration(ComputeConfiguration&& value) { SetComputeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A ProjectFleet object to use for this build project.</p>
     */
    inline const ProjectFleet& GetFleet() const{ return m_fleet; }
    inline bool FleetHasBeenSet() const { return m_fleetHasBeenSet; }
    inline void SetFleet(const ProjectFleet& value) { m_fleetHasBeenSet = true; m_fleet = value; }
    inline void SetFleet(ProjectFleet&& value) { m_fleetHasBeenSet = true; m_fleet = std::move(value); }
    inline ProjectEnvironment& WithFleet(const ProjectFleet& value) { SetFleet(value); return *this;}
    inline ProjectEnvironment& WithFleet(ProjectFleet&& value) { SetFleet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironmentVariables() const{ return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    inline void SetEnvironmentVariables(const Aws::Vector<EnvironmentVariable>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }
    inline void SetEnvironmentVariables(Aws::Vector<EnvironmentVariable>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }
    inline ProjectEnvironment& WithEnvironmentVariables(const Aws::Vector<EnvironmentVariable>& value) { SetEnvironmentVariables(value); return *this;}
    inline ProjectEnvironment& WithEnvironmentVariables(Aws::Vector<EnvironmentVariable>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}
    inline ProjectEnvironment& AddEnvironmentVariables(const EnvironmentVariable& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.push_back(value); return *this; }
    inline ProjectEnvironment& AddEnvironmentVariables(EnvironmentVariable&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables running the Docker daemon inside a Docker container. Set to true only
     * if the build project is used to build Docker images. Otherwise, a build that
     * attempts to interact with the Docker daemon fails. The default setting is
     * <code>false</code>.</p> <p>You can initialize the Docker daemon during the
     * install phase of your build by adding one of the following sets of commands to
     * the install phase of your buildspec file:</p> <p>If the operating system's base
     * image is Ubuntu Linux:</p> <p> <code>- nohup /usr/local/bin/dockerd
     * --host=unix:///var/run/docker.sock --host=tcp://0.0.0.0:2375
     * --storage-driver=overlay&amp;</code> </p> <p> <code>- timeout 15 sh -c "until
     * docker info; do echo .; sleep 1; done"</code> </p> <p>If the operating system's
     * base image is Alpine Linux and the previous command does not work, add the
     * <code>-t</code> argument to <code>timeout</code>:</p> <p> <code>- nohup
     * /usr/local/bin/dockerd --host=unix:///var/run/docker.sock
     * --host=tcp://0.0.0.0:2375 --storage-driver=overlay&amp;</code> </p> <p> <code>-
     * timeout -t 15 sh -c "until docker info; do echo .; sleep 1; done"</code> </p>
     */
    inline bool GetPrivilegedMode() const{ return m_privilegedMode; }
    inline bool PrivilegedModeHasBeenSet() const { return m_privilegedModeHasBeenSet; }
    inline void SetPrivilegedMode(bool value) { m_privilegedModeHasBeenSet = true; m_privilegedMode = value; }
    inline ProjectEnvironment& WithPrivilegedMode(bool value) { SetPrivilegedMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon S3 bucket, path prefix, and object key that contains
     * the PEM-encoded certificate for the build project. For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/create-project-cli.html#cli.environment.certificate">certificate</a>
     * in the <i>CodeBuild User Guide</i>.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }
    inline ProjectEnvironment& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}
    inline ProjectEnvironment& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}
    inline ProjectEnvironment& WithCertificate(const char* value) { SetCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The credentials for access to a private registry.</p>
     */
    inline const RegistryCredential& GetRegistryCredential() const{ return m_registryCredential; }
    inline bool RegistryCredentialHasBeenSet() const { return m_registryCredentialHasBeenSet; }
    inline void SetRegistryCredential(const RegistryCredential& value) { m_registryCredentialHasBeenSet = true; m_registryCredential = value; }
    inline void SetRegistryCredential(RegistryCredential&& value) { m_registryCredentialHasBeenSet = true; m_registryCredential = std::move(value); }
    inline ProjectEnvironment& WithRegistryCredential(const RegistryCredential& value) { SetRegistryCredential(value); return *this;}
    inline ProjectEnvironment& WithRegistryCredential(RegistryCredential&& value) { SetRegistryCredential(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of credentials CodeBuild uses to pull images in your build. There
     * are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies that
     * CodeBuild uses its own credentials. This requires that you modify your ECR
     * repository policy to trust CodeBuild service principal. </p> </li> <li> <p>
     * <code>SERVICE_ROLE</code> specifies that CodeBuild uses your build project's
     * service role. </p> </li> </ul> <p> When you use a cross-account or private
     * registry image, you must use SERVICE_ROLE credentials. When you use an CodeBuild
     * curated image, you must use CODEBUILD credentials. </p>
     */
    inline const ImagePullCredentialsType& GetImagePullCredentialsType() const{ return m_imagePullCredentialsType; }
    inline bool ImagePullCredentialsTypeHasBeenSet() const { return m_imagePullCredentialsTypeHasBeenSet; }
    inline void SetImagePullCredentialsType(const ImagePullCredentialsType& value) { m_imagePullCredentialsTypeHasBeenSet = true; m_imagePullCredentialsType = value; }
    inline void SetImagePullCredentialsType(ImagePullCredentialsType&& value) { m_imagePullCredentialsTypeHasBeenSet = true; m_imagePullCredentialsType = std::move(value); }
    inline ProjectEnvironment& WithImagePullCredentialsType(const ImagePullCredentialsType& value) { SetImagePullCredentialsType(value); return *this;}
    inline ProjectEnvironment& WithImagePullCredentialsType(ImagePullCredentialsType&& value) { SetImagePullCredentialsType(std::move(value)); return *this;}
    ///@}
  private:

    EnvironmentType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet = false;

    ComputeConfiguration m_computeConfiguration;
    bool m_computeConfigurationHasBeenSet = false;

    ProjectFleet m_fleet;
    bool m_fleetHasBeenSet = false;

    Aws::Vector<EnvironmentVariable> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    bool m_privilegedMode;
    bool m_privilegedModeHasBeenSet = false;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    RegistryCredential m_registryCredential;
    bool m_registryCredentialHasBeenSet = false;

    ImagePullCredentialsType m_imagePullCredentialsType;
    bool m_imagePullCredentialsTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
