#include <iostream>
#include <iomanip>
using namespace std;

long calculatePower(int base, int exp);
double getCircleArea(double radius);
bool isPrime(int n);

int main()
{
    cout << "Menu:" << endl;
    cout << "1. Power Calculation" << endl;
    cout << "2. Circle Area" << endl;
    cout << "3. Prime Check" << endl;

    int choice;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int base;
        cout << "Enter number: ";
        cin >> base;

        cout << "Square: " << calculatePower(base, 2) << endl;
        cout << "Cube: " << calculatePower(base, 3) << endl;
        break;
    }

    case 2:
    {
        double radius;
        cout << "Enter radius: ";
        cin >> radius;
        cout << fixed << setprecision(2);
        cout << "Circle area: " << getCircleArea(radius) << endl;
        break;
    }

    case 3:
    {
        int number;
        cout << "Enter number: ";
        cin >> number;

        if (number == 1)
        {
            cout << "Invalid input." << endl;
        }
        else if (isPrime(number))
        {
            cout << number << " is a prime number." << endl;
        }
        else
        {
            cout << number << " is not a prime number." << endl;
        }
        break;
    }
    default:
        cout << "Invalid choice." << endl;
    }

    return 0;
}

long calculatePower(int base, int exp)
{
    long result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= base;
    }
    return result;
}

double getCircleArea(double radius)
{
    const double PI = 3.14159;
    return PI * radius * radius;
}

bool isPrime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}