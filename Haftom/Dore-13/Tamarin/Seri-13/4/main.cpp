#include <iostream>
using namespace std;
int main()
{
    int n, s = 0;
    cin >> n;
    for (n; n > 0; n = n / 10)
        s += n % 10;
    cout << s;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, s = 0, m;
//     cin >> n;
//     while (n > 0)
//     {
//         s += n % 10;
//         n = n / 10;
//     }
//     cout << s;
// }
