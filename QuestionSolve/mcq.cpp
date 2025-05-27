#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int s=*(&arr[1]);
    cout << s;
    return 0;
}