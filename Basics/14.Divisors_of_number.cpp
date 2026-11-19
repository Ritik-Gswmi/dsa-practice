// Find all divisors of a number
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> divisors;       // Vector to store the divisors
  
    for (int i = 1; i * i <= n; i++) {     // Loop from 1 up to the square root of n
        
        // Check if i divides n evenly
        if (n % i == 0) {
            divisors.push_back(i);        // i is a divisor, so add it to the list
                      
            int pair = n / i;          // Add the paired divisor (n / i), avoiding duplicates if n is a perfect square
            if (i != pair) {
              divisors.push_back(pair);
            }

        }
    }

    // Sort the divisors in ascending order since pairs were added out of sequence
    sort(divisors.begin(), divisors.end());

    // Print all found divisors
    for (int i = 0; i < divisors.size(); i++) {
        cout << divisors[i] << " ";
    }
    return 0;
}
