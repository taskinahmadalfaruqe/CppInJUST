#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, e, result;

    cout << "Enter value for a: " << endl;
    cin >> a;
    cout << "Enter value for b: " << endl;
    cin >> b;
    cout << "Enter value for c: " << endl;
    cin >> c;
    cout << "Enter value for d: " << endl;
    cin >> d;
    cout << "Enter value for e: " << endl;
    cin >> e;

    // Check for division by zero
    if (c == d)
    {
        cout << "Error: Division by zero (c - d = 0)" << endl;
        return 1;
    }

    result = e + (a + b) / (c - d);
    cout << "Result of e+(a+b)/(c-d)= " << result << endl;

    return 0;
}