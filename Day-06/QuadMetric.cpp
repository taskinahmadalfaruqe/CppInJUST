#include <bits/stdc++.h>
using namespace std;

int main()
{
    int multiplay = 1;
    int i = 1, b;
    cin >> b;
    while (i <= b)
    {
        multiplay = multiplay * 2;
        cout << multiplay;
        i++;
        if (i <= b)
        {
            cout << "+";
        }
        else
        {
            break;
        }
    }

    return 0;
}