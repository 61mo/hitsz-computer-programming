#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << "Enter score: ";
    cin >> score;

    if (score >= 0 && score <= 100)
    {
        if (score >= 90)
        {
            cout << "Grade: A" << endl;
        }
        else if (score >= 80)
        {
            cout << "Grade: B" << endl;
        }
        else if (score >= 70)
        {
            cout << "Grade: C" << endl;
        }
        else if (score >= 60)
        {
            cout << "Grade: D" << endl;
        }
        else
        {
            cout << "Grade: F" << endl;
        }
    }
    else
    {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
    }

    return 0;
}