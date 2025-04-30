#include <bits/stdc++.h>
using namespace std;
// Call by referanc
void swapFunction(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    swapFunction(a, b);
    cout << a << " " << b;
    return 0;
}