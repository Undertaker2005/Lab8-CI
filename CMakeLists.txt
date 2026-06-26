cmake_minimum_required(VERSION 3.14)

project(Lab8CI)

set(CMAKE_CXX_STANDARD 17)

add_executable(
    tests
    src/calculator.cpp
    tests/test_calculator.cpp
)

enable_testing()

add_test(NAME CalculatorTests COMMAND tests)