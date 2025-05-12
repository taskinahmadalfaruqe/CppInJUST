#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[3][4] = {{8, -6, 2, 8}, {17, 3, -21, 9}, {-11, -2, 40, 4}};
    int sum = 0, elements = 3*4;

    // Calculate Sum  of Mettrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += A[i][j];
        }
    }

    double avg = static_cast<double>(sum) / (elements);
    cout << "Average: " << fixed << setprecision(2) << avg << endl;
    return 0;
}