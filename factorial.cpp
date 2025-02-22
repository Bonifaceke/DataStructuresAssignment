#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function to calculate factorial recursively
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    auto start = high_resolution_clock::now(); // Start time tracking
    long long result = factorial(num); // Calculate factorial
    auto end = high_resolution_clock::now(); // End time tracking

    duration<double> runtime = end - start;

    cout << "Factorial of " << num << " is " << result << endl;
    cout << "Runtime: " << runtime.count() << " seconds" << endl;

    return 0;
}
