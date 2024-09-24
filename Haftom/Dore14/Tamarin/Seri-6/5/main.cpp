#include <iostream>
using namespace std;
int main()
{
    int a, b = 3;
    cin >> a;
    while (b < a)
    {
        cout << b << endl;
        b = b + 3;
    }
}