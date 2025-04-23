#include <iostream>
using namespace std;

int main() {
    const int rowsA = 3, colsA = 2, colsB = 3;
    int A[rowsA][colsA] = {
        {3, 5},
        {7, 9},
        {2, 4}
    };

    int B[colsA][colsB] = {
        {4, 8, 6},
        {7, 1, 9}
    };

    int C[rowsA][colsB] = {0};

    // Matrix multiplication
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output result
    cout << "Resultant Matrix C (3x3):\n";
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}