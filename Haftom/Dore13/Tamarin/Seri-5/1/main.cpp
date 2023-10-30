#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a % 35 == 0)
    {
        cout << a / 35 << endl;
        cout << 0;
    }
    else
    {
        cout << a / 35 + 1 << endl;
        cout << ((a / 35 + 1) * 35) - a;
    }
}