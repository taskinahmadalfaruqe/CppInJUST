#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "The Lager Number Is: " << a;
    }
    else if (b > c && b > a)
    {
        cout << "The Lager Number Is: " << b;
    }
    else
    {
        cout << "The Lager Number Is: " << c;
    }

    return 0;
}