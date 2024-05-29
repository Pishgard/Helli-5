#include <iostream>

using namespace std;
int main()
{
    int a, t = 1;
    cin >> a;
    if (a > -1)
    {
        for (int i = 1; i <= a; i++)
        {
            t = t * i;
        }
        cout << t;
    }
    else
        cout << "Error";
}