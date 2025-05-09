﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/AccessPropertyValue.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>The device types and operating systems that can be used to access a
   * WorkSpace. For more information, see <a
   * href="https://docs.aws.amazon.com/workspaces/latest/adminguide/workspaces-network-requirements.html">Amazon
   * WorkSpaces Client Network Requirements</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkspaceAccessProperties">AWS
   * API Reference</a></p>
   */
  class WorkspaceAccessProperties
  {
  public:
    AWS_WORKSPACES_API WorkspaceAccessProperties();
    AWS_WORKSPACES_API WorkspaceAccessProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkspaceAccessProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether users can use Windows clients to access their
     * WorkSpaces.</p>
     */
    inline const AccessPropertyValue& GetDeviceTypeWindows() const{ return m_deviceTypeWindows; }
    inline bool DeviceTypeWindowsHasBeenSet() const { return m_deviceTypeWindowsHasBeenSet; }
    inline void SetDeviceTypeWindows(const AccessPropertyValue& value) { m_deviceTypeWindowsHasBeenSet = true; m_deviceTypeWindows = value; }
    inline void SetDeviceTypeWindows(AccessPropertyValue&& value) { m_deviceTypeWindowsHasBeenSet = true; m_deviceTypeWindows = std::move(value); }
    inline WorkspaceAccessProperties& WithDeviceTypeWindows(const AccessPropertyValue& value) { SetDeviceTypeWindows(value); return *this;}
    inline WorkspaceAccessProperties& WithDeviceTypeWindows(AccessPropertyValue&& value) { SetDeviceTypeWindows(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can use macOS clients to access their WorkSpaces.</p>
     */
    inline const AccessPropertyValue& GetDeviceTypeOsx() const{ return m_deviceTypeOsx; }
    inline bool DeviceTypeOsxHasBeenSet() const { return m_deviceTypeOsxHasBeenSet; }
    inline void SetDeviceTypeOsx(const AccessPropertyValue& value) { m_deviceTypeOsxHasBeenSet = true; m_deviceTypeOsx = value; }
    inline void SetDeviceTypeOsx(AccessPropertyValue&& value) { m_deviceTypeOsxHasBeenSet = true; m_deviceTypeOsx = std::move(value); }
    inline WorkspaceAccessProperties& WithDeviceTypeOsx(const AccessPropertyValue& value) { SetDeviceTypeOsx(value); return *this;}
    inline WorkspaceAccessProperties& WithDeviceTypeOsx(AccessPropertyValue&& value) { SetDeviceTypeOsx(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can access their WorkSpaces through a web
     * browser.</p>
     */
    inline const AccessPropertyValue& GetDeviceTypeWeb() const{ return m_deviceTypeWeb; }
    inline bool DeviceTypeWebHasBeenSet() const { return m_deviceTypeWebHasBeenSet; }
    inline void SetDeviceTypeWeb(const AccessPropertyValue& value) { m_deviceTypeWebHasBeenSet = true; m_deviceTypeWeb = value; }
    inline void SetDeviceTypeWeb(AccessPropertyValue&& value) { m_deviceTypeWebHasBeenSet = true; m_deviceTypeWeb = std::move(value); }
    inline WorkspaceAccessProperties& WithDeviceTypeWeb(const AccessPropertyValue& value) { SetDeviceTypeWeb(value); return *this;}
    inline WorkspaceAccessProperties& WithDeviceTypeWeb(AccessPropertyValue&& value) { SetDeviceTypeWeb(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can use iOS devices to access their WorkSpaces.</p>
     */
    inline const AccessPropertyValue& GetDeviceTypeIos() const{ return m_deviceTypeIos; }
    inline bool DeviceTypeIosHasBeenSet() const { return m_deviceTypeIosHasBeenSet; }
    inline void SetDeviceTypeIos(const AccessPropertyValue& value) { m_deviceTypeIosHasBeenSet = true; m_deviceTypeIos = value; }
    inline void SetDeviceTypeIos(AccessPropertyValue&& value) { m_deviceTypeIosHasBeenSet = true; m_deviceTypeIos = std::move(value); }
    inline WorkspaceAccessProperties& WithDeviceTypeIos(const AccessPropertyValue& value) { SetDeviceTypeIos(value); return *this;}
    inline WorkspaceAccessProperties& WithDeviceTypeIos(AccessPropertyValue&& value) { SetDeviceTypeIos(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can use Android and Android-compatible Chrome OS
     * devices to access their WorkSpaces.</p>
     */
    inline const AccessPropertyValue& GetDeviceTypeAndroid() const{ return m_deviceTypeAndroid; }
    inline bool DeviceTypeAndroidHasBeenSet() const { return m_deviceTypeAndroidHasBeenSet; }
    inline void SetDeviceTypeAndroid(const AccessPropertyValue& value) { m_deviceTypeAndroidHasBeenSet = true; m_deviceTypeAndroid = value; }
    inline void SetDeviceTypeAndroid(AccessPropertyValue&& value) { m_deviceTypeAndroidHasBeenSet = true; m_deviceTypeAndroid = std::move(value); }
    inline WorkspaceAccessProperties& WithDeviceTypeAndroid(const AccessPropertyValue& value) { SetDeviceTypeAndroid(value); return *this;}
    inline WorkspaceAccessProperties& WithDeviceTypeAndroid(AccessPropertyValue&& value) { SetDeviceTypeAndroid(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can use Chromebooks to access their WorkSpaces.</p>
     */
    inline const AccessPropertyValue& GetDeviceTypeChromeOs() const{ return m_deviceTypeChromeOs; }
    inline bool DeviceTypeChromeOsHasBeenSet() const { return m_deviceTypeChromeOsHasBeenSet; }
    inline void SetDeviceTypeChromeOs(const AccessPropertyValue& value) { m_deviceTypeChromeOsHasBeenSet = true; m_deviceTypeChromeOs = value; }
    inline void SetDeviceTypeChromeOs(AccessPropertyValue&& value) { m_deviceTypeChromeOsHasBeenSet = true; m_deviceTypeChromeOs = std::move(value); }
    inline WorkspaceAccessProperties& WithDeviceTypeChromeOs(const AccessPropertyValue& value) { SetDeviceTypeChromeOs(value); return *this;}
    inline WorkspaceAccessProperties& WithDeviceTypeChromeOs(AccessPropertyValue&& value) { SetDeviceTypeChromeOs(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can use zero client devices to access their
     * WorkSpaces.</p>
     */
    inline const AccessPropertyValue& GetDeviceTypeZeroClient() const{ return m_deviceTypeZeroClient; }
    inline bool DeviceTypeZeroClientHasBeenSet() const { return m_deviceTypeZeroClientHasBeenSet; }
    inline void SetDeviceTypeZeroClient(const AccessPropertyValue& value) { m_deviceTypeZeroClientHasBeenSet = true; m_deviceTypeZeroClient = value; }
    inline void SetDeviceTypeZeroClient(AccessPropertyValue&& value) { m_deviceTypeZeroClientHasBeenSet = true; m_deviceTypeZeroClient = std::move(value); }
    inline WorkspaceAccessProperties& WithDeviceTypeZeroClient(const AccessPropertyValue& value) { SetDeviceTypeZeroClient(value); return *this;}
    inline WorkspaceAccessProperties& WithDeviceTypeZeroClient(AccessPropertyValue&& value) { SetDeviceTypeZeroClient(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can use Linux clients to access their WorkSpaces.</p>
     */
    inline const AccessPropertyValue& GetDeviceTypeLinux() const{ return m_deviceTypeLinux; }
    inline bool DeviceTypeLinuxHasBeenSet() const { return m_deviceTypeLinuxHasBeenSet; }
    inline void SetDeviceTypeLinux(const AccessPropertyValue& value) { m_deviceTypeLinuxHasBeenSet = true; m_deviceTypeLinux = value; }
    inline void SetDeviceTypeLinux(AccessPropertyValue&& value) { m_deviceTypeLinuxHasBeenSet = true; m_deviceTypeLinux = std::move(value); }
    inline WorkspaceAccessProperties& WithDeviceTypeLinux(const AccessPropertyValue& value) { SetDeviceTypeLinux(value); return *this;}
    inline WorkspaceAccessProperties& WithDeviceTypeLinux(AccessPropertyValue&& value) { SetDeviceTypeLinux(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether users can access their WorkSpaces through a WorkSpaces Thin
     * Client.</p>
     */
    inline const AccessPropertyValue& GetDeviceTypeWorkSpacesThinClient() const{ return m_deviceTypeWorkSpacesThinClient; }
    inline bool DeviceTypeWorkSpacesThinClientHasBeenSet() const { return m_deviceTypeWorkSpacesThinClientHasBeenSet; }
    inline void SetDeviceTypeWorkSpacesThinClient(const AccessPropertyValue& value) { m_deviceTypeWorkSpacesThinClientHasBeenSet = true; m_deviceTypeWorkSpacesThinClient = value; }
    inline void SetDeviceTypeWorkSpacesThinClient(AccessPropertyValue&& value) { m_deviceTypeWorkSpacesThinClientHasBeenSet = true; m_deviceTypeWorkSpacesThinClient = std::move(value); }
    inline WorkspaceAccessProperties& WithDeviceTypeWorkSpacesThinClient(const AccessPropertyValue& value) { SetDeviceTypeWorkSpacesThinClient(value); return *this;}
    inline WorkspaceAccessProperties& WithDeviceTypeWorkSpacesThinClient(AccessPropertyValue&& value) { SetDeviceTypeWorkSpacesThinClient(std::move(value)); return *this;}
    ///@}
  private:

    AccessPropertyValue m_deviceTypeWindows;
    bool m_deviceTypeWindowsHasBeenSet = false;

    AccessPropertyValue m_deviceTypeOsx;
    bool m_deviceTypeOsxHasBeenSet = false;

    AccessPropertyValue m_deviceTypeWeb;
    bool m_deviceTypeWebHasBeenSet = false;

    AccessPropertyValue m_deviceTypeIos;
    bool m_deviceTypeIosHasBeenSet = false;

    AccessPropertyValue m_deviceTypeAndroid;
    bool m_deviceTypeAndroidHasBeenSet = false;

    AccessPropertyValue m_deviceTypeChromeOs;
    bool m_deviceTypeChromeOsHasBeenSet = false;

    AccessPropertyValue m_deviceTypeZeroClient;
    bool m_deviceTypeZeroClientHasBeenSet = false;

    AccessPropertyValue m_deviceTypeLinux;
    bool m_deviceTypeLinuxHasBeenSet = false;

    AccessPropertyValue m_deviceTypeWorkSpacesThinClient;
    bool m_deviceTypeWorkSpacesThinClientHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
