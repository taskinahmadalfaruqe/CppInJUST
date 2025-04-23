#include <bits/stdc++.h>
using namespace std;

int main()
{
    string myString = "HELLO";

    for (int i = 0; i < myString.length(); i++)
    {
        if (myString[i] == 'L')
        {
            myString.erase(i, 1);
            i--; // adjust index to re-check the current position
        }
    }

    cout << "Modified string: " << myString << endl;

    return 0;
}
