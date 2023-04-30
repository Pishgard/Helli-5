#include <iostream>
using namespace std;
int main()
{
    char a[6];
    int sum = 1;
    for (int i = 0; i < 6; i++)
        cin >> a[i];
    for (int i = 0; i < 6; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            sum *= 2;
    }
    cout << sum;
}