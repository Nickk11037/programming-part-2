add_executable(tests test_grades.cpp)

target_link_libraries(tests gtest gtest_main grades)

enable_testing()
add_test(NAME GradesTests COMMAND tests)