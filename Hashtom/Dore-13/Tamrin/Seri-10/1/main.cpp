#include <iostream>

using namespace std;
int main()
{
    int a = 0;
    string k;
    cin >> k;
    for (int i = 0; i < k.size(); i++)
    {
        if (k[i] != ':')
            a = a + k[i] - '0';
    }
    cout << a;
}