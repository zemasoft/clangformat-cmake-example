project(ClangFormatCMakeExampleTest)

add_executable(hello_test
  hello_test.cpp
)

target_link_libraries(hello_test PRIVATE hello::hello)

add_test(NAME hello_test COMMAND hello_test)

if(CLANGFORMAT)
  include(ClangFormat)

  clangformat_target_setup(hello_test)
endif()
