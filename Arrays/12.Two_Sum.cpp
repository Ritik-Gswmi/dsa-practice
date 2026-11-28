// Find Two Elements Whose Sum Equals Target
#include <iostream>
#include <vector>
#include <unordered_set>
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

    int target;
    cout<<"Enter target: ";
    cin >> target;

    unordered_set<int> seen;

    bool found = false;

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        if (seen.find(complement) != seen.end()) {
            cout << complement << " " << arr[i];
            found = true;
            break;
        }

        seen.insert(arr[i]);
    }

    if (!found) {
        cout << "No pair found";
    }

    return 0;
}