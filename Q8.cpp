#include <bits/stdc++.h>
using namespace std;

int kthFactor(int n, int k) {
    vector<int> factors;

    // Collect factors up to sqrt(n)
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            factors.push_back(i);
            if(i != n / i) factors.push_back(n / i); // Add pair factor
        }
    }

    // Sort factors in ascending order
    sort(factors.begin(), factors.end());

    // Return k-th factor (1-indexed)
    if(k <= factors.size()) return factors[k-1];
    return -1;
}

int main() {
    int n = 12, k = 3; // Example input
    cout << k << "-th factor of " << n << " = " << kthFactor(n, k) << endl;
    return 0;
}
