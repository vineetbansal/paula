cmake_minimum_required(VERSION 3.13)

project(hello)

set(PROJECT_VERSION "1.0" CACHE STRING "The version number of the C project")

configure_file (
	"${PROJECT_SOURCE_DIR}/include/version.h.in"
	"${PROJECT_BINARY_DIR}/include/version.h"
)

add_library(hello STATIC src/hello.cpp)
find_package(OpenMP REQUIRED)
target_link_libraries(hello PUBLIC OpenMP::OpenMP_CXX)
set_property(TARGET hello PROPERTY POSITION_INDEPENDENT_CODE ON)

target_include_directories(hello
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_BINARY_DIR}/include
)

add_executable(hello_binary src/main.cpp)

target_link_libraries(hello_binary PRIVATE hello)

