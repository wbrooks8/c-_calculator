cmake_minimum_required(VERSION 4.3)
project(c___caluculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(c___caluculator main.cpp
        CalculationHandler/calcHandler.cpp
        CalculationHandler/calcHandler.h)
