#include "Time.h"
#include <iostream>
#include <iomanip>
using namespace std;

Time::Time(int h, int m, int s) : hour(h), minute(m), second(s) {}

void Time::print() const
{
    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << ":" << setw(2) << setfill('0') << second;
}

void Time::tick()
{
    second++;
    if (second >= 60)
    {
        second = 0;
        minute++;
        if (minute >= 60)
        {
            minute = 0;
            hour++;
            if (hour >= 24)
            {
                hour = 0;
            }
        }
    }
}