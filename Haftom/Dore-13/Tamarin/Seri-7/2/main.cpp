#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a == 0)
        cout << "out";
    if (a >= 1 && a <= 6)
        cout << "white";
    if (a >= 7 && a <= 10)
        cout << "black";
}
