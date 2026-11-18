// Sum of Digits
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, digit;

    cout << "No. of digits you want to enter: ";
    cin >> n;

    cout << "Enter " << n << " digits:";

    for (int i = 1; i <= n; i++) {
        cin >> digit;
        sum += digit;
    }

    cout << "Sum of digits: " << sum;

    return 0;
}
