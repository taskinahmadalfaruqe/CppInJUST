#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 4, Colum = 3;
    int Matrice01[4][3] = {
        {8, 17, -11},
        {-6, 3, -2},
        {2, -21, 40},
        {8, 9, 4},
    };
    int min = Matrice01[0][0];

    //By using Nasted Loop For Find The Min of Matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < Colum; j++)
        {
            if (min > Matrice01[i][j])
            {
                min = Matrice01[i][j];
            }
        }
    }

    // Output Minmum Value of Matrix
    cout << "The Minimum Value Of Metrix Is: " << min;
    return 0;
}