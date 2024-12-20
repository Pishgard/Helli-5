#include <iostream>

using namespace std;

int fun(int x, int i = 1)
{
    if (x == 0)
        return 0;
    if (x < i)
        return fun(x - i / 2) + 1;
    return fun(x, i * 2);
}

int main()
{
    int n, s, t, x, c = 0;
    cin >> n;
    char a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> s >> t;
    if (s > t)
    {
        x = s;
        s = t;
        t = x;
    }

    x = 0;

    for (int i = s - 1; i < t; i++)
    {
        if (a[i] == 'P')
        {
            c += fun(x);
            x = 0;
        }
        else
            x++;
    }
    cout << c;
}
