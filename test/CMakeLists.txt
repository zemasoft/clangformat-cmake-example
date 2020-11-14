add_executable(hello_test
  hello_test.cpp
)

target_link_libraries(hello_test
  PRIVATE
    hello
)

add_test(NAME hello_test COMMAND hello_test)

target_clangformat_setup(hello_test)
