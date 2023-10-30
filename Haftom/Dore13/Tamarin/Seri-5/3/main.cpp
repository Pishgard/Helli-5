#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a >= 0 && a < 4)
        cout << "Low";
    if (a >= 4 && a < 7)
        cout << "Medium";
    if (a >= 7)
        cout << "High";
    if (a < 0)
        cout << "Error";
}