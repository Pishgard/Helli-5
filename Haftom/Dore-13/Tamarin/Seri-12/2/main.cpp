#include <iostream>

using namespace std;
int main()
{
    int a = 2, b = 0;
    while (a % 2 == 0)
    {
        cin >> a;
        b = b + 1;
    }
    cout << b;
}