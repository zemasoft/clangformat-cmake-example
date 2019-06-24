[![Language](https://img.shields.io/badge/language-CMake-blue.svg)](https://cmake.org/)
[![Licence](https://img.shields.io/badge/license-Boost%201.0-blue.svg)](http://www.boost.org/LICENSE_1_0.txt)

Introduction
============

This is a minimalistic C++ project which demonstrates the use of
[`clangformat-cmake`](https://github.com/zemasoft/clangformat-cmake)
project containing ClangFormat CMake module.

Requirements
============

The module itself requires CMake 3.0 or higher and any version of clang-format
installed. You will also need a C++ compiler for CMake to be able to generate
the build system.

Usage
=====

1) Obtain the project:

```bash
$ git clone https://github.com/zemasoft/clangformat-cmake-example
$ cd clangformat-cmake-example
$ git submodule --init --recursive
```

2) Generate the build system:

```bash
$ cmake . -Bbuild
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

Notes
=====

* Sources to play with:
  * [`hello.hpp`](hello.hpp)
  * [`hello.cpp`](hello.cpp)
  * [`test/hello_test.cpp`](test/hello_test.cpp)

* Format style configuration:
  * [`.clang-format`](.clang-format)

* If you want to use clang-format that is not on your seach path, you have to
  supply CMake with<br/>`-DCLANGFORMAT_EXECUTABLE=/path/to/clang-format`.
