#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int getLageNumber(int X, int Y, int Z)
{

    if (X > Y && X > Z)
    {
        return X;
    }
    else if (Y > X && Y > Z)
    {
        return Y;
    }
    else
    {
        return Z;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << "The Large Number Is: " << getLageNumber(a, b, c);
    return 0;
}