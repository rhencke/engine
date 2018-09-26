# Copyright 2018 The Fuchsia Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

cmake_minimum_required(VERSION 3.0.0)

project(rapidjson)

set(RAPIDJSON_INCLUDE_DIR ${CMAKE_CURRENT_BINARY_DIR}/include)

macro(rapidjson_export_hdrs)
  file(RELATIVE_PATH _file_path "${PROJECT_SOURCE_DIR}"
    "${CMAKE_CURRENT_SOURCE_DIR}")
  foreach(name ${ARGN})
    file(COPY "${name}.h" DESTINATION ${RAPIDJSON_INCLUDE_DIR}/${_file_path})
  endforeach()
endmacro()

add_subdirectory(rapidjson)

