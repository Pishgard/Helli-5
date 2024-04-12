#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))
        {
            a[i] += 1;
            if (a[i] == 'z' + 1 || a[i] == 'Z' + 1)
                a[i] -= 26;
        }
    }
    cout << a;
}