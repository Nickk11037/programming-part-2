cmake_minimum_required(VERSION 3.20)

project(lab14_sequence_containers)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(
    lab14
    src/main.cpp
    src/Record.cpp
    src/ContainerExperiments.cpp
    src/ContainerReport.cpp
)

add_executable(
    tests
    tests/SequenceContainerTests.cpp
    src/Record.cpp
    src/ContainerExperiments.cpp
    src/ContainerReport.cpp
)