cmake_minimum_required(VERSION 3.10)
project(lab03)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(lab03
    assets/main.cpp
    src/BankAccount.cpp
)
