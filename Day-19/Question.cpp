#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum = sum +1 / i;
        i++;
    }
    cout << sum;
    return 0;
}