#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 0 || i == 4 || j == 4 - i)
                cout << "X ";
            else
                cout << ". ";
        }
        cout << endl;
    }
    return 0;
}