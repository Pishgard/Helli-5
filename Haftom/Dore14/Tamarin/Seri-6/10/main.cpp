#include <iostream>

using namespace std;
int main()
{
    int a, i = 1, s = 0;
    while (10 >= i)
    {
        cin >> a;
        if (a % 2 == 0)
            s++;
        i++;
    }
    cout << s;
}