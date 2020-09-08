cmake_minimum_required(VERSION 3.13)
project(ext)
set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory(pybind11)
pybind11_add_module(ext src/bindings.cpp)

add_subdirectory(src/paula/celia)

target_link_libraries(ext PRIVATE hello)
find_package(OpenMP REQUIRED)
target_link_libraries(ext PUBLIC OpenMP::OpenMP_CXX)

