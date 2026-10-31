#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of total athelets : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter scores of each athlets: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = arr[0];
    int max2=-1;  // assume first element is minimum
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > max2 && arr[i]!=maxVal) {
            max2 = arr[i];
        }
        
    }

    cout << "second highest score = " << max2 << endl;
    return 0;
}