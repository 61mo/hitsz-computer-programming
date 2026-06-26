#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    int h, m, s;

    cout << "Enter hour minute second: ";
    cin >> h >> m >> s;

    Time t(h, m, s);

    cout << "Initial time: ";
    t.print();
    cout << endl;

    for (int i = 0; i < 100; i++)
    {
        t.tick();
    }

    cout << "After 100 ticks: ";
    t.print();
    cout << endl;

    return 0;
}