#include <iostream>
using namespace std;
int main()
{
    int a, v = 0, l, d = 0;
    cin >> a;
    for (int i = 1; a >= i; i++)
        if (a % i == 0)
            v++;
    l = a % 10;
    for (int n = 1; l >= n; n++)
        if (l % n == 0)
            d++;
    if (d == 2 && v == 2)
        cout << "superaval";
    else if (v == 2 && d != 2)
        cout << "aval";
    else
        cout << "morakab";
}
