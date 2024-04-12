#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    char c[x], l[x], g[x];
    for (int i = 0; i < x; i++)
        cin >> c;
    for (int i = 0; i < x; i++)
        cin >> l[i];
    for (int i = 0; i < x; i++)
        cin >> g[i];
    for (int i = 0; i < x; i++)
    {
        bool L = false, G = false;
        for (int j = 0; j < x; j++)
        {
            if (c[i] == l[j])
                L = true;
            if (c[i] == g[j])
                G = true;
        }
        if (L && G)
            cout << c[i] << " ";
    }
}