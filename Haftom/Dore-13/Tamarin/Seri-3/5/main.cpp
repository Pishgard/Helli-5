#include <iostream>

using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a == 'A')
        cout << "18-20";
    if (a == 'B')
        cout << "15-18";
    if (a == 'C')
        cout << "10-15";
    if (a == 'D')
        cout << "0-10";
}