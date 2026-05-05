cmake_minimum_required(VERSION 3.15)

project(CompanyEmployees)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

set(SOURCES
    main.cpp
    src/Employee.cpp
    src/Engineer.cpp
    src/SeniorEngineer.cpp
    src/Manager.cpp
)

add_executable(CompanyEmployees ${SOURCES})