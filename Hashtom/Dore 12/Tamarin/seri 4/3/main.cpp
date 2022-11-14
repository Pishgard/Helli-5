#include <iostream>

using namespace std;

int main()
{
    int x, t = 0;
    cin >> x;
    if (x < 1)
    {
        cout << "Error";
    }
    else
    {
        while (x != 0)
        {
            t += x % 10;
            x /= 10;
        }
        cout << t;
    }
}