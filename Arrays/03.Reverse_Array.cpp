// Reverse an Array
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

    int left = 0;
    int right = n - 1;

    while (left < right) {
        swap(arr[left], arr[right]);

        left++;
        right--;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}