#include <iostream>

// Checks if a candidate x is prime in O(sqrt(x)) time and O(1) space
bool isPrime(int x) {
    if (x < 2) {
        return false;
    }
    
    // Check divisibility only up to the square root of x
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}
 
// Returns the smallest prime number strictly greater than n
int nextPrime(int n) {
    // Constraint: If n is less than 2, the smallest prime greater than n is 2
    if (n < 2) {
        return 2;
    }
    
    // Start checking candidates strictly greater than n
    int candidate = n + 1;
    while (true) {
        if (isPrime(candidate)) {
            return candidate; // Stop as soon as the first prime is found
        }
        candidate++;
    }
}

int main() {
    int n;
    std::cout << "Enter an integer n: ";
    if (std::cin >> n) {
        int result = nextPrime(n);
        std::cout << "The next prime is: " << result << std::endl;
    }
    return 0;
}