#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
double getCercelArea(float a, float pi)
{
    double Area = pi * a * a;
    return Area;
};
int main()
{
    float a;
    cin >> a;
    double pi = M_PI;
    double Area = getCercelArea(a, pi);
    cout << fixed << setprecision(2) << Area;
    return 0;
}
