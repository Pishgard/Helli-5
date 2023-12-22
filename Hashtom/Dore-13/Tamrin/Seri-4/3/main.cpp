#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int b[n];
    float c;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        c += b[i];
    }
    c /= n;
    for (int i = 0; i < n; i++)
    {
        if (b[i] - c < 50)
            cout << 50 << endl;
        else
            cout << b[i] - c << endl;
    }
}