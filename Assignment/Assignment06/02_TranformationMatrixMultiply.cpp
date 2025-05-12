#include <bits/stdc++.h>
using namespace std;

// Constants for matrix dimensions
const int ROWS_A = 3;
const int COLS_A = 2;
const int ROWS_B = 2;
const int COLS_B = 3;

// Function to multiply matrices A and B
void multiplyMatrices(int A[ROWS_A][COLS_A], int B[ROWS_B][COLS_B], int result[ROWS_A][COLS_B])
{
    for (int i = 0; i < ROWS_A; i++)
    {
        for (int j = 0; j < COLS_B; j++)
        {
            result[i][j] = 0; // Initialize result element
            for (int k = 0; k < COLS_A; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[ROWS_A][COLS_B], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int A[ROWS_A][COLS_A] = {
        {8, -6},
        {17, 3},
        {-11, -2}};

    int B[ROWS_B][COLS_B] = {
        {-9, 3, 21},
        {8, 9, 4}};

    int C[ROWS_A][COLS_B]; // Result matrix

    multiplyMatrices(A, B, C);

    cout << "Matrix A * B = " << endl;
    printMatrix(C, ROWS_A, COLS_B);

    return 0;
}
