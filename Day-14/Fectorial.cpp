#include <bits/stdc++.h>
using namespace std;
float fectorial(int number)
{
    int factorial = 1;
    for (int i = number; i >= 1; i--)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int a;
    cin >> a;
    if (a < 0)
    {
        cout << "Base must be over then 0";
    }
    else
    {
        cout << "The Factorial Is: " << fectorial(a);
    }

    return 0;
}