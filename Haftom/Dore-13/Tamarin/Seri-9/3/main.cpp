#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b;
    if (b > a)
    {
        c = a;
        a = b;
        b = c;
    }
    while (a > b + 1)
    {
        a--;
        if (a % 2 == 0)
            cout << a << " ";
    }
}
