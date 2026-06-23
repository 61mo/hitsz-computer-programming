#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input." << endl;
    }
    else
    {
        cout << fixed << setprecision(2);
        cout << "Floor: " << floor(n) << endl;
        cout << "Ceiling: " << ceil(n) << endl;
        cout << "Absolute value: " << abs(n) << endl;
        cout << "Log10: " << log10(n) << endl;
    }

    return 0;
}