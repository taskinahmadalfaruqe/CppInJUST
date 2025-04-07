#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    cout << a << endl;
    int *p = &a;
    cout << "Address OF A " << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    a++;
    cout << *p << endl;
    p++;
    cout << p << endl;
    return 0;
}