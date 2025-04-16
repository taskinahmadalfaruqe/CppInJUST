#include <bits/stdc++.h>
using namespace std;

template <class T>
T findMaxNumber(T a, T b, T c)
{
    T Maximum = a;

    if (b > Maximum)
        Maximum = b;
    if (c > Maximum)
        Maximum = c;

    return Maximum;
}

int main()
{
    cout << "Largest (int): " << findMaxNumber(10, 20, 15) << endl;
    cout << "Largest (float): " << findMaxNumber(10.5f, 20.2f, 15.8f) << endl;
    cout << "Largest (double): " << findMaxNumber(10.99, 9.87, 12.56) << endl;

    return 0;
}
