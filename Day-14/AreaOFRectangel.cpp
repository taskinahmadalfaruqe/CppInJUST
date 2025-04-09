#include <bits/stdc++.h>
using namespace std;

int rectangleArea(int a, int b)
{
    return a * b;
}

int main()
{
    int height, weight;
    cin >> height >> weight;
    cout << "Area OF The Rectangle Is: " << rectangleArea(height, weight);
    return 0;
}