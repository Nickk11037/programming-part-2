#include "BankAccount.h"


BankAccount::BankAccount(int accountNumber, double balance,
                         double creditLimit, bool blocked,
                         int operationsCount) {
    this->accountNumber = accountNumber > 0 ? accountNumber : 1;
    this->balance = balance;
    this->creditLimit = creditLimit >= 0 ? creditLimit : 0;
    this->blocked = blocked;
    this->operationsCount = operationsCount >= 0 ? operationsCount : 0;
}

void BankAccount::deposit(double amount) {
    if (amount > 0 && !blocked) {
        balance += amount;
        operationsCount++;
    }
}

bool BankAccount::canWithdraw(double amount) const {
    if (blocked || amount <= 0)
        return false;

    return (balance - amount) >= -creditLimit;
}

bool BankAccount::withdraw(double amount) {
    if (canWithdraw(amount)) {
        balance -= amount;
        operationsCount++;
        return true;
    }
    return false;
}

void BankAccount::blockAccount() {
    blocked = true;
}

void BankAccount::unblockAccount() {
    blocked = false;
}

int BankAccount::getAccountNumber() const {
    return accountNumber;
}

void BankAccount::setAccountNumber(int value) {
    if (value > 0)
        accountNumber = value;
}

double BankAccount::getBalance() const {
    return balance;
}

void BankAccount::setBalance(double value) {
    balance = value;
}

double BankAccount::getCreditLimit() const {
    return creditLimit;
}

void BankAccount::setCreditLimit(double value) {
    if (value >= 0)
        creditLimit = value;
}

bool BankAccount::getBlocked() const {
    return blocked;
}

void BankAccount::setBlocked(bool value) {
    blocked = value;
}

int BankAccount::getOperationsCount() const {
    return operationsCount;
}

void BankAccount::setOperationsCount(int value) {
    if (value >= 0)
        operationsCount = value;
}