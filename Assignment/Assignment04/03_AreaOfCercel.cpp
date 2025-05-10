#include <bits/stdc++.h>
using namespace std;
double Area(float r)
{
    float pi = 3.1416;
    double areaOf = pi * r * r;
    return areaOf;
}
int main()
{
    float redious;
    redious = 3;
    cout << fixed << setprecision(2) << Area(redious);
    return 0;
}