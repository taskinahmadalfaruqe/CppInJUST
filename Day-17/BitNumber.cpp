
#include <iostream>
using namespace std;

int main()
{
    int number = 79245;
    int sum = 0;

    int temp = number;
    while (temp != 0)
    {
        sum += temp % 10;
        cout << temp % 10 << " ";
        temp /= 10;
    }
    cout << endl;

    cout << "The sum of digits in " << number << " is: " << sum << endl;
    return 0;
}