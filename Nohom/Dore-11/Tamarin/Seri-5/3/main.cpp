#include <iostream>
using namespace std;

bool is_full_number(int a)
{
    int n = 0;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0)
            n += i;
    }
    if (n == a)
        return true;
    return false;
}

int main()
{
    int a;
    cin >> a;
    if (is_full_number(a))
        cout << "YES";
    else
        cout << "NO";
}