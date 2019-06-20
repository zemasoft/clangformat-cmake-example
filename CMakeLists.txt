cmake_minimum_required(VERSION 3.0)
project(ClangFormatCMakeExample)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/clangformat-cmake/cmake)

option(CLANGFORMAT "Setup clangformat target" ON)

add_library(hello
  hello.cpp
  hello.hpp
)

target_include_directories(hello PUBLIC .)

add_library(ClangFormatCMakeExample::hello ALIAS hello)

include(CTest)
add_subdirectory(test)

if(CLANGFORMAT)
  include(ClangFormat)

  target_clangformat_setup(ClangFormatCMakeExample::hello)
endif()
