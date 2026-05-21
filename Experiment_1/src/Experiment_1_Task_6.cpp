#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a = 0;
    int b = 0;

    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;

    double H_d = sqrt(pow(a, 2) + pow(b, 2));
    int H_i = static_cast<int>(H_d);
    
    cout << "Hypotenuse (double): " << H_d << endl;
    cout << "Hypotenuse (int): " << H_i << endl;

    return 0;
}