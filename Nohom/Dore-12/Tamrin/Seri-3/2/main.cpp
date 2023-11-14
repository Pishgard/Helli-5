#include <iostream>
using namespace std;

int main()
{
    int n, m = 1, c = 1;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            c++;
            if (c > m)
                m = c;
        }
        else
            c = 1;
    }
    cout << m;
}
