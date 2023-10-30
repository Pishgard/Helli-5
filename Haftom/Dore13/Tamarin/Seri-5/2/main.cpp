#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a * 2 >= 100)
    {
        cout << "Yes" << endl;
        cout << a * 2;
    }
    else
        cout << "No";
}