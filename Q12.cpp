#include <iostream>

using namespace std;

int main() {
    long long base, power, MOD;
    cout << "Enter base, power, and MOD for Q12 (space-separated): ";
    if (!(cin >> base >> power >> MOD)) return 0;
    
    // Start with result = 1 % MOD[span_1](start_span)[span_1](end_span)
    long long result = 1 % MOD;
    
    // Repeat the multiplication in a loop exactly power times[span_2](start_span)[span_2](end_span)
    for (long long i = 0; i < power; ++i) {
        result = (result * (base % MOD)) % MOD;
    }
    
    cout << "Q12 Output (Modulo Power): " << result << "\n\n";
    return 0;
}