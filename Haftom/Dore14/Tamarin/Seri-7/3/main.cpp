#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0 && i % 2 == 1)
            cout << i << endl;
    }
}