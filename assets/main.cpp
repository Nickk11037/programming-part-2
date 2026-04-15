#include <iostream>
#include "BankAccount.h"

int main() {
    BankAccount acc(12345, 1000, 500, false, 0);

    std::cout << "Initial balance: " << acc.getBalance() << std::endl;

    acc.deposit(200);
    std::cout << "After deposit: " << acc.getBalance() << std::endl;

    if (acc.withdraw(300))
        std::cout << "Withdraw successful\n";
    else
        std::cout << "Withdraw failed\n";

    if (acc.canWithdraw(2000))
        std::cout << "Can withdraw 2000\n";
    else
        std::cout << "Cannot withdraw 2000\n";

    acc.blockAccount();
    acc.deposit(100); 

    std::cout << "After block attempt: " << acc.getBalance() << std::endl;

    acc.unblockAccount();
    acc.deposit(100);

    std::cout << "Final balance: " << acc.getBalance() << std::endl;
    std::cout << "Operations: " << acc.getOperationsCount() << std::endl;

    return 0;
}