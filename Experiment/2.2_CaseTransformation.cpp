#include <bits/stdc++.h>
using namespace std;

char MakeLowerCase(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    return c;
}

char MakeUpperCase(char c)
{

    if (c >= 'a' && c <= 'z')
    {
        return c - 32;
    }
    return c;
}

int main()
{
    char input;

    cout << "Enter a letter: " << endl;
    cin >> input;

    // Check if uppercase
    if (input >= 'A' && input <= 'Z')
    {
        cout << "Lowercase: " << MakeLowerCase(input) << endl;
    }
    // Check if lowercase
    else if (input >= 'a' && input <= 'z')
    {
        cout << "Uppercase: " << MakeUpperCase(input) << endl;
    }
    else
    {
        cout << "Invalid input - not a letter" << endl;
    }

    return 0;
}