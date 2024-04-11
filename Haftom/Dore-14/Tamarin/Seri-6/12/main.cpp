#include <iostream>
using namespace std;
int main()
{
    int a, b = 1;
    cin >> a;
    if (a > 100)
        cout << "sofre tamam shod!";
    else
    {
        while (b <= a)
        {
            cout << "*****" << endl;
            b++;
        }
    }
}
