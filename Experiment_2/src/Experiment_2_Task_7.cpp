#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double grade = 0.0, average = 0.0, sum = 0.0;
    int count = 0;

    while (grade != -1)
    {
        cout << "Enter grade (Enter -1 to stop): ";
        cin >> grade;
        if (grade != -1)
        {
            sum += grade;
            count++;
        }
    }

    average = sum / count;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;

    return 0;
}