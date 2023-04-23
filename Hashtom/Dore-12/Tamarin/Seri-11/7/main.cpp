#include <iostream>
using namespace std;
int main()
{
    int n, counter = 0, c = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (a[i] == a[j])
                counter++;
        if (counter == 1)
            c++;
        counter = 0;
    }
    cout << c;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, k, ans = 0;
//     cin >> n;
//     int a[100]={0};
//     for (int i = 0; i < n; i++)
//     {
//         cin >> k;
//         a[k - 1]++;
//     }
//     for (int i = 0; i <= 100; i++)
//         if (a[i] == 1)
//             ans++;
//     cout << ans;
// }