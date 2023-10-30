#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, t;
    cin >> a >> b >> c >> d;
    t = a + b + (b * d) + (a * c);
    if (t <= 30)
        cout << "No";
    else if (t > 30 && t < 60)
        cout << "Yes";
    else if (t >= 60)
        cout << "Please Help";
}
