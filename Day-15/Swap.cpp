#include <iostream>
using namespace std;

void swapValue(int &a, int &b)  // Pass by reference
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cin >> a >> b;       // User enters values
    swapValue(a, b);     // Now this will actually swap a and b
    cout << a << " " << b << endl;
    return 0;
}
