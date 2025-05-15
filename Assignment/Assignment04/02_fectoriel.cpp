#include <bits/stdc++.h>
using namespace std;
// create function of factorial
double CalculateFactorial(int number)
{
    double factorial = 1;
    for (int i = 1; i <= number; ++i)
        factorial *= i;
    return factorial;
}

int main()
{
    int n;
    n = 5;

    // check the value and call fectoraial function
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers.\n";
    }
    else
    {
        cout << "Factorial of " << n << " is: " << CalculateFactorial(n) << endl;
    }

    return 0;
}
