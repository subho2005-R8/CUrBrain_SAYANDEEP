#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements for Q13: ";
    if (!(cin >> n)) return 0;
    
    vector<int> arr(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int k;
    cout << "Enter non-zero integer k: ";
    cin >> k;
    
    bool divisible_found = false;
    if (!arr.empty() && k != 0) {
        long long running_sum = 0;
        int divisor = abs(k); // Use absolute value of k for divisibility consistency[span_3](start_span)[span_3](end_span)
        
        // Build running sum and check prefix modulo at each position[span_4](start_span)[span_4](end_span)[span_5](start_span)[span_5](end_span)
        for (int val : arr) {
            running_sum += val;
            if (running_sum % divisor == 0) {
                divisible_found = true;
                break;
            }
        }
    }
    
    cout << "Q13 Output: " << (divisible_found ? "True" : "False") << "\n\n";
    return 0;
}