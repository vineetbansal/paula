cmake_minimum_required(VERSION 3.13)
project(ext)
set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory(pybind11)
pybind11_add_module(ext src/bindings.cpp)

find_library(HELLO_LIBRARY hello HINTS src/paula/celia/build)
target_link_libraries(ext PRIVATE ${HELLO_LIBRARY})
find_package(OpenMP REQUIRED)
target_link_libraries(ext PUBLIC OpenMP::OpenMP_CXX)

