#include <iostream>
#include "BankAccount.h"

using namespace std;

int main()
{
    BankAccount account("123456789", "John Doe", 1000.0);

    int choice;
    double amount;

    do
    {
        cout << "==== Bank Account Menu ====" << endl;
        cout << "1. Display Balance" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            account.displayBalance();
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
            break;

        case 3:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
            break;

        case 4:
            cout << "Exit program." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}