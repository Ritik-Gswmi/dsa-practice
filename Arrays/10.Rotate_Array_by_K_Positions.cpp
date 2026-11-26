// Rotate Array by K Positions
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout<<"Enter "<< n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    if (n == 0) {
        return 0;
    }

    // Reduce k if k >= n: rotating by n positions brings the array back to its original order,
    // so only the remainder (k % n) produces an actual shift (and prevents out-of-bounds iterators).
    k = k % n;

    reverse(arr.begin(), arr.end());

    reverse(arr.begin(), arr.begin() + k);

    reverse(arr.begin() + k, arr.end());

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}