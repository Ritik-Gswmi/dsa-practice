// Find Frequency of Each Element
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of elements: ";
    cin >> n;

    vector<int> arr(n);
    unordered_map<int, int> freq;

    cout<<"Enter "<< n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] > 0) {
            cout << arr[i] << " -> " << freq[arr[i]] << endl;
            freq[arr[i]] = 0;
        }
    }

    return 0;
}