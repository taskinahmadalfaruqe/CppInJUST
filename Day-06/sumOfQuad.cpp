#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    int a, i = 1;
    cin >> a;
    while (i <= a)
    {
        sum += i * pow(i, 2);
        i++;
    }
    cout << sum;
    return 0;
}