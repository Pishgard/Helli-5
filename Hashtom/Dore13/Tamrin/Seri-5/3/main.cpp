#include <iostream>
using namespace std;
int main()
{
    int a[15];
    for (int i = 0; i < 15; i++)
        cin >> a[i];

    int b[21] = {0};
    for (int i = 0; i < 15; i++)
        b[a[i]]++;

    int ma = b[0];
    int m = 0;
    for (int i = 1; i < 21; i++)
    {
        if (b[i] >= ma)
        {
            ma = b[i];
            m = i;
        }
    }

    cout << m;
}
