enable_testing()

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.14.0
)
FetchContent_MakeAvailable(googletest)

add_executable(runTests
    test_hospital.cpp
    ../private/Hospital.cpp
    ../private/Doctor.cpp
)

target_link_libraries(runTests GTest::gtest GTest::gtest_main pthread)

add_test(NAME runTests COMMAND runTests)