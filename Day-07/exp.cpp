#include <bits/stdc++.h>
using namespace std;

int main()
{
    double sum = 0;
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        sum += (1.0 / (1 + (2 * i)));
    }
    cout << sum;

    return 0;
}