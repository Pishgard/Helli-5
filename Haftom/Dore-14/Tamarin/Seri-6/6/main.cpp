#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = n * -1;
    if (n > a)
    {
        n = n - 1;
        while (n > a)
        {
            cout << n << endl;
            n = n - 1;
        }
    }
    else
    {
        a = a - 1;
        while (a > n)
        {
            cout << a << endl;
            a = a - 1;
        }
    }
}