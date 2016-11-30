cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(hsockslib CXX)

set_property(GLOBAL PROPERTY USE_FOLDERS "ON")
set(CMAKE_DEBUG_POSTFIX "d")
set(OUTPUT_DIR "${CMAKE_SOURCE_DIR}/Output")

add_definitions(-DHSOCKS_EXPORT)
add_definitions(-DMAJOR_VERSION=0
                -DMINOR_VERSION=0
                -DPATCH_VERSION=1)

include_directories("Sources")
include_directories("Sources/Public")

include("CMake/Utilities.cmake")

add_subdirectory(Sources)