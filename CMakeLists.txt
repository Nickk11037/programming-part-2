cmake_minimum_required(VERSION 3.20)
project(lab13)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(public)

add_executable(lab13
    main.cpp
    private/StringUtils.cpp
    private/Record.cpp
    private/ReportBuilder.cpp
)

add_executable(test_text_processing
    tests/test_text_processing.cpp
    private/StringUtils.cpp
    private/Record.cpp
    private/ReportBuilder.cpp
)