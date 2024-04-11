#include <iostream>
using namespace std;
int main()
{
    char a;
    int b, c;
    cin >> a >> b >> c;
    int d = b * c;
    if (c >= b)
        cout << "error";
    else if (a == 'a' && d > 1402)
        cout << "yes";
    else
        cout << "no";
}