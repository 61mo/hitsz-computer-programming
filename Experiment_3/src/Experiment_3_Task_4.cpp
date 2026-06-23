#include <iostream>
#include <iomanip>
using namespace std;

double getCircleArea(double radius);

int main()
{
    double radius;
    cout << "Enter radius: ";
    cin >> radius;

    cout << fixed << setprecision(2);
    cout << "Circle area: " << getCircleArea(radius) << endl;

    return 0;
}

double getCircleArea(double radius)
{
    const double PI = 3.14159;
    return PI * radius * radius;
}