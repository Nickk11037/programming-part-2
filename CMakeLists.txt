cmake_minimum_required(VERSION 3.15)

project(Lab09)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lab09
    main.cpp
    src/File.cpp
    src/TextFile.cpp
    src/Compressible.cpp
    src/Encryptable.cpp
    src/SecureCompressedFile.cpp
)

target_include_directories(Lab09 PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/src
)