#include <bits/stdc++.h>
using namespace std;

// Function to save addresses of each element in array A
void SaveTheElementAddress(int arrayLength, float array[], float *addressArray[])
{
    for (int i = 0; i < arrayLength; i++)
    {
        addressArray[i] = &array[i];
    }
}

void PrintElementOfAddress(int size, float *AddressArray[])
{
    // Print the addresses Of each Element of Array
    for (int i = 0; i < size; i++)
    {
        cout << "Address of A[" << i << "] = " << AddressArray[i] << endl;
    }
}

int main()
{
    float Array01[] = {1.2, -0.5, 4, 13, -1};
    const int size = sizeof(Array01) / sizeof(Array01[0]);
    float *Array02[size];
    // Store Element Address
    SaveTheElementAddress(size, Array01, Array02);
    // Print Element Address
    PrintElementOfAddress(size, Array02);
    return 0;
}
