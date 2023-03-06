#include <iostream>
using namespace std;
int main()
{
    int x, c = 1;
    cin >> x;
    if (x < 1)
    {
        cout << "Error";
    }
    else
    {
        while (c <= x)
        {
            cout << c << endl;
            c = c + 2;
        }
    }
}