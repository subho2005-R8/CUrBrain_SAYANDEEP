#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to count primes strictly less than n
int countPrimes(int n) {
    // Base case: no primes strictly less than 2
    if (n <= 2) {
        return 0;
    }

    // Initialize a boolean vector with 'true'
    // Index represents the number, value represents if it's prime
    vector<bool> is_prime(n, true);
    is_prime[0] = false; // 0 is not prime
    is_prime[1] = false; // 1 is not prime

    // Sieve of Eratosthenes
    int limit = sqrt(n);
    for (int i = 2; i <= limit; ++i) {
        if (is_prime[i]) {
            // Mark multiples of i starting from i*i as false
            for (int j = i * i; j < n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // Count the remaining true values
    int prime_count = 0;
    for (int i = 2; i < n; ++i) {
        if (is_prime[i]) {
            prime_count++;
        }
    }

    return prime_count;
}

int main() {
    int n;
    
    // Prompting user for input
    cout << "Enter an integer n: ";
    if (!(cin >> n)) {
        cout << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

    // Getting the result and printing it
    int result = countPrimes(n);
    cout << "Total prime numbers strictly less than " << n << " is: " << result << endl;

    return 0;
}