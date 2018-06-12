project(Test)

add_executable(hello_test hello_test.cpp)
target_link_libraries(hello_test hello)
add_test(hello_test ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/hello_test)

if(CLANGFORMAT)
  include(ClangFormat)

  set(clangformat_srcs hello_test.cpp)

  clangformat_setup("${clangformat_srcs}")
endif()
