cmake_minimum_required(VERSION 3.10)
project(HospitalLab)

set(CMAKE_CXX_STANDARD 17)

include_directories(public)

add_executable(main
    main.cpp
    private/Hospital.cpp
    private/Doctor.cpp
    private/Nurse.cpp
    private/Patient.cpp
    private/Ward.cpp
)

add_subdirectory(tests)