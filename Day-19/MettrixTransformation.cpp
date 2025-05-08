#include <iostream>
using namespace std;

int main()
{
    int A[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int B[4][2];

    // Calculate transpose  of Mettrix
    for (int i = 0; i < 2; i++)
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
        for (int j = 0; j < 2; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}