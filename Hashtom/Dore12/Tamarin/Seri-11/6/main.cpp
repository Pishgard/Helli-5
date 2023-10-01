#include <iostream>
using namespace std;
int main()
{
    int n, m, p = 0;
    cin >> n;
    m = 2 * n;
    char a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (a[i] != a[i + n])
            p++;
    if (p == n)
        cout << "YES";
    else
        cout << "NO";
}