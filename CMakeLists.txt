cmake_minimum_required(VERSION 3.0)
project(ClangFormatCMakeExample)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/clangformat-cmake/cmake)

option(CLANGFORMAT "Setup clangformat target" ON)

add_library(hello
  hello.cpp
  hello.hpp
)

add_library(hello::hello ALIAS hello)

target_include_directories(hello PUBLIC .)

include(CTest)
add_subdirectory(test)

if(CLANGFORMAT)
  include(ClangFormat)

  set(clangformat_srcs hello.hpp
                       hello.cpp)

  clangformat_setup("${clangformat_srcs}")
endif()
