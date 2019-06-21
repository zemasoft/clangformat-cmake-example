project(ClangFormatCMakeExampleTest)

add_executable(hello_test
  hello_test.cpp
)

target_link_libraries(hello_test PRIVATE ClangFormatCMakeExample::hello)

add_executable(ClangFormatCMakeExample::hello_test ALIAS hello_test)

add_test(NAME hello_test COMMAND ClangFormatCMakeExample::hello_test)

target_clangformat_setup(ClangFormatCMakeExample::hello_test)
