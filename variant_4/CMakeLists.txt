cmake_minimum_required(VERSION 3.15)
project(StudentGrades)

set(CMAKE_CXX_STANDARD 17)

# Include FetchContent module
include(FetchContent)

# Download and configure GTest
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.14.0
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

add_subdirectory(lib)
add_subdirectory(app)
add_subdirectory(tests)