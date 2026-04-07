add_executable(tests test_bank.cpp)
target_link_libraries(tests banklib gtest gtest_main)

add_test(NAME BankTests COMMAND tests)