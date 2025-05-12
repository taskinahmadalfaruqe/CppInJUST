#include <bits/stdc++.h>
using namespace std;

// User Deffain Function
float CalculateArea(float Redius)
{
    float const pi = 3.14;
    float area = pi * Redius * Redius;
    return area;
}
int main()
{
    float radius;
    cout << "Input The Radius Of The Circle: ";
    cin >> radius;
    float AreaOFCircle = CalculateArea(radius);
    cout << fixed << setprecision(2) << "The Area Of Circle is: " << AreaOFCircle;
    return 0;
}