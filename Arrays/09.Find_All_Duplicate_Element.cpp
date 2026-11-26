//Find All Duplicate Element
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of elements: ";
    cin >> n;

    vector<int> arr(n);

    unordered_set<int> seen;     // tracks every unique number encountered so far.
    unordered_set<int> printed;  // tracks duplicates we have already output, preventing a number that appears 3 or more times

    cout<<"Enter "<< n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (!seen.insert(arr[i]).second) {        // is true when arr[i] is ALREADY in 'seen' (a duplicate)
            if (printed.insert(arr[i]).second) {   // is true ONLY the first time this duplicate is added to 'printed'
                cout << arr[i] << " ";
            }
        }
    }

    if (printed.empty()) {              // no duplicates were found anywhere in the input
        cout << "No duplicates found";
    }

    return 0;
}
