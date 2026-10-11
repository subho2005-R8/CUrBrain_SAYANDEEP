#include <bits/stdc++.h>
using namespace std;

// Function to compute GCD of two numbers
int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute GCD of entire array
int arrayGCD(vector<int>& arr) {
    int result = arr[0];
    for(int i = 1; i < arr.size(); i++) {
        result = gcd(result, arr[i]);
        if(result == 1) return 1; // Early stop (optimization)
    }
    return result;
}

int main() {
    vector<int> arr = {24, 36, 48}; // Example input
    cout << "GCD of array = " << arrayGCD(arr) << endl;
    return 0;
}
