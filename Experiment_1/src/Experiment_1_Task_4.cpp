#include <iostream>
using namespace std;

int main() {

    char character = 0;

    cout << "Enter a character: ";
    cin >> character;
    
    cout << "ASCII value of '" << character << "' is: " << static_cast<int>(character) << endl;

    return 0;
}