#include <iostream>
using namespace std;

// Function to find the largest number in an array
int findLargest(int arr[], int size) {
    int max = arr[0];  // Initialize max with the first element

    // Traverse the array and find the largest element
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger value is found
        }
    }

    return max;
}

int main() {
    int n;

    // Input size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];  // Declare the array

    // Input elements of the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Find and print the largest element
    int largest = findLargest(arr, n);
    cout << "The largest element is: " << largest << endl;

    return 0;
}