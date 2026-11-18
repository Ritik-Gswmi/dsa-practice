// Find GCD of two numbers
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"Enter a and b: ";
    cin >> a >> b;

    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }

    cout << a;

    return 0;
}
