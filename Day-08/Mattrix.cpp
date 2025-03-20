#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;

    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    int matrix1[row][col], matrix2[row][col], result[row][col];

    cout << "Enter elements of first matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of second matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    // Adding both matrices
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "Resultant matrix after addition: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
