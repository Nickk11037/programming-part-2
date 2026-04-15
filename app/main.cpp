#include <iostream>
#include "BankAccount.h"

int main() {
    BankAccount acc(123, 1000, 500, false, 0);

    acc.deposit(200);
    acc.withdraw(300);

    std::cout << acc.getBalance() << std::endl;
    std::cout << acc.getOperationsCount() << std::endl;

    return 0;
}