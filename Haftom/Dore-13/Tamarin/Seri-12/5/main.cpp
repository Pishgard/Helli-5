#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, s = 0;
    cin >> n;
    while (i <= n)
    {
        s = (i * i) + s;
        i += 1;
    }
    cout << s;
}