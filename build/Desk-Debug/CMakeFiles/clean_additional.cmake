# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/OpenFRW_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/OpenFRW_autogen.dir/ParseCache.txt"
  "OpenFRW_autogen"
  )
endif()
