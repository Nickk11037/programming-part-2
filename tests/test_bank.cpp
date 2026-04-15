#include <gtest/gtest.h>
#include "BankAccount.h"

TEST(BankAccountTest, Constructor) {
    BankAccount acc(1, 100, 200, false, 0);
    EXPECT_EQ(acc.getAccountNumber(), 1);
    EXPECT_EQ(acc.getBalance(), 100);
}

TEST(BankAccountTest, Deposit) {
    BankAccount acc(1, 100, 200, false, 0);
    acc.deposit(50);
    EXPECT_EQ(acc.getBalance(), 150);
}

TEST(BankAccountTest, WithdrawSuccess) {
    BankAccount acc(1, 100, 200, false, 0);
    EXPECT_TRUE(acc.withdraw(150));
}

TEST(BankAccountTest, WithdrawFail) {
    BankAccount acc(1, 100, 0, false, 0);
    EXPECT_FALSE(acc.withdraw(200));
}

TEST(BankAccountTest, BlockedAccount) {
    BankAccount acc(1, 100, 200, true, 0);
    EXPECT_FALSE(acc.withdraw(50));
}