#include <iostream>

using namespace std;

int main()
{
    int n, flag = 0, i = 2;
    cin >> n;
    while (i < n && flag != 1)
    {
        if (n % i == 0)
            flag = 1;
        i++;
    }
    if (flag == 0)
        cout << "avval";
    else
        cout << "morakab";
}