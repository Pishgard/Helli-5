#include <iostream>

using namespace std;
int main()
{
    int n, m;
    cin >> n;
    m = n;
    while (m > 9)
    {
        n = m;
        m = 0;
        while (n > 0)
        {
            m += (n % 10);
            n /= 10;
        }
    }
    cout << m;
}