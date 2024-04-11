#include <iostream>

using namespace std;
int main()
{
    int a, b, c, sum = 0;
    cin >> a >> b;
    if (b > a)
    {
        c = a;
        a = b;
        b = c;
    }
    a--;
    while (a > b)
    {
        sum += a;
        a--;
    }
    cout << sum;
}
