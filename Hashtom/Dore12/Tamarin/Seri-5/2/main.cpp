#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cin >> a;
    cin >> b;
    int x = a, y = b;

    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    cout << a << endl;
    cout << (x * y) / a;
}