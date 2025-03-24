#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Break And Continue Statement and multiply value
    int a;
    cin >> a;
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    for (int j = 0; j < a; j++)
    {
        if (array[j] < 0)
        {
            continue;
        }
        cout << array[j] << " * " << array[j] << " = " << array[j] * array[j] << endl;
    }

    return 0;
}