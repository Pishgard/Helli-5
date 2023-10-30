#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> m >> n;

    if (n > m)
    {
        cout << "kheily groneh";
    }
    if (n <= m)
    {
        cout << m - n;
    }
}