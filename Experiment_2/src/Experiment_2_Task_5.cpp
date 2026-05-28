#include <iostream>
using namespace std;

int main()
{
    int N, i, sum = 0;
    cout << "Enter N: ";
    cin >> N;

    if (N > 0)
    {
        for (i = N; i >= 1; i--)
        {
            sum = sum + i;
        }
        cout << "Sum from 1 to " << N << " is: " << sum << endl;
    }
    else
    {
        cout << "Please enter a positive integer." << endl;
    }

    return 0;
}