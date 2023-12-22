#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int mi = a[0], ma = a[0], min_f = 0, max_f = 0;
    for (int i = 1; i < n; i++)
    {
        if (ma < a[i])
        {
            ma = a[i];
            max_f = i;
        }
        if (mi > a[i])
        {
            mi = a[i];
            min_f = i;
        }
    }
    cout << min_f + 1 << endl
         << max_f + 1;
}