[![Language](https://img.shields.io/badge/language-CMake-blue.svg)](https://cmake.org/)
[![Licence](https://img.shields.io/badge/license-Boost%201.0-blue.svg)](http://www.boost.org/LICENSE_1_0.txt)

Introduction
============

An example project for
[`clangformat-cmake`](https://github.com/zemasoft/clangformat-cmake)
CMake module. It demonstrates the usage of the module on a minimalistic C++
project.

Requirements
============

The module itself requires CMake 2.8 or higher and any version of clang-format.
This example project requires a C++ compiler on top for CMake to be able to
generate a build system and potentially to build the project.

Usage
=====

First, generate the build system with:

```bash
$ cmake . -Bbuild
```

Then, you can format the sources anytime with:

```bash
$ cmake --build build/ --target clangformat
```
