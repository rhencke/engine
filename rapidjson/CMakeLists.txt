# Copyright 2018 The Fuchsia Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

rapidjson_export_hdrs(
  allocators
  document
  encodedstream
  encodings
  filereadstream
  filewritestream
  fwd
  istreamwrapper
  memorybuffer
  memorystream
  ostreamwrapper
  pointer
  prettywriter
  rapidjson
  reader
  schema
  stream
  stringbuffer
  writer
)

add_subdirectory(error)
add_subdirectory(internal)
