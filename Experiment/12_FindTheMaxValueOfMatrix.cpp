#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[3][4] = {{8, 16, 4, 58},
                        {17, 3, 21, 9},
                        {51, 5, 6, 70}};

    int maxNumber = matrix[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (maxNumber < matrix[i][j])
            {
                maxNumber = matrix[i][j];
            }
        }
    }
    cout << "Maximum Element of This Matrix is: "<<maxNumber;

    return 0;
}