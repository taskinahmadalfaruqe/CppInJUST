#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int mattrix[row][col]; // Variable-length array (VLA), which is not standard C++.
    
    int sum = 0;
    int totalElement = row * col;
    
    // Read matrix input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mattrix[i][j];
        }
    }

    // Initialize min and max with the first element
    int min = mattrix[0][0], max = mattrix[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += mattrix[i][j];
            if (min > mattrix[i][j])
            {
                min = mattrix[i][j];
            }
            if (max < mattrix[i][j])
            {
                max = mattrix[i][j];
            }
        }
    }

    cout << "Sum of the Matrix: " << sum << endl;
    cout << "Average: " << double(sum) / totalElement << endl; // Use double for accuracy
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}
