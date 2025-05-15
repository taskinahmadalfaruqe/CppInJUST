#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. A floating point number
    float num1 = 567.123;

    // 2. A character
    char gender = 'F';

    // 3. An integer
    int salary = 1000;

    // 4. A string
    string message = "Welcome to China!";

    // 5. A float array
    float numbers[] = {7, 2, 0.3f, -1, 5.5};

    // 6. A character array (some characters by ASCII code)
    char mixed[] = {'a', 'H', 72, 99}; // 72 = 'H', 99 = 'c'

    // 7. An array of strings
    string names[] = {"Smith", "Jack", "David"};

    // Printing All Values

    cout << "*Float value: " << num1 << endl;
    cout << "*Character value: " << gender << endl;
    cout << "*Integer value: " << salary << endl;
    cout << "*String message: " << message << endl;

    cout << "*Float array values: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    cout << "*Character/ASCII mixed array values: ";
    for (int i = 0; i < 4; i++) {
        cout << mixed[i] << " ";
    }

    cout << "*Names array values: ";
    for (int i = 0; i < 3; i++) {
        cout << names[i] << " ";
    }

    cout << endl;
    return 0;
}
