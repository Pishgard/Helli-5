#include <iostream>

using namespace std;
int main()
{
    int a, i;
    cin >> a;
    i = a;
    if (a <= 0)
        cout << "error";
    else
        while (i > 0)
        {
            if (a % i == 0)
                cout << i << " ";
            i--;
        }
}