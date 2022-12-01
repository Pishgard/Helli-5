#include <iostream>
using namespace std;
int main ()
{
    int n, k, sum=0;
    cin >> n >> k;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    if (sum == k)
        cout << "Yes";
    else
        cout << "No" << endl << sum;
}
