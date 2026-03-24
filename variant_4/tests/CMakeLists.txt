enable_testing()

add_executable(tests test_grades.cpp)

target_link_libraries(tests PRIVATE grades GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)