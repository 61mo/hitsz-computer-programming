#include <iostream>
#include <iomanip>
using namespace std;

double celsiusToFahrenheit(double celsius);
double fahrenheitToCelsius(double fahrenheit);

int main()
{
    cout << "Select conversion:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;

    int choice, temperature;
    cout << "Enter choice: ";
    cin >> choice;
    cout << "Enter temperature: ";
    cin >> temperature;

    if (choice == 1)
    {
        cout << fixed << setprecision(2);
        cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << endl;
    }
    else if (choice == 2)
    {
        cout << fixed << setprecision(2);
        cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5.0 / 9.0;
}