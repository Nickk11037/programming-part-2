cmake_minimum_required(VERSION 3.15)
project(CompanyHierarchy)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main
    main.cpp
    src/Employee.cpp
    src/Engineer.cpp
    src/SeniorEngineer.cpp
    src/Manager.cpp
)