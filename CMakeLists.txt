cmake_minimum_required(VERSION 3.15)

project(LibraryAccounting)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

include_directories(include)

add_library(LibraryLib
    src/Book.cpp
    src/Library.cpp
)

add_executable(LibraryApp
    examples/main.cpp
)

target_link_libraries(LibraryApp LibraryLib)


add_subdirectory(tests)


option(ENABLE_SANITIZERS "Enable sanitizers" OFF)

if(ENABLE_SANITIZERS)
    target_compile_options(LibraryLib PUBLIC
        -fsanitize=address,undefined
    )

    target_link_options(LibraryLib PUBLIC
        -fsanitize=address,undefined
    )
endif()