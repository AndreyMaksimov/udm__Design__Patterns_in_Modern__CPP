cmake_minimum_required(VERSION 3.30)
project(design_patterns_modern_cpp)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(Helpers)

#add_subdirectory(02_SOLID_Design_principles)
#add_subdirectory(03_Builder)
#add_subdirectory(04_Factories)
#add_subdirectory(05_Prototype)
#add_subdirectory(06_Singleton)
#add_subdirectory(07_Adapter)
add_subdirectory(08_Bridge)
