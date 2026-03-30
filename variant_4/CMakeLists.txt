cmake_minimum_required(VERSION 3.20)
project(variant04)

enable_testing()

include(FetchContent)

# Automatically download fmt
FetchContent_Declare(
  fmt
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git
  GIT_TAG 10.1.1
)
FetchContent_MakeAvailable(fmt)

# Automatically download googletest
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.14.0
)
FetchContent_MakeAvailable(googletest)

add_subdirectory(lib)
add_subdirectory(app)
add_subdirectory(tests)