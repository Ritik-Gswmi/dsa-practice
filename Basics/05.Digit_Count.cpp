// Count digits in a number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;   // a variable to store counted digit

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n = n / 10;     // removes last digit
            count++;
        }
    }

    cout << count;

    return 0;
}
