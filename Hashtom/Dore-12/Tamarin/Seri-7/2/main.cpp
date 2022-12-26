#include <iostream>
using namespace std;

int main()
{
    int n, b, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        // sum += b * b;
        sum = sum + (b * b);
    }
    cout << sum;
}