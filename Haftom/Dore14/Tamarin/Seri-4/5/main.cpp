#include <iostream>
using namespace std;

int main()
{
    float a, ans = 0;
    char c;
    while (c != '=')
    {
        cin >> a >> c;
        if (c == '+')
        {
            ans = ans + a;
        }
        else if (c == '-')
        {
            ans = ans - a;
        }
        else if (c == '*')
        {
            ans = ans * a;
        }
        else if (c == '/')
        {
            ans = ans / a;
        }
    }
    cout << ans;
}