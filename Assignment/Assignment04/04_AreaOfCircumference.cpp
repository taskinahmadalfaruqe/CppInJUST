#include <bits/stdc++.h>
using namespace std;
double Area(float r)
{
    float const pi = 3.1416;
    double areaOf = pi * r * 2;
    return areaOf;
}
int main()
{
    float redius;
    redius = 3;
    cout << "The Area of Circumference is: " << fixed << setprecision(2) << Area(redius);
    return 0;
}