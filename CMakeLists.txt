cmake_minimum_required(VERSION 2.8.12)
project(celia)

add_subdirectory(pybind11)
pybind11_add_module(celia src/bindings.cpp)
set_target_properties(celia PROPERTIES OUTPUT_NAME celia)
