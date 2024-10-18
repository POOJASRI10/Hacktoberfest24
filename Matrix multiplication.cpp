#include <iostream>
using namespace std;

void multiplyMatrices(int A[][10], int B[][10], int result[][10], int r1, int c1, int r2, int c2) {
    // Initialize the result matrix to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r1, c1, r2, c2;

    // Input dimensions of the matrices
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    // Check if matrix multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication not possible. Number of columns in the first matrix must match the number of rows in the second matrix." << endl;
        return 0;
    }

    // Declare matrices
    int A[10][10], B[10][10], result[10][10];

    // Input first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    // Multiply matrices
    multiplyMatrices(A, B, result, r1, c1, r2, c2);

    // Display the result
    cout << "Resultant matrix after multiplication:" << endl;
    displayMatrix(result, r1, c2);

    return 0;
}
