// Reverse a Number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int rev = 0;

    while (n > 0) {
        int digit = n % 10;      // extract last digit  or gives remainder
        rev = rev * 10 + digit;  // creates new digits
        n = n / 10;              // removes last digit
    }

    cout << "Reversed number: " << rev;

    return 0;
}