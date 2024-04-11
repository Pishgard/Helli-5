#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    a = a * 100;
    b = b * 200;
    c = c * 500;
    d = a + b + c;
    cout << d << endl;
    if (d >= 1000)
        cout << "yes";
    else
        cout << "no";
}