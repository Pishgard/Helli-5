#include <iostream>
using namespace std;
int main()
{
    int f = 1, a = 0, b = 1;
    cin >> a;
    if (a < 0)
    {
        cout << "Error";
    }
    else
    {
        while (a >= b)
        {
            f = f * b;
            b++;
        }
        cout << f;
    }
}