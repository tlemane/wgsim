cmake_minimum_required(VERSION 3.13.0)
project(wgsim LANGUAGES C)

if (NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

find_package(ZLIB REQUIRED)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_C_FLAGS_RELEASE "-O3 -DNDEBUG")
set(CMAKE_C_FLAGS_DEBUG "-O0 -g")

include_directories(ZLIB_INCLUDE_DIRS)
add_library(wgsim wgsim.c)
set_target_properties(wgsim PROPERTIES PUBLIC_HEADER "wgsim.h")