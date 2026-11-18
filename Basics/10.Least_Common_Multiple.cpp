// Find LCM of two numbers
#include <iostream>
#include <cstdlib>      // for abs()
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x = abs(a);
    int y = abs(b);

    int p = x, q = y;

    // Calculate GCD
    while (q != 0) {
        int rem = p % q;
        p = q;
        q = rem;
    }

    int gcd = p;

    // Calculate LCM
    if (x == 0 || y == 0) {
        cout << 0;
    } else {
        int lcm = (x / gcd) * y;
        cout << lcm;
    }

    return 0;
}
