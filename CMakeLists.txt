cmake_minimum_required(VERSION 2.8.12)
project(ext)

add_subdirectory(pybind11)
pybind11_add_module(ext src/bindings.cpp)
