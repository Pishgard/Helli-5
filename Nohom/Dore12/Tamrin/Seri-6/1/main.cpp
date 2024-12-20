#include <iostream>
using namespace std;
bool is_prime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n, m;
    cin >> n;
    m = n;
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    m++;
    for (int i = 0; i < s; i++)
    {
        while (is_prime(m) == false)
            m++;
        m++;
    }
    cout << m - 1;
}