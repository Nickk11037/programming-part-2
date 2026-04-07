find_package(GTest REQUIRED)

add_executable(tests test_bank.cpp)
target_link_libraries(tests banklib GTest::GTest GTest::Main)

add_test(NAME BankTests COMMAND tests)