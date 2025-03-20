#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> c >> a >> b;
    int Mattrix[a][b];
    int Mattrix2[a][b];
    int sum = 0;

    // input Mattrix
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> Mattrix[i][j];
        }
    }

    // output Mattrix
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << " " << Mattrix[i][j];
        }
        cout << endl;
    }
    cout << sum;
    return 0;
}