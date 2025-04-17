#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap smallest found with current position
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
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

    SelectionSort(array, a); // sort using selection sort

    for (int i = 0; i < a; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
