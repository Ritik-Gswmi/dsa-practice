// Find factorial of a number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long fact = 1;

    if (n < 0) {
        cout << "Factorial is not defined";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial: " << fact;

    return 0;
}
