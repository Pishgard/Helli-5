#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 1, i = 1;

    cin >> a >> b;

    while (i <= a && i <= b)
    {
        if (a % i == 0 && b % i == 0)
        {
            c = i;
        }
        i++;
    }
    cout << c;
}