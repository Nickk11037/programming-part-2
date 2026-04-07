find_package(GTest REQUIRED)

add_executable(tests test_grades.cpp)

target_link_libraries(tests GTest::GTest GTest::Main grades)

enable_testing()
add_test(NAME GradesTests COMMAND tests)