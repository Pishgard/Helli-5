#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cin >> a >> b;
    if (a > 500 && b > 500)
        cout << "Please Help";
    else if (a < b)
        cout << "Tunb Bozorg";
    else if (a > b)
        cout << "Tunb Kochak";
}
