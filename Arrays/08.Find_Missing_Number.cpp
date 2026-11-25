//Find Missing Number from 1 to N
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of elements: ";
    cin >> n;

    vector<int> arr(n - 1);

    long long sum = 0;

    cout<<"Enter "<< n << " elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    long long total = 1LL * n * (n + 1) / 2;   // Calculates the expected sum from 1 to n (1LL prevents integer overflow)

    cout << "Missing number: " << total - sum;

    return 0;
}