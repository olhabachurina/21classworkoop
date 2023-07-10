#pragma once
#include <exception>
class InsufficientFundsException:public std::exception {
public:
    const char* what() const noexcept override {
        return "Insufficient funds in the account";
    }
};



