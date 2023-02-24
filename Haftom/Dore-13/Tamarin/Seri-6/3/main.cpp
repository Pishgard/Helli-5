#include <iostream>
using namespace std;

int main()
{
    float a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '+')
        cout << a + b;
    else if (c == '-')
        cout << a - b;
    else if (c == '*')
        cout << a * b;
    else if (c == '/')
        cout << a / b;
    else
        cout << "poshtibani nemishavad";
}