#include <bits/stdc++.h>
using namespace std;

// Deffain a User Function
double Area(float a, float b)
{
    double areaOf = a * b;
    return areaOf;
}
int main()
{
    float Height, Width;
    Height = 4, Width = 3;
    // Call the Function AnD Get output
    cout << "The Area OF Rectengel is: " << fixed << setprecision(2) << Area(Height, Width);
    return 0;
}