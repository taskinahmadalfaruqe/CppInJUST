#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {26, 6, 81, 55, 16, 33, 70, 45, 94, 100};
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    cout << sum;

    return 0;
}