#include <iostream>
using namespace std;

template <typename T1, typename T2, typename T3>
auto findMaxNumber(T1 a, T2 b, T3 c) -> decltype((a + b + c) / 3) {
    auto maxVal = a;
    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;
    return maxVal;
}


int main() {
    auto result = findMaxNumber(10, 20.5f, 'C');  // 10 (int), 20.5f (float), 'C' = 67
    cout << "Largest: " << result << endl;        // Should print 67, since 'C' > 20.5

    return 0;
}
