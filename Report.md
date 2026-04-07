# Lab04 Report
## BankAccount Class

---

## 1. Project Structure
```
lab04/
│── CMakeLists.txt
│── README.md
├── include/BankAccount.h
├── src/BankAccount.cpp
├── app/main.cpp
├── tests/{CMakeLists.txt, test_bank.cpp}
├── uml/diagram.puml
```

---

## 2. Class Overview
Fields: `accountNumber`, `balance`, `creditLimit`, `blocked`, `operationsCount`.

Main methods: `deposit`, `withdraw`, `canWithdraw`, `blockAccount`, `unblockAccount`.

---

## 3. Library (CMake)
```
add_library(banklib src/BankAccount.cpp)
target_include_directories(banklib PUBLIC include)
```

---

## 4. Demo Application
`app/main.cpp` creates an object, performs deposit/withdraw, prints results.

---

## 5. Unit Tests
GoogleTest is used. Covered:
- constructor
- deposit
- withdraw (success/fail)
- blocked account

---

## 6. Build and Run
```
cmake -S . -B build
cmake --build build
./build/app
ctest --test-dir build --output-on-failure
```

---

## 7. Result
All tests pass, confirming correct behavior, including boundary cases.

---

## 8. UML
Diagram is in `uml/diagram.puml`.

---

## 9. Conclusion
The class is implemented as a library with a demo app and unit tests; CMake builds and runs all targets successfully.
