#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[2 * n];
    for (int i = 0; i < 2 * n; i++)
        cin >> a[i];
    int x = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (a[i] == a[i + n])
        {
            x++;
            break;
        }
    }
    if (x == 0)
        cout << "YES";
    else
        cout << "NO";
}
