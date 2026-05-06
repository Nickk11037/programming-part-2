cmake_minimum_required(VERSION 3.20)
project(Lab10)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

# main
add_executable(main main.cpp)

# Google Test
enable_testing()

add_executable(tests tests/test_variant_utils.cpp)

target_link_libraries(tests gtest gtest_main)

add_test(NAME VariantTests COMMAND tests)