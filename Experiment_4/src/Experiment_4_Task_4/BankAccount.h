#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>

class BankAccount
{
    private:
        std::string accountNumber;
        std::string ownerName;
        double balance;

    public:
        BankAccount(std::string accNum, std::string owner, double initialBalance);

        ~BankAccount();

        void displayBalance() const;

        void deposit(double amount);

        void withdraw(double amount);
};

#endif