#include <iostream>
using namespace std;
int main()
{
    float a = 1, s = 0;
    int l = 0;
    for (; a != 0; )
    {
        cin >> a;
        s += a;
        l++;
    }
    cout << s / (l - 1);
}
