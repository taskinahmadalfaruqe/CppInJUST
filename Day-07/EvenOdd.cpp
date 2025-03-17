#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 1)
        {
            cout << "Odd Number Is: " << i << endl;
        }
        else
        {
            cout << "Even Number Is: " << i << endl;
        }
    }

    return 0;
}