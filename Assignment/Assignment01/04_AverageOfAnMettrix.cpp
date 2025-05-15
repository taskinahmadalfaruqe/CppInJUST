#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int row = 3, col = 4;
    int matrix[row][col] = {
        {8, -6, 2, 8},
        {17, 3, -21, 9},
        {-11, -2, 40, 4}};

    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; ++j)
        {
            sum += matrix[i][j];
        }
    }
    double avg = static_cast<double>(sum) / (row * col);
    cout << "Average Of The Matrix is: " << fixed << setprecision(2) << avg << endl;
    return 0;
}
