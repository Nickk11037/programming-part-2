# Lab03 – BankAccount

## 1. General Information

**Variant:** 4 – BankAccount  
The goal of this lab is to implement a simple class in C++ that represents a bank account and supports basic operations.

---

## 2. Task Analysis

The `BankAccount` class describes a simplified bank account.  
It stores account data and allows performing operations like deposit and withdrawal.

### Fields:
- `int accountNumber` – account number  
- `double balance` – current balance  
- `double creditLimit` – allowed credit  
- `bool blocked` – account status  
- `int operationsCount` – number of operations  

### Methods:
- constructor  
- `deposit()`  
- `withdraw()`  
- `canWithdraw()`  
- `blockAccount()` / `unblockAccount()`  

---

## 3. Implementation

The class is divided into two files:
- `BankAccount.h` (declaration)
- `BankAccount.cpp` (implementation)

Main logic:
- Deposit increases balance  
- Withdraw decreases balance if allowed  
- `canWithdraw()` checks limits and block status  
- Operations are counted  

---

## 4. UML Diagram

The UML diagram includes:
- private fields  
- public methods  

(see `uml/BankAccount.puml`)

---

## 5. Test Program

In `main()`:
- object is created  
- deposit and withdraw are tested  
- blocking is checked  
- results are printed  

---

## 6. Redundant Methods Analysis

Some setters are not necessary in real applications:

- `setBalance()` – breaks logic control  
- `setOperationsCount()` – should not be changed manually  

Better design:
- keep only essential methods like `deposit`, `withdraw`, and `getBalance`

---

## 7. Conclusion

In this lab, a BankAccount class was implemented.  
Basic OOP concepts such as encapsulation and method design were used.  
It also showed that not all getters and setters are needed in real projects.