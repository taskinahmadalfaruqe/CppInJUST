#include <bits/stdc++.h>
using namespace std;

int main()
{
    float sum = 0;
    for (int i = 1; i < 11; i++)
    {
        float a = (1.0 / (i * (i + 1)));
        sum += a;
    }
    cout << "The Sum Of This Serise is: " << fixed << setprecision(2) << sum;
    return 0;
}