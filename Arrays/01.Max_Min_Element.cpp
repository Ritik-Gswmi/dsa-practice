// Find Maximum and Minimum Element
#include <iostream>
#include <vector>
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

    int maxi = arr[0];
    int mini = arr[0];

    for (int i = 1; i < n; i++) {
     if (arr[i] > maxi) {
        maxi = arr[i];
     } else if (arr[i] < mini) {
        mini = arr[i];
     }
    }

    cout<< "Maximum: " << maxi << endl;
    cout<< "Minimum: " << mini << endl;

    return 0;
}