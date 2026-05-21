#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double price1 = 0;
    double price2 = 0;
    double price3 = 0;

    cout << "Enter prices of three items: ";
    cin >> price1 >> price2 >> price3;

    double subtotal = price1 + price2 + price3;
    double tax = subtotal * 0.085;
    double total = subtotal + tax;

    cout << fixed << setprecision(2);
    cout << left << setw(15) << "Item" << right << setw(15) << "Prices" << endl;
    cout << left << setw(15) << "Item 1" << right << setw(15) << price1 << endl;
    cout << left << setw(15) << "Item 2" << right << setw(15) << price2 << endl;
    cout << left << setw(15) << "Item 3" << right << setw(15) << price3 << endl;
    cout << left << setw(15) << "Subtotal" << right << setw(15) << subtotal << endl;
    cout << left << setw(15) << "Tax(8.5%)" << right << setw(15) << tax << endl;
    cout << left << setw(15) << "Total" << right << setw(15) << total << endl;

    return 0;
}