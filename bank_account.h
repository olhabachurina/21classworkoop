#pragma once
#include "insufficient_funds_exception.h"
class BankAccount
{
private:
    double balance;

public:
    BankAccount(double initialBalance);

    void withdraw(double amount);

    void deposit(double amount);

    double getBalance() const;
};


