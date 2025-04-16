#include <bits/stdc++.h>
using namespace std;

template <typename T>
T findMaxNumber(T a, T b, T c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    cout << "Largest (int): " << findMaxNumber(10, 20, 30) << endl;
    cout << "Largest (float): " << findMaxNumber(10.5f, 20.2f, 15.8f) << endl;
    cout << "Largest (double): " << findMaxNumber(10.99, 9.87, 12.56) << endl;
    cout << "Largest (char): " << findMaxNumber('A', 'Z', 'M') << endl;

    return 0;
}