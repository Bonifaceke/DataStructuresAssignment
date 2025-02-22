#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function to calculate Fibonacci number recursively
long long fibonacci(int n) {
    if (n <= 0)
        return -1; // Invalid input
    else if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    cout << "Enter the Fibonacci term: ";
    cin >> num;

    auto start = high_resolution_clock::now(); // Start time tracking
    long long result = fibonacci(num); // Calculate Fibonacci number
    auto end = high_resolution_clock::now(); // End time tracking

    duration<double> runtime = end - start;

    if (result == -1)
        cout << "Invalid input. Please enter a positive integer." << endl;
    else {
        cout << "Fibonacci number at position " << num << " is " << result << endl;
        cout << "Runtime: " << runtime.count() << " seconds" << endl;
    }

    return 0;
}
