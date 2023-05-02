#include <iostream>
using namespace std;
int main()
{
    int u = 0, d = 0;
    char n = 'a';
    while (n != 'e')
    {
        cin >> n;
        if (n == 'u')
            u++;
        if (n == 'd')
            d++;
    }
    cout << u << endl
         << d;
}