#include <bits/stdc++.h>
using namespace std;

int main() {
    int A[3][2] = {
        {8, -6},
        {17, 3},
        {-11, -2}
    };

    int B[2][3];

    // Transpose A to B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            B[j][i] = A[i][j];
        }
    }

    // Print result matrix B
    cout << "Matrix B (Transpose of A):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
