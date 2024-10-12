#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int bacteria = 1, days = 0;

    for (days; bacteria < x; days++)
        bacteria *= 2;

    if (bacteria > x)
        days--;

    cout << days;
}
