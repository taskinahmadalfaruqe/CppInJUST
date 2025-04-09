#include <iostream>
#include <cmath>
using namespace std;

double area(double radius)
{
    return radius * radius * 3.1416; // More accurate PI from cmath
}

int main()
{
    double radius;
    cin >> radius;

    double circleArea = area(radius);
    cout << "Area of circle: " << circleArea << endl;

    return 0;
}
