#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    // Display the array address (address of first element)
    cout << "Address of array 'a': " << a << endl;

    // Display addresses of each element
    cout << "Addresses of each element:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Address of a[" << i << "]: " << &a[i] << endl;
    }
    return 0;
}