#include <bits/stdc++.h>
using namespace std;

int maxNumber(int array[], int a)
{
    int maxElement = array[0];
    for (int i = 0; i < a; i++)
    {
        if (maxElement < array[i])
        {
            maxElement = array[i];
        }
    }
    return maxElement;
}
int main()
{
    int a;
    cin >> a;
    int array[a];
    for (int i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    cout << maxNumber(array, a);
    return 0;
}