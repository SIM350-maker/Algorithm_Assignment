#include <iostream>
using namespace std;

// Function to calculate factorial of n iteratively
long long factorial(int n) {
    long long result = 1; // Initialize result // runtime: 1 microsecond

    for (int i = 1; i <= n; ++i) {
        result *= i; // Multiply result by i // runtime per iteration: 1 microsecond
    }

    return result; // Return the final result // runtime: 1 microsecond
}

int main() {
    int number = 10;

    // Start total runtime timer // total start time: t1
    long long result = factorial(number);
    // Stop total runtime timer // total end time: t2

    cout << "Factorial of " << number << " is " << result << endl;
    // Calculate total runtime and print it // total runtime: (t2 - t1) microseconds

    return 0;
}
