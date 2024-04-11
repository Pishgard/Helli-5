#include <iostream>

using namespace std;
int main()
{
    int a, i = 1, s = 0;
    while (10 >= i)
    {
        cin >> a;
        s += a;
        i++;
    }
    cout << s;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c, d, e, f, g, h, i, l;
//     cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> l;
//     cout << a + b + c + d + e + f + g + h + i + l;
// }