cmake_minimum_required(VERSION 3.10)
project(BookProject)

set(CMAKE_CXX_STANDARD 17)

include_directories(public)

add_library(core
    private/Book.cpp
    private/Chapter.cpp
    private/Page.cpp
    private/Cover.cpp
    private/Index.cpp
)

add_executable(main main.cpp)
target_link_libraries(main core)

# Google Test
enable_testing()
find_package(GTest REQUIRED)

add_executable(tests tests/test_book.cpp)
target_link_libraries(tests core GTest::GTest GTest::Main)

add_test(NAME BookTests COMMAND tests)