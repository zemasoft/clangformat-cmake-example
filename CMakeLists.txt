cmake_minimum_required(VERSION 2.8)
project(ClangFormatCMakeExample)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/clangformat-cmake/cmake)

option(CLANGFORMAT "Setup clangformat target" ON)

include_directories(.)

add_library(hello hello.cpp)

include(CTest)
add_subdirectory(test)

if(CLANGFORMAT)
  include(ClangFormat)

  set(clangformat_srcs hello.hpp
                       hello.cpp)

  clangformat_setup("${clangformat_srcs}")
endif()
