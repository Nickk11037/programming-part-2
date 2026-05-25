cmake_minimum_required(VERSION 3.15)

project(Lab11FixedQueue)

set(CMAKE_CXX_STANDARD 20)

enable_testing()

include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

FetchContent_MakeAvailable(googletest)

include_directories(include)

add_executable(
        Lab11
        main.cpp
        src/DemoHelpers.cpp
)

add_executable(
        QueueTests
        tests/test_fixed_queue.cpp
)

target_include_directories(QueueTests PRIVATE include)

target_link_libraries(
        QueueTests
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(QueueTests)
