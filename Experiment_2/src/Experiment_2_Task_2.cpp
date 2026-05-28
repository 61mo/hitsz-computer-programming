#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "Absolute value: " << num << endl;
    }
    else
    {
        num = -num;
        cout << "Absolute value: " << num << endl;
    }

    if (num > 0 && num < 100)
    {
        cout << num << " is within the range 1 to 100." << endl;
    }
    else
    {
        cout << num << " is outside the range 1 to 100." << endl;
    }

    return 0;
}