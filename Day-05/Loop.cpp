#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0;
    // While Loop
    while (i < 10)
    {
        cout << i << " From while Loop\n";
        i++;
    }

    do
    {
        cout << i << " From Do While Loop\n";
        i++;
    } while (i < 5);

    return 0;
}