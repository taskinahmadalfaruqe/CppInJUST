#include <iostream>
using namespace std;

void SortTheArray(float DataArray[], int size) {
    // Selection sort
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (DataArray[j] < DataArray[minIndex]) {
                minIndex = j;
            }
        }
        // Swap
        float temp = DataArray[i];
        DataArray[i] = DataArray[minIndex];
        DataArray[minIndex] = temp;
    }
}

int main() {
    float DataArray[10] = {73, 2.9, 0, -5, 2, -33, 25, 6, 9.8, 9.3};
    int size = sizeof(DataArray) / sizeof(DataArray[0]);

    SortTheArray(DataArray, size);

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << DataArray[i] << " ";
    }
    cout << endl;

    return 0;
}
