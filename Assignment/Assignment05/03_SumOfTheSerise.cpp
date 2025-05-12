#include <bits/stdc++.h>
using namespace std;

int main()
{
    double Sum = 0;

    for (int i = 1; i <= 50; i++)
    {
        double term = 1.0 / (2 * i);
        if (i % 2 != 0)
            term *= -1;
        Sum += term;
    }

    cout << "Calculated sum S = " << Sum << endl;
    return 0;
}
