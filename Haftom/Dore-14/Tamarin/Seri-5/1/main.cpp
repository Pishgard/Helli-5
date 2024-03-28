#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    i = n - 1;
    while (i > 0)
    {
        if (i % 2 != 0)
            cout << i << endl;
        i--;
    }
}