#include <iostream>
using namespace std;
int main()
{
    int n = 0, min = 0, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 0; j < n; j++)
    {
        if (a[j] > 1)
        {
            min++;
            for (int s = j; s < n && sum < 4; s++)
            {
                if (a[s] + sum <= 4)
                {
                    sum = sum + a[s];
                    a[s] = 0;
                }
            }
            sum = 0;
        }
    }
    cout << min;
}