#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, sum = 0;
    cin >> n;
    while (n >= i)
    {
        sum += i * i;
        i++;
    }
    cout << sum;
}