#include <iostream>
using namespace std;

int main()
{
    int n, b, min = 999999999, max = 0, in_max = 1, in_min = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> b;
        if (b > max)
        {
            max = b;
            in_max = i;
        }
        if (b < min)
        {
            min = b;
            in_min = i;
        }
    }
    cout << in_min << endl
         << in_max;
}