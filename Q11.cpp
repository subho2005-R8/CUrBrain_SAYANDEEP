#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements for Q11: ";
    if (!(cin >> n)) return 0;
    
    vector<long long> arr(n);
    cout << "Enter " << n << " non-negative integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    const long long MOD = 1000000007;
    long long result = 0;
    
    // Process each element and update the running result using modular addition[span_0](start_span)[span_0](end_span)
    for (long long val : arr) {
        result = (result + (val % MOD)) % MOD;
    }
    
    cout << "Q11 Output (Modular Sum): " << result << "\n\n";
    return 0;
}