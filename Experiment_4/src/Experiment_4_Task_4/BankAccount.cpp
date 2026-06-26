#include "BankAccount.h"
#include <iostream>
#include <iomanip>

using namespace std;

BankAccount::BankAccount(string accNum, string owner, double initialBalance) : accountNumber(accNum), ownerName(owner), balance(initialBalance)
{
    if (balance < 0)
    {
        balance = 0;
        cout << "Warning: Initial balance cannot be negative. Setting balance to 0." << endl;
    }
}

BankAccount::~BankAccount()
{
    cout << "BankAccount object destroyed." << endl;
}

void BankAccount::displayBalance() const
{
    cout << fixed << setprecision(2) << "Current balance: " << balance << endl;
}

void BankAccount::deposit(double amount)
{
    if (amount > 0)
    {
        balance += amount;
        cout << fixed << setprecision(2) << "Deposit " << amount << " successful." << endl;
    }
    else
    {
        cout << "Deposit failed: amount must be positive." << endl;
    }
}

void BankAccount::withdraw(double amount)
{
    if (amount <= 0)
    {
        cout << "Withdrawal failed: amount must be positive." << endl;
    }
    else if (amount > balance)
    {
        cout << "Withdrawal failed: insufficient balance." << endl;
    }
    else
    {
        balance -= amount;
        cout << fixed << setprecision(2) << "Withdraw " << amount << " successful." << endl;
    }
}