#include <bits/stdc++.h>
using namespace std;

// Deffine a Function
double Area(float r)
{
    float const pi = 3.1416;
    double areaOf = pi * r * r;
    return areaOf;
}
int main()
{
    float redius;
    redius = 3;

    // Call the Function and get output
    cout << "The Area of Cercel is: " << fixed << setprecision(2) << Area(redius);
    return 0;
}