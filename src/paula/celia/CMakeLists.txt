cmake_minimum_required(VERSION 3.5)

project(hello)

############################################################
# Create a library
############################################################

#Generate the static library from the library sources
add_library(hello STATIC
        src/hello.cpp
        )
set_property(TARGET hello PROPERTY POSITION_INDEPENDENT_CODE ON)

target_include_directories(hello
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        )


############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(hello_binary
        src/main.cpp
        )

# link the new hello_library target with the hello_binary target
target_link_libraries( hello_binary
        PRIVATE
        hello
        )
