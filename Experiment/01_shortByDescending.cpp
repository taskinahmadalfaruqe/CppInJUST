#include <iostream>
using namespace std;

void SortTheArray(int DataArray[], int size)
{
    // Selection sort
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (DataArray[j] > DataArray[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap
        int temp = DataArray[i];
        DataArray[i] = DataArray[minIndex];
        DataArray[minIndex] = temp;
    }
}

int main()
{
    int DataArray[8] = {45, 21, 19, 32, 66, 70, 5, 84};
    int size = sizeof(DataArray) / sizeof(DataArray[0]);

    SortTheArray(DataArray, size);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << DataArray[i] << " ";
    }
    cout << endl;

    return 0;
}
