#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
float sum(float a, float b)
{
    return a + b;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << sum(a, b) << endl;
    cout << sum(8.2f, 5.9f) << endl;
    cout << sum(a, b, c);
    return 0;
}