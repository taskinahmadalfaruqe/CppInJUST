#include <bits/stdc++.h>
using namespace std;
int swapFunction(int &a, int &b)
{
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
};
int main()
{
    int a = 5, b = 10;
    swapFunction(a, b);
    cout << "a=" << a << " " << "b=" << b;
    return 0;
}