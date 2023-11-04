#include <iostream>
#include <iomanip>
using namespace std;
long double myPow(long double base, unsigned int exp)
{
    if (exp != 0)
        return base * myPow(base, exp - 1);
    return 1;
}

int main()
{
    long double a;
    unsigned int b;
    cin >> a >> b;
    cout << setprecision(3) << fixed << myPow(a, b);
}
