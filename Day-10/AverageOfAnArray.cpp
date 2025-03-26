#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, sum = 0;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    cout << "Average OF The Array: " << fixed << setprecision(2) << sum / a;

    return 0;
}