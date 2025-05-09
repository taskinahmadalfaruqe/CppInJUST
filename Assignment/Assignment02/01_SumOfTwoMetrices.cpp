#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 4, Colum = 4, sum = 0;
    int Matrice01[4][4] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4},
    };
    int Matrice02[4][4] = {
        {5, 5, 5, 5},
        {6, 6, 6, 6},
        {7, 7, 7, 7},
        {8, 8, 8, 8},
    };
    int Matrice03[4][4];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < Colum; j++)
        {
            Matrice03[i][j] = Matrice01[i][j] + Matrice02[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < Colum; j++)
        {
            sum += Matrice03[i][j];
        }
    }
    cout << "The Sum Of Metrices c: " << sum;
    return 0;
}