# Sample CMake Project

Creating a CMake project may be cumbersome and there is no need to always start it from scratch. Therefore, I have created this sample project that covers several aspects you may need: creating a library, creating an executable, linking them and including headers. It also tries to follow Modern CMake best practices.

# Getting started

Things can be a little different whether you are developing on Windows or Linux.

# Linux

In a Debian system (e.g. Ubuntu), most dependencies should be available out of the box. If this is not the case you can do:

```
$ sudo apt-get update && sudo apt-get upgrade
$ sudo apt-get install cmake
$ sudo apt install clang-11 --install-suggests
$ source ~/.bashrc
```

Now you are ready to build the project:
```
$ mkdir build && cd build
$ cmake ..
$ make -j
```

# Windows

Install CMake and the build tools it relies on. I suggest using the LLVM toolchain, made available by the [MinGW project](https://www.mingw-w64.org/).

1. Download the pre-built toolchain (w64devkit) for Windows from [this link](https://www.mingw-w64.org/downloads/#llvm-mingw).
1. Extract it to _C:\Program Files\<file_name>_. In My case it is: _C:\Program Files\llvm-mingw-20230320-msvcrt-x86_64_
1. Add the directory you just created to your _Path_ variable : _Windows search >> Edit the system environmental variables >> Environmental variables ... >> User variables ... >> Path >> Edit >> New_ 
1. Follow instructions on the official website for [Installing CMake](https://cmake.org/install/).
1. Setup your environment variables by runing `.\setup_env.ps1` on the same PowerShell used for building.

This is it! Time to build:
```
$ mkdir build
$ cd build
$ cmake ..
$ cmake --build .
```
