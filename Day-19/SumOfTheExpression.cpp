#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;
    double b=0;
    for (int i = 1; i < 101; i++) {
        sum += 1.0 / (i * (i + 1));
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}
