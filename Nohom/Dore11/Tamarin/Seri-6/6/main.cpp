#include <iostream>
using namespace std;

void ShowFibNth(long int n, long int m)
{
    cout << n << endl;
    if (m == 1)
        return;
    ShowFibNth(m - n, n);
}

int main()
{
    long int n, m;
    cin >> n >> m;
    ShowFibNth(n, m);
}