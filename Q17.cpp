#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of sales items: ";
    cin >> n;

    vector<int> sales(n);
    cout << "Enter product IDs: ";
    for (int i = 0; i < n; i++) {
        cin >> sales[i];
    }

    // Step 1: Sort the array so identical IDs are grouped together
    sort(sales.begin(), sales.end());

    int maxFreq = 0;
    int popularId = INT_MAX;

    // Step 2: Use Two Pointers to find frequencies without deleting elements
    int left = 0;
    while (left < n) {
        int right = left;

        // Move the right pointer until we find a different ID
        while (right < n && sales[right] == sales[left]) {
            right++;
        }

        // The frequency is simply the distance between the two pointers
        int currentId = sales[left];
        int currentFreq = right - left;

        // Apply your winner logic
        if (currentFreq > maxFreq) {
            maxFreq = currentFreq;
            popularId = currentId;
        } 
        // Because the array is sorted, smaller IDs are encountered first.
        // A tie-break ('==') naturally keeps the smaller ID if it appeared earlier,
        // but we explicitly enforce it here to match your logic:
        else if (currentFreq == maxFreq && currentId < popularId) {
            popularId = currentId;
        }

        // Your "Deletion" equivalent: Jump the left pointer directly to the 
        // next unique ID, completely skipping the items we just counted!
        left = right;
    }

    cout << "Most popular product ID: " << popularId << endl;

    return 0;
}