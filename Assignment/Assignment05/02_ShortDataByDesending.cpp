#include <bits/stdc++.h>
using namespace std;

// Create a function forShort Data By Desending
void DesendingSortData(int length, float DataArray[])
{
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            // Swap the Value
            if (DataArray[i] < DataArray[j])
            {
                float temp = DataArray[i];
                DataArray[i] = DataArray[j];
                DataArray[j] = temp;
            }
        }
    }
};
int main()
{
    // Declear the Data Array.
    int length = 5;
    float DataArray[length] = {21, -0.3, 5.8, -6, 9};

    // Call The Function
    DesendingSortData(length, DataArray);

    // Get Output
    for (int i = 0; i < length; i++)
    {
        cout << DataArray[i] << " ";
    }

    return 0;
}