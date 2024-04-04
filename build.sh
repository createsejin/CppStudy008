#!/bin/bash

if [[ "$1" = "cb" ]]; then
  cd build
  cmake -G Ninja -D CMAKE_LINKER=/usr/bin/lld \
    -D CMAKE_CXX_COMPILER=/usr/bin/clang++ \
    -D CMAKE_C_COMPILER=/usr/bin/clang \
    -D CMAKE_EXPORT_COMPILE_COMMANDS=1 \
    -D CMAKE_BUILD_TYPE=DEBUG ..
  cmake --build .
fi

if [[ "$1" = "config" || "$1" = "c" ]]; then
  cd build
  cmake -G Ninja -D CMAKE_LINKER=/usr/bin/lld \
    -D CMAKE_CXX_COMPILER=/usr/bin/clang++ \
    -D CMAKE_C_COMPILER=/usr/bin/clang \
    -D CMAKE_EXPORT_COMPILE_COMMANDS=1 \
    -D CMAKE_BUILD_TYPE=DEBUG ..
fi

if [[ "$1" = "build" || "$1" = "b" ]]; then
  cd build
  cmake --build .
fi

if [[ "$1" = "run" || "$1" = "r" ]]; then
  /home/bae/Projects/CppStudy008/build/CppStudy008
fi
