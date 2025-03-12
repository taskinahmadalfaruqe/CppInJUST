#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, factorial = 1;
    cin >> a;
    if (a < 0)
    {
        cout << "Base must be over then 0";
    }
    else
    {
        for (int i = a; i >= 1; i--)
        {
            factorial *= i;
        }
    }
    cout << factorial;
    return 0;
}