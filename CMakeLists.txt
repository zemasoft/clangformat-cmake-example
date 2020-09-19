cmake_minimum_required(VERSION 3.0)
project(ClangFormatCMakeExample)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/clangformat-cmake/cmake)

add_library(hello
  src/hello.cpp
  src/hello.hpp
)

target_include_directories(hello PUBLIC src)

add_library(ClangFormatCMakeExample::hello ALIAS hello)

include(ClangFormat)
target_clangformat_setup(ClangFormatCMakeExample::hello)

include(CTest)
add_subdirectory(test)
