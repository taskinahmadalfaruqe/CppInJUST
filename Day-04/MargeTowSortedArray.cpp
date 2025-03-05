#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int array01Index, array02Index;
    int array01[5] = {1, 3, 5, 7, 9};
    int array02[5] = {2, 4, 6, 8, 22};
    // cin >> array01Index;
    int sizeOfArray03 = sizeof(array01) + sizeof(array02);
    int array03[sizeOfArray03];
    int firstArrayIndexCount = 0, SecondArrayIndexCount = 0, therdArrayindexCount = 0;
    while (firstArrayIndexCount < 5 || SecondArrayIndexCount < 5)
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
    cout << firstArrayIndexCount << SecondArrayIndexCount << endl;

    // Copy remaining elements from array01, if any
    // while (firstArrayIndexCount < 5)
    // {
    //     array03[therdArrayindexCount] = array01[firstArrayIndexCount];
    //     firstArrayIndexCount++;
    //     therdArrayindexCount++;
    // }

    // // Copy remaining elements from array02, if any
    // while (SecondArrayIndexCount < 5)
    // {
    //     array03[therdArrayindexCount] = array02[SecondArrayIndexCount];
    //     SecondArrayIndexCount++;
    //     therdArrayindexCount++;
    // }
    for (int i = 0; i < 10; i++)
    {
        cout << array03[i] << " ";
    }

    return 0;
}