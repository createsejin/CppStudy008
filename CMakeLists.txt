cmake_minimum_required(VERSION 3.28)
project(CppStudy008 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED)
set(CMAKE_TOOLCHAIN_FILE /home/bae/vcpkg/scripts/buildsystems/vcpkg.cmake)
# set(CMAKE_PREFIX_PATH /home/bae/vcpkg/packages/fmt_x64-linux/share/fmt)
# include_directories(/home/bae/vcpkg/packages/fmt_x64-linux/include)

find_package(fmt CONFIG REQUIRED)

add_executable(CppStudy008 main.cpp
  study/study13.h
  study/study13.cpp
)

target_link_libraries(CppStudy008 PRIVATE fmt::fmt-header-only)
