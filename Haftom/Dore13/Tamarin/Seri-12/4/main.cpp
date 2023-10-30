#include <iostream>

using namespace std;
int main()
{
    int a = 0, b = 0, t = 1;
    cin >> a;
    if (a > -1)
    {
        while (a > b)
        {
            b = b + 1;
            t = t * b;
        }
        cout << t;
    }
    else
        cout << "Error";
}