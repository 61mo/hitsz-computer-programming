#include <iostream>
using namespace std;

long calculatePower(int base, int exp);

int main()
{
    int base;
    cout << "Enter a number: ";
    cin >> base;

    cout << "Square: " << calculatePower(base, 2) << endl;
    cout << "Cube: " << calculatePower(base, 3) << endl;

    return 0;
}

long calculatePower(int base, int exp)
{
    long result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}