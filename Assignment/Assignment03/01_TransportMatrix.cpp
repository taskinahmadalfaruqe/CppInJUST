#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[3][4] = {{8, -6, 2, 8}, {17, 3, -21, 9}, {-11, -2, 40, 4}};
    int B[4][3];

    // Calculate transpose  of Mettrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            B[j][i] = A[i][j];
        }
    }

    // Print the result of the Metteix
    cout << "Transpose matrix B:" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}