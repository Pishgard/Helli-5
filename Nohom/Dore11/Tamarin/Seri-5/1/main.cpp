#include <iostream>
using namespace std;

bool palandrom(int n)
{
    int temp = 0, r = 0;
    int c = n;
    while (n != 0)
    {
        temp = n % 10;
        r = r * 10 + temp;
        n = n / 10;
    }
    if (r == c)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    if (palandrom(n))
        cout << "YES";
    else
        cout << "NO";
}
