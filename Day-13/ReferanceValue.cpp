#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1 = 10;
    int &b = a1;
    a1++;
    b++;
    cout << a1 << ' ' << b;
    return 0;
}