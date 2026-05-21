#include <iostream>
using namespace std;

int main() {
    const unsigned int quarter = 25;
    const unsigned int dime = 10;
    const unsigned int nickel = 5;
    const unsigned int penny = 1;

    unsigned int numQuarters, numDimes, numNickels, numPennies;
    unsigned long totalValue = 0;

    cout << "Enter number of quarters: ";
    cin >> numQuarters;
    cout << "Enter number of dimes: ";
    cin >> numDimes;
    cout << "Enter number of nickels: ";
    cin >> numNickels;
    cout << "Enter number of pennies: ";
    cin >> numPennies;

    totalValue  = (numQuarters * quarter) + (numDimes * dime) + (numNickels * nickel) + (numPennies * penny);
    cout << "Total value in pennies: " << totalValue << " cents" << endl;
    
    return 0;
}