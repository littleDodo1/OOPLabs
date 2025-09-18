cmake_minimum_required(VERSION 2.8)	
project(is_valid)

set(CMAKE_CXX_STANDARD 14)

add_library(valid STATIC src/is_valid.cpp)
add_executable(main main.cpp)

target_link_libraries(main valid)

enable_testing()
find_package(GTest REQUIRED)

add_executable(test_is_valid test/test01.cpp)
target_link_libraries(test_is_valid valid GTest::gtest) 

add_test(NAME IsValidTests COMMAND test_is_valid)