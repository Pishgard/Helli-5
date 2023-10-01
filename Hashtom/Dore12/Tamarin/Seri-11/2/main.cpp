#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << "1";
    else if (b > a && b > c)
        cout << "2";
    else
        cout << "3";
}