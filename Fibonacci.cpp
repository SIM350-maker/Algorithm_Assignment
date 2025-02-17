#include <iostream>
using namespace std;

// Function to calculate the n-th Fibonacci term iteratively
long long fibonacci(int n) {
    if (n <= 0) return 0; // Base case: if n is 0 or less, return 0 // runtime: 1 microsecond
    if (n == 1) return 1; // Base case: if n is 1, return 1 // runtime: 1 microsecond
    
    long long a = 0; // Fibonacci(n-2) // runtime: 1 microsecond
    long long b = 1; // Fibonacci(n-1) // runtime: 1 microsecond
    long long fib_n = 1; // Current Fibonacci term // runtime: 1 microsecond

    for (int i = 2; i <= n; ++i) {
        fib_n = a + b; // Calculate current Fibonacci term // runtime per iteration: 1 microsecond
        a = b; // Update Fibonacci(n-2) // runtime per iteration: 1 microsecond
        b = fib_n; // Update Fibonacci(n-1) // runtime per iteration: 1 microsecond
    }

    return fib_n; // Return the final result // runtime: 1 microsecond
}

int main() {
    int number = 10;

    // Start total runtime timer // total start time: t1
    long long result = fibonacci(number);
    // Stop total runtime timer // total end time: t2

    cout << "Fibonacci term " << number << " is " << result << endl;
    // Calculate total runtime and print it // total runtime: (t2 - t1) microseconds

    return 0;
}
