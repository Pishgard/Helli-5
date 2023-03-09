#include <iostream>
using namespace std;
int main()
{
    int n, i, j, s, m;
    cin >> n;
    m = (n - 1) / 2;
    for (int i = 0, s = 1; i <= m; i++, s += 2)
    {
        for (int j = 0; j < m - i; j++)
            cout << " ";
        for (int k = 0; k < s; k++)
            cout << "*";
        cout << endl;
    }
    for (int i = 0, s = n - 2; i < m; i++, s -= 2)
    {
        for (int j = m; j >= m - i; j--)
            cout << " ";
        for (int k = 0; k < s; k++)
            cout << "*";
        cout << endl;
    }
}
