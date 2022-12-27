#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= 20)
    {
        cout << "Yes";
    }
    else
    {
        if (b > 160 && c > 60)
            cout << "Yes";
        else
            cout << "No";
    }
}