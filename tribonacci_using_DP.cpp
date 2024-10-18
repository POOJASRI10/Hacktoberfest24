#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int tribonacci(int n) {
    // Handle base cases directly
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    // Create a vector to store Tribonacci numbers
    vector<int> trib(n + 1);
    trib[0] = 0;
    trib[1] = 1;
    trib[2] = 1;

    // Iteratively calculate the Tribonacci numbers
    for (int i = 3; i <= n; ++i) {
        trib[i] = trib[i - 1] + trib[i - 2] + trib[i - 3];
    }

    return trib[n];
}

int main() {
    int n;

    cout << "Enter a non-negative integer for n: ";
    while (true) {
        cin >> n;
        // Input validation: Check for non-integer and negative input
        if (cin.fail() || n < 0) {
            cin.clear(); // clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cout << "Invalid input. Please enter a non-negative integer: ";
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard remaining input
            break; // valid input, exit the loop
        }
    }

    int result = tribonacci(n);
    cout << "Tribonacci(" << n << ") = " << result << endl;

    return 0;
}
