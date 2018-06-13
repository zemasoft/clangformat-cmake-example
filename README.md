[![Language](https://img.shields.io/badge/language-CMake-blue.svg)](https://cmake.org/)
[![Licence](https://img.shields.io/badge/license-Boost%201.0-blue.svg)](http://www.boost.org/LICENSE_1_0.txt)

Introduction
============

This is an example project which demonstrates the use of
[`clangformat-cmake`](https://github.com/zemasoft/clangformat-cmake)
CMake module on a minimalistic C++ project.

Requirements
============

The module itself requires CMake 2.8 or higher and any version of clang-format.
This example project requires a C++ compiler on top for CMake to be able to
generate a build system and potentially to build the project.

Usage
=====

First, generate the build system:

```bash
$ cmake . -Bbuild
```

Then, you can format sources anytime using `clangformat` target:

```bash
$ cmake --build build/ --target clangformat
```

Finally, you can try to build the project:

```bash
$ cmake --build build/
```
