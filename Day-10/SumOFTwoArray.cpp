#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr01[a];
    int arr02[a];
    int arr03[a];
    // input Arry 01
    for (int i = 0; i < a; i++)
    {
        cin >> arr01[i];
    }
    // input arr 02
    for (int i = 0; i < a; i++)
    {
        cin >> arr02[i];
    }

    // add Teo Array
    for (int i = 0; i < a; i++)
    {
        arr03[i] = arr01[i] + arr02[i];
    }
    // output arr03
    for (int i = 0; i < a; i++)
    {
        cout << arr03[i] << " ";
    }
    return 0;
}