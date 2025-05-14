#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5; // Total number of rows

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int space = 0; space < i; space++) {
            cout << " ";
        }

        // Print stars
        for (int star = 0; star < n - i; star++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
