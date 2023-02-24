#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    a = a / 1000;
    if (a >= 20 && a < 30)
        cout << "kambod vazn";
    else if (a >= 30 && a < 55)
        cout << "normal";
    else if (a >= 55 && a < 70)
        cout << "ezafe vazn";
    else if (a >= 70 && a < 101)
        cout << "chagh";
    else
        cout << "vazn nadorost ast";
}