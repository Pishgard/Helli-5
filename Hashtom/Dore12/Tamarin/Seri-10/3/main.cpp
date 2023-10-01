#include <iostream>
using namespace std;
int main()
{
    int n, x = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
                x++;
        }
        if (x == 2)
            cout << "1"
                 << " ";
        else
            cout << "0"
                 << " ";
        x = 0;
    }
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     for (int i = 0; i < n; i++)
//     {
//         int f = 1;
//         for (int j = 2; j < a[i]; i++)
//         {
//             if (a[i] % j == 0)
//                 f = 0;
//         }
//         if (a[i] == 1)
//             f = 0;
//         cout << f << " ";
//     }
// }