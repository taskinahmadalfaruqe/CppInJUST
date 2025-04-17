#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    int maxElement = array[0];
    for (int i = 0; i < a; i++)
    {
        if (maxElement < array[i])
        {
            maxElement = array[i];
        }
    }
    cout << maxElement;

    return 0;
}