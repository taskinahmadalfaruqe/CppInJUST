#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Number;
    cout << "Inter The Input Number: " << endl;
    cin >> Number;
    int Digit = to_string(Number).length();
    for (int i = 0; i < Digit; i++)
    {
        int lastDigit = Number % 10;
        cout << lastDigit << endl;
        Number /= 10;
    }

    return 0;
}