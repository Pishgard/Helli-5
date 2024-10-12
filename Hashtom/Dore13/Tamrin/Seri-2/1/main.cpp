#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, m = 0, d = 0;
    cin >> n;
    char c;
    while (i < n)
    {
        cin >> c;
        if (c == 'M')
        {
            m++;
        }
        else
        {
            d++;
        }
        i++;
    }
    if (d < m)
    {
        cout << "Mahali";
    }
    if (d > m)
    {
        cout << "Domhali";
    }
    if (d == m)
    {
        cout << "Friendship";
    }
}
