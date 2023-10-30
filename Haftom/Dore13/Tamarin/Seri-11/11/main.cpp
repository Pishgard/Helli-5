#include <iostream>
using namespace std;
int main()
{
    int a, b = 0, c = 1;
    while (c <= 10)
    {
        cin >> a;
        if (a == 2)
        {
            cout << "yes" << endl;
            b++;
        }
        else
            cout << "no" << endl;
        c++;
    }
    cout << b;
}
