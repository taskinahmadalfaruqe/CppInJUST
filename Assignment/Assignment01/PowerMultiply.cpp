#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, n;
    // Input base (x) and exponent (n)
    cout << "Enter the value of x: " << endl;
    cin >> x;
    cout << "Enter the number of times to multiply (n): " << endl;
    cin >> n;

    // Calculate and print the result
    double result = pow(x, n);
    cout << "Multiplying " << x << " by itself " << n << " times is: " << result << endl;
    return 0;
}
