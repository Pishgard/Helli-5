#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a % 30 == 0)
        cout << "month" << a / 30 << " "
             << "day30";
    else
        cout << "month" << (a / 30) + 1 << " "
             << "day" << a % 30;
}
