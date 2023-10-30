#include <iostream>
using namespace std;
int main()
{
    char a, b;
    cin >> a;
    if (a >= 'A' && a <= 'Z')
    {
        b = a + 32;
        cout << " " << b << endl;
        cout << b << a << b << endl;
        cout << " " << b;
    }
    else if (a >= 'a' && a <= 'z')
    {
        b = a - 32;
        cout << " " << a << endl;
        cout << a << b << a << endl;
        cout << " " << a;
    }
    else
        cout << "Error";
}
