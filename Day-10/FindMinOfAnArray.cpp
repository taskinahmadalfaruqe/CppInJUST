#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a ;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    // initial min value;

    int min = arr[1];
    for (int i = 0; i < a; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Min Value OF The Array: " << min;

    return 0;
}