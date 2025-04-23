#include <iostream>
using namespace std;

int main()
{
    int row1 = 3, col1 = 2, row2 = 2, col2 = 3;

    // Check if multiplication is possible
    if (col1 != row2)
    {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    // Input first matrix
    int matrix1[row1][col1];
    cout << "Enter elements of the first matrix (3x2):" << endl;
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            cin >> matrix1[i][j];

    // Input second matrix
    int matrix2[row2][col2];
    cout << "Enter elements of the second matrix (2x3):" << endl;
    for (int i = 0; i < row2; i++)
        for (int j = 0; j < col2; j++)
            cin >> matrix2[i][j];

    // Resultant matrix dimensions will be row1 x col2 (3x3)
    int result[row1][col2] = {0};

    // Matrix multiplication
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            for (int k = 0; k < col1; k++) // or k < row2
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print result
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    cout <<endl;
    cout << "Resultant matrix after multiplication:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
