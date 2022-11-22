#include <iostream>
using namespace std;
int main()
{
    int n, i, m;
    cin >> n;
    if (n < 0)
        cout << "Error";
    else
    {
        m = n - 1;
        i = 2;
        while (i < m)
        {
            if (m % i == 0)
            {
                m--;
                i = 2;
            }
            else
            {
                i++;
            }
        }
        cout << m;
    }
}