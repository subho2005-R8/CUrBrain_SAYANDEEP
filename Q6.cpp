#include <iostream>
#include <cmath>     // For std::abs

class Solution {
public:
    int digitFrequencyDifference(int n, int a, int b) {
        // Handle the edge case for n = 0 explicitly as per constraints
        if (n == 0) {
            int count_a = (a == 0) ? 1 : 0;
            int count_b = (b == 0) ? 1 : 0;
            return std::abs(count_a - count_b);
        }

        int count_a = 0;
        int count_b = 0;

        // Extract each digit mathematically using exactly one while loop
        while (n > 0) {
            int digit = n % 10; // Isolate the last digit

            if (digit == a) {
                count_a++;
            }
            if (digit == b) {
                count_b++;
            }

            n /= 10; // Truncate the last digit
        }

        // Return the absolute difference between the frequencies
        return std::abs(count_a - count_b);
    }
};

int main() {
    Solution solver;
    int n, a, b;

    // Prompt user for standard input
    std::cout << "Enter the integer n: ";
    std::cin >> n;

    std::cout << "Enter single-digit integer a: ";
    std::cin >> a;

    std::cout << "Enter single-digit integer b: ";
    std::cin >> b;

    // Validate constraints loosely to avoid invalid program behavior
    if (n < 0 || a < 0 || a > 9 || b < 0 || b > 9) {
        std::cout << "Error: Invalid inputs based on given constraints.\n";
        std::cout << "Ensure n >= 0, and both a and b are single digits (0-9).\n";
        return 1;
    }

    // Compute and display the result
    int result = solver.digitFrequencyDifference(n, a, b);
    std::cout << "The absolute frequency difference is: " << result << "\n";

    return 0;
}