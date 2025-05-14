#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Original matrix A (2x4)
    int A[2][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}};

    // Transpose matrix B (4x2)
    int B[4][2];

    // Calculate transpose
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            B[j][i] = A[i][j];
        }
    }

    // Print transposed matrix B
    cout << "\nMatrix B (Transpose of A):" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}