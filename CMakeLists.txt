cmake_minimum_required(VERSION 3.14)
project(lab04)

set(CMAKE_CXX_STANDARD 17)

add_library(banklib src/BankAccount.cpp)
target_include_directories(banklib PUBLIC include)

add_executable(app app/main.cpp)
target_link_libraries(app banklib)

enable_testing()
add_subdirectory(tests)
