#include <iostream>
using namespace std;

int findMax(int n1, int n2, int n3);

int main()
{
    int n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    cout << "Maximum value: " << findMax(n1, n2, n3) << endl;

    return 0;
}

int findMax(int n1, int n2, int n3)
{
    if (n1 >= n2 && n1 >= n3)
    {
        return n1;
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        return n2;
    }
    else
    {
        return n3;
    }
}