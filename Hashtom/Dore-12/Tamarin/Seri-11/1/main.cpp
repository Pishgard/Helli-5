#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a * 100 + b * 200 + c * 500 > 1000)
        cout << a * 100 + b * 200 + c * 500 << endl
             << "yes";
    else
        cout << a * 100 + b * 200 + c * 500 << endl
             << "no";
}