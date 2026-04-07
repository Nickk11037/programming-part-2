#include "BankAccount.h"

BankAccount::BankAccount(int accountNumber, double balance, double creditLimit, bool blocked, int operationsCount)
    : accountNumber(accountNumber), balance(balance), creditLimit(creditLimit),
      blocked(blocked), operationsCount(operationsCount) {}

void BankAccount::deposit(double amount) {
    if (amount > 0 && !blocked) {
        balance += amount;
        operationsCount++;
    }
}

bool BankAccount::canWithdraw(double amount) const {
    return !blocked && amount > 0 && (balance + creditLimit >= amount);
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

int BankAccount::getAccountNumber() const { return accountNumber; }
void BankAccount::setAccountNumber(int value) { accountNumber = value; }

double BankAccount::getBalance() const { return balance; }
void BankAccount::setBalance(double value) { balance = value; }

double BankAccount::getCreditLimit() const { return creditLimit; }
void BankAccount::setCreditLimit(double value) { creditLimit = value; }

bool BankAccount::getBlocked() const { return blocked; }
void BankAccount::setBlocked(bool value) { blocked = value; }

int BankAccount::getOperationsCount() const { return operationsCount; }
void BankAccount::setOperationsCount(int value) { operationsCount = value; }