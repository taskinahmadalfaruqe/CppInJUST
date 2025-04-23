#include <bits/stdc++.h>
using namespace std;

// Method 01
void SortArray(int array[], int a)
{
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Method 02
void Sort02(int array[], int a)
{
    for (int i = 1; i < a; i++)
    {
        for (int j = 0; j < a - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}

int main()
{

    int a = 7;

    // Input Array
    int array[7] = {3, 11, 4, 25, 8, 17, 9};

    // Short The Array
    SortArray(array, a);
    // Sort02(array, a);
    // Print Sort Array
    for (int i = 0; i < a; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}