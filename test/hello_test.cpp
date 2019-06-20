// Copyright Tomas Zeman 2019.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <cstdlib>  // EXIT_FAILURE, EXIT_SUCCESS

#include "hello.hpp"

int main()
{
  return hello() == "Hello, World!" ? EXIT_SUCCESS : EXIT_FAILURE;
}
