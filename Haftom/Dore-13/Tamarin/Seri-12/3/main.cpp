#include <iostream>
using namespace std;
int main()
{
    int a, b = 1;
    cin >> a;
    while (b <= a)
    {
        if (a % b == 0 && b % 2 == 1)
            cout << b << endl;
        b = b + 1;
    }
}