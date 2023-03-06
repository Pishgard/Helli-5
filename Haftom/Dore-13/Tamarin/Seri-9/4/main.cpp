#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;

    if (a > 20 || a < 1)
    {
        cout << "Error";
    }
    else
    {
        cout << "y";
        while (a >= 1)
        {
            cout << "e";
            a = a - 1;
        }
        cout << "s";
    }
}
