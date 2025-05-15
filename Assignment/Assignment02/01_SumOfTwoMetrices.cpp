#include <bits/stdc++.h>
using namespace std;

int main() {
    const int rows = 4, cols = 4;
    int A[rows][cols] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };

    int B[rows][cols] = {
        {5, 5, 5, 5},
        {6, 6, 6, 6},
        {7, 7, 7, 7},
        {8, 8, 8, 8}
    };

    int C[rows][cols];

    // Adding matrices A and B, and storing result in C
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Displaying the result matrix C
    cout << "Matrix C (A + B):\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
