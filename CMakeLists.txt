cmake_minimum_required(VERSION 3.3)

project(asm_app)

# Set C++17
set (CMAKE_CXX_STANDARD 17)

# Set warning flag to all
if(MSVC)
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
endif()

# Set warning flag to all
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -W4")

# Set source file to main.cpp
set (SOURCE_FILES src/main.cpp)

# Add executable to the program
add_executable (asm_app ${SOURCE_FILES})