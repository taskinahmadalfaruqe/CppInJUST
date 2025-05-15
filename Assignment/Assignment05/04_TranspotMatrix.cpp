#include <bits/stdc++.h>
using namespace std;

int main() {
    const int rowsA = 3, colsA = 2;
    const int rowsB = 2, colsB = 3;

    // Matrix A (3x2)
    int A[rowsA][colsA] = {
        {8, 6},
        {17, 3},
        {-11, -2}
    };

    // Matrix B (2x3)
    int B[rowsB][colsB] = {
        {-9, 3, 21},
        {8, 9, 4}
    };

    // Result matrix C (3x3)
    int C[rowsA][colsB] = {0}; // Initialize all elements to 0

    // Matrix multiplication: C = A * B
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the result matrix C
    cout << "Matrix C (A x B):\n";
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
