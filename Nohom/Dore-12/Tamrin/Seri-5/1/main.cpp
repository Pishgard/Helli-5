#include <iostream>
using namespace std;
int GCD(long long int m, long long int k)
{
    if (k == 0)
        return m;
    else
        return GCD(k, m % k);
}
int main()
{
    long long int m, k;
    cin >> m >> k;
    cout << GCD(m, k);
}