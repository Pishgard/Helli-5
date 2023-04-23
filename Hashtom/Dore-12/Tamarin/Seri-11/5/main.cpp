#include <iostream>
using namespace std;
int main()
{
    int p, l, y;
    cin >> p >> l >> y;
    for (int i = 1; i <= y; i++)
    {
        p *= 2;
        p -= l;
    }
    cout << p;
}