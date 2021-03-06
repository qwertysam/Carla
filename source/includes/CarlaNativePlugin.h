﻿/*
 * Carla Plugin Host
 * Copyright (C) 2011-2018 Filipe Coelho <falktx@falktx.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * For a full copy of the GNU General Public License see the doc/GPL.txt file.
 */

#ifndef CARLA_NATIVE_PLUGIN_H_INCLUDED
#define CARLA_NATIVE_PLUGIN_H_INCLUDED

#include "CarlaBackend.h"
#include "CarlaNative.h"

/*!
 * Get the absolute filename of this carla library.
 */
CARLA_EXPORT const char* carla_get_library_filename();

/*!
 * Get the folder where this carla library resides.
 */
CARLA_EXPORT const char* carla_get_library_folder();

/*!
 * Get the native plugin descriptor for the carla-rack plugin.
 */
CARLA_EXPORT const NativePluginDescriptor* carla_get_native_rack_plugin();

/*!
 * Get the native plugin descriptor for the carla-patchbay plugin.
 */
CARLA_EXPORT const NativePluginDescriptor* carla_get_native_patchbay_plugin();

#ifdef __cplusplus
/*!
 * Get the internal CarlaEngine instance.
 */
CARLA_EXPORT CarlaBackend::CarlaEngine* carla_get_native_plugin_engine(const NativePluginDescriptor* desc, NativePluginHandle handle);
#endif

#endif /* CARLA_NATIVE_PLUGIN_H_INCLUDED */
