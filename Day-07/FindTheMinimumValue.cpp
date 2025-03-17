#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {500, 10, 60, 30, 56};
    int maxValue = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (maxValue < arr[i])
        {
            maxValue = arr[i];
        }
    }
    cout << maxValue;
    return 0;
}