#include <cstdlib>  // EXIT_FAILURE, EXIT_SUCCESS

#include "hello.hpp"

int main()
{
  return hello() == "Hello, World!" ? EXIT_SUCCESS : EXIT_FAILURE;
}
