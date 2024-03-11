#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a;
    b = (a % 100) / 10 + a % 10 + a / 1000 + (a / 100) % 10;
    if (b % 3 == 0)
    {
        if (a > 9)
        {
            c = b % 10 + b / 10;
            cout << c << endl;
        }
        else
            cout << b << endl;
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}