#include <bits/stdc++.h>
using namespace std;

// Function to compute factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}

int main()
{
    int m = 5, n = 3;

    int combination = factorial(m) / (factorial(n) * factorial(m - n));

    cout << "C(" << m << ", " << n << ") = " << combination << endl;
    return 0;
}
