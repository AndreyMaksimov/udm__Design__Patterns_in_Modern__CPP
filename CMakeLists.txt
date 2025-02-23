cmake_minimum_required(VERSION 3.30)
project(design_patterns_modern_cpp)

set(CMAKE_CXX_STANDARD 23)

find_library(GTEST_LIB NAMES "gtest")

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")
include(Helpers)



#add_subdirectory(02_SOLID_Design_principles)
#add_subdirectory(03_Builder)
#add_subdirectory(04_Factories)
#add_subdirectory(05_Prototype)
#add_subdirectory(06_Singleton)
#add_subdirectory(07_Adapter)
#add_subdirectory(08_Bridge)
#add_subdirectory(09_Composite)
#add_subdirectory(10_Decorator)
#add_subdirectory(11_Facade)
#add_subdirectory(12_Flyweight)
#add_subdirectory(13_Proxy)
#add_subdirectory(14_Chain_of_Responsibility)
#add_subdirectory(15_Command)
#add_subdirectory(16_Interpreter)
#add_subdirectory(17_Iterator)
#add_subdirectory(18_Mediator)
#add_subdirectory(19_Memento)
#add_subdirectory(20_Observer)
add_subdirectory(21_State)

