#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "--- 9x9 Multiplication Table ---" << endl;

    const int N = 9;

    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            string expr = to_string(i) + "x" + to_string(j) + "=" + to_string(i * j);
            cout << left << setw(8) << expr;
        }
        cout << endl;
    }

    return 0;
}