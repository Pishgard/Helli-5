#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b;
    b = b / 100;
    c = a / (b * b);
    if (c < 18.5)
        cout << "kambood vazn";
    else if (c >= 18.5 && c <= 24.99)
        cout << "normal";
    else if (c >= 25 && c <= 29.99)
        cout << "ezafe vazn";
    else if (c >= 30)
        cout << "chagh";
}
