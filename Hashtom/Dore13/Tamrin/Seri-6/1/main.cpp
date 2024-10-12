#include <iostream>

using namespace std;

int main()
{
    string a, b;
    int maxf = 0, maxg = 0;
    char winner1, winner2;
    cin >> a >> b;

    int f[256] = {0};
    int g[256] = {0};

    for (int i = 0; i < a.length(); i++)
        f[a[i]]++;

    for (int i = 0; i < b.length(); i++)
        g[b[i]]++;

    for (int i = 0; i < 256; i++)
    {
        if (f[i] > maxf)
        {
            maxf = f[i];
            winner1 = i;
        }
        if (g[i] > maxg)
        {
            maxg = g[i];
            winner2 = i;
        }
    }

    if (maxf > maxg)
        cout << "Helliband" << endl;
    else if (maxf < maxg)
        cout << "Hellifatet" << endl;
    else
        cout << "Tasavi" << endl;
}
