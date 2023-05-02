#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 0;
    while (a != 0)
    {
        cin >> a;
        b = b + a;
    }
    cout << b;
}