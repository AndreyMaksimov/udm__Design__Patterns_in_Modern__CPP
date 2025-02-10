cmake_minimum_required(VERSION 3.30)
project(design_patterns_modern_cpp)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(Helpers)

add_subdirectory(02_SOLID_Design_principles)

#set(target_exe design_patterns_modern_cpp)
#add_executable(${target_exe} main.cpp)
#target_link_libraries(${target_exe} PUBLIC)
