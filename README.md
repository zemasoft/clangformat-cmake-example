[![language.badge]][language.url] [![license.badge]][license.url] [![travis.badge]][travis.url]

# ClangFormat.cmake module example

This is a minimalistic C++ project which demonstrates the use of
ClangFormat.cmake module which can be found
[here](https://github.com/zemasoft/clangformat-cmake).

## Requirements

The module itself requires CMake 3.0 or higher and any version of clang-format
installed. You will also need a C++ compiler for CMake to be able to generate
the build system.

## Usage

1) Obtain the project:

   ```bash
   $ git clone https://github.com/zemasoft/clangformat-cmake-example
   $ cd clangformat-cmake-example
   $ git submodule update --init --recursive
   ```

2) Generate the build system:

   ```bash
   $ cmake -S . -Bbuild
   ```

3) Format sources anytime using `clangformat` target:

   ```bash
   $ cmake --build build --target clangformat
   ```

   or:

   ```bash
   $ cd build
   $ make clangformat
   ```

4) Build the project:

   ```bash
   $ cmake --build build
   ```

   or:

   ```bash
   $ cd build
   $ make
   ```

## Notes

* Sources to play with:
  * [`hello.hpp`](src/hello.hpp)
  * [`hello.cpp`](src/hello.cpp)
  * [`test/hello_test.cpp`](test/hello_test.cpp)

* Format style configuration:
  * [`.clang-format`](.clang-format)

* If you want to use clang-format that is not on your seach path, you have to
  supply CMake with<br/>`-DCLANGFORMAT_EXECUTABLE=/path/to/clang-format`.

[language.url]:   https://cmake.org/
[language.badge]: https://img.shields.io/badge/language-CMake-blue.svg

[license.url]:    http://www.boost.org/LICENSE_1_0.txt
[license.badge]:  https://img.shields.io/badge/license-Boost%201.0-blue.svg

[travis.url]:     https://travis-ci.org/zemasoft/clangformat-cmake-example
[travis.badge]:   https://travis-ci.org/zemasoft/clangformat-cmake-example.svg?branch=master
