#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a)
{
    if (a <= 1)
        return false;

    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a;
    cin >> a;
    cout << (isPrime(a) ? ("It Is A Prime Number: ") : "It Is Not a Prime Number: ") << a;
}
