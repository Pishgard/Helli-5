#include <iostream>

using namespace std;

int main()
{
    int a, b, x, counter = 0;
    cin >> a >> b >> x;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            for (int j = 1; j <= b; j++)
            {
                if (b % j == 0)
                {
                    if (j + i <= x)
                    {
                        counter++;
                    }
                }
            }
        }
    }
    cout << counter;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, x, counter = 0;
//     cin >> a >> b >> x;
//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= b; j++)
//         {
//             if (a % i == 0 && b % j == 0 && i + j <= x)
//                 counter++;
//         }
//     }
//     cout << counter;
// }