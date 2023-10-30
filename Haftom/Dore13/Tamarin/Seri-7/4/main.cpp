
#include <iostream>
using namespace std;

int main()
{
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == b || c == d || a == d || b == c)
        cout << "YES";
    else
        cout << "NO";
}