#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int array01Index = 6, array02Index = 6;
    int array01[array01Index] = {1, 3, 5, 7, 9, 11};
    int array02[array02Index] = {2, 4, 6, 8, 10, 12};
    // cin >> array01Index;
    // int sizeOfArray03 = (sizeof(array01) / sizeof(array01[0])) + (sizeof(array02) / sizeof(array02[0]));
    int sizeOfArray03 = array01Index + array02Index;
    int array03[sizeOfArray03];
    int firstArrayIndexCount = 0, SecondArrayIndexCount = 0, therdArrayindexCount = 0;

    // if are using && then you need to check the missing items
    while (firstArrayIndexCount < array01Index || SecondArrayIndexCount < array02Index)
    {
        if (array01[firstArrayIndexCount] > array02[SecondArrayIndexCount])
        {
            array03[therdArrayindexCount] = array02[SecondArrayIndexCount];
            SecondArrayIndexCount++;
            therdArrayindexCount++;
        }
        else
        {
            array03[therdArrayindexCount] = array01[firstArrayIndexCount];
            firstArrayIndexCount++;
            therdArrayindexCount++;
        }
    }
    
    // Copy remaining elements from array01, if any (if you are using && logic)

    // while (firstArrayIndexCount < array01Index)
    // {
    //     array03[therdArrayindexCount] = array01[firstArrayIndexCount];
    //     firstArrayIndexCount++;
    //     therdArrayindexCount++;
    // }

    // Copy remaining elements from array02, if any (if you are using && logic)

    // while (SecondArrayIndexCount < array02Index)
    // {
    //     array03[therdArrayindexCount] = array02[SecondArrayIndexCount];
    //     SecondArrayIndexCount++;
    //     therdArrayindexCount++;
    // }

    // print the 3rd array
    for (int i = 0; i < 12; i++)
    {
        cout << array03[i] << " ";
    }

    return 0;
}