#include <iostream>
using namespace std;

int main()
{
    int n, ans = 1, before = -1;
    cin >> n;

    for (int i = 0; i < 2 * n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == before)
            ans++;

        before = temp;
    }
    cout << ans;
}
