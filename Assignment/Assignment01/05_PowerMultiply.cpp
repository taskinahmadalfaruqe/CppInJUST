#include <iostream>
using namespace std;

// Function to calculate x raised to the power n
int powerMultiply(int x, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x = 3, n = 4;
    cout << x << " raised to the power " << n << " is: " << powerMultiply(x, n) << endl;
    return 0;
}
