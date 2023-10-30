#include <iostream>
using namespace std;
int main()
{
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > 96 && a < 123)
        a = a - 32;
    if (b > 64 && b < 91)
        b = b + 32;
    if (c > 64 && c < 91)
        c = c + 32;
    if (d > 64 && d < 91)
        d = d + 32;
    cout << a << b << c << d;
}
