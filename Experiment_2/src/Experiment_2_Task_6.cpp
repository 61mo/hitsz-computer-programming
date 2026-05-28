#include <iostream>
using namespace std;

int main()
{
    int num;

    do
    {
        cout << "Enter a number (1 - 10):  ";
        cin >> num;
    } while (num < 1 || num > 10);
    cout << "Valid input received: " << num << endl;

    return 0;
}