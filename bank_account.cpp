#include "bank_account.h"
#include "insufficient_funds_exception.h"
#include <iostream>
BankAccount::BankAccount(double initialBalance) : balance(initialBalance) {}

void BankAccount::withdraw(double amount) {
    if (amount > balance) {
        throw InsufficientFundsException();
    }
    balance -= amount;
    std::cout << "Withdrawn: " << amount << std::endl;
}

void BankAccount::deposit(double amount) {
    balance += amount;
    std::cout << "Deposited: " << amount << std::endl;
}

double BankAccount::getBalance() const {
    return balance;
}