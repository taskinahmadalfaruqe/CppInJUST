#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;
    cout << "Value Of A: " << a << endl;
    cout << "Address Of P: " << p << endl;
    cout << "Address of Q: " << q << endl;
    cout << "Address of P: " << *q << endl;
    cout << "Value of A: " << **q << endl;
    cout << "Address of R: " << r << endl;
    cout << "Address of Q: " << *r << endl;
    cout << "Address of P: " << **r << endl;
    cout << "Value of A: " << ***r << endl;
    return 0;
}