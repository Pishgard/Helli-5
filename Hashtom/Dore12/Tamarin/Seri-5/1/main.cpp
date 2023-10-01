#include <iostream>

using namespace std;
int main()
{
    int i = 0, a, n, b, c = 0;
    cin >> n;
    cin >> a;
    b = a;
    while (i < n - 1)
    {
        cin >> a;
        if (b != a)
        {
            b = a;
            c++;
        }
        i++;
    }
    cout << c;
}