#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char c[n], tmp;
    // cin>>c;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (c[j] > c[j + 1])
            {
                tmp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i];
    }
}

// #include <iostream>
// #include <string.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     char a[n + 1], x;
//     cin >> a;
//     for (int i = n - 2; i >= 0; i--)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 x = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = x;
//             }
//         }
//     }
//     cout << a;
// }