#pragma once

class BankAccount {
private:
    int accountNumber;
    double balance;
    double creditLimit;
    bool blocked;
    int operationsCount;

public:
    BankAccount(int accountNumber, double balance,
                double creditLimit, bool blocked,
                int operationsCount);

    void deposit(double amount);
    bool withdraw(double amount);
    bool canWithdraw(double amount) const;

    void blockAccount();
    void unblockAccount();

    int getAccountNumber() const;
    void setAccountNumber(int value);

    double getBalance() const;
    void setBalance(double value);

    double getCreditLimit() const;
    void setCreditLimit(double value);

    bool getBlocked() const;
    void setBlocked(bool value);

    int getOperationsCount() const;
    void setOperationsCount(int value);
};