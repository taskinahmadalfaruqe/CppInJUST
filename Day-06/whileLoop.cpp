#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0, i = 1, b;
    cin >> b;
    while (i <= b)
    {
        sum += i;
        i++;
    }
    cout << sum;
    return 0;
}