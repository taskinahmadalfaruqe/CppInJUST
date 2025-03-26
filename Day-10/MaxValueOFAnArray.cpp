#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    // initial Max value;

    int Max = arr[1];
    for (int i = 0; i < a; i++)
    {
        if (Max < arr[i])
        {
            Max = arr[i];
        }
    }
    cout << "Max Value OF The Array: " << Max;

    return 0;
}