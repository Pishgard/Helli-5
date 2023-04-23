#include <iostream>
using namespace std;
int main()
{
    int n, p, d;
    cin >> n;
    char a[n];
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> x[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i] < x[j])
            {
                p = a[i];
                d = x[i];
                a[i] = a[j];
                a[j] = p;
                x[i] = x[j];
                x[j] = d;
            }
            else if (x[i] == x[j] && a[i] > a[j])
            {
                p = a[j];
                d = x[j];
                a[j] = a[i];
                a[i] = p;
                x[j] = x[i];
                x[i] = d;
            }
        }
    }
    for (int i = n - 1; i > -1; i--)
        cout << a[i] << " ";
}
