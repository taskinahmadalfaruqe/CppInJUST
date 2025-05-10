#include <bits/stdc++.h>
using namespace std;
double Area(float a, float b)
{
    double areaOf = a * b;
    return areaOf;
}
int main()
{
    float Height, Width;
    Height = 4, Width = 3;
    cout<<"The Area OF Rectengel is: " << fixed << setprecision(2) << Area(Height, Width);
    return 0;
}