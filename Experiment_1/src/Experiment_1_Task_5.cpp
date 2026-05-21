#include <iostream>
using namespace std;

int main() {
    
    int A = 0;
    int B = 0;

    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> B;

    cout << "Quotient: " << A / B << endl;
    cout << "Remainder: " << A % B << endl;

    return 0;
}