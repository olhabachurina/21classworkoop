// 21classworkoop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "bank_account.h"
#include "insufficient_funds_exception.h"
int main()
{
    BankAccount account(5000);// �������� ������� BankAccount � ��������� �������� 1000
    std::cout << "Initial balance: " << account.getBalance() << std::endl;  // ����� ���������� �������
    double amountToWithdraw = 7000;  // ������������� ����� ������
    std::cout << "Requested amount to withdraw: " << amountToWithdraw << std::endl;  // ����� ����������� ����� ������
    try {
        account.withdraw(7000);// ������� ����� 7000 �� �����
    }
    catch (const InsufficientFundsException& ex) {// �������� ���������� InsufficientFundsException
        std::cout << "Exception caught: " << ex.what() << std::endl;// ����� ��������� �� ������
    
    }

    account.deposit(500);// ���������� ����� �� 500
    std::cout << "Current balance: " << account.getBalance() << std::endl;// ����� �������� �������

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
