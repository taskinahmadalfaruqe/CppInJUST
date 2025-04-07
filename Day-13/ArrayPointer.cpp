#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        a[i] = i + 1;
        cout << a[i] << " ";
    }
    delete[] a;
    a = nullptr;
    return 0;
}