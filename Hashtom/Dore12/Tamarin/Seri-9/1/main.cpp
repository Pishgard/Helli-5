#include <iostream>
using namespace std;
int main()
{
    float n[10], max, e;
    cin >> n[0];
    max = n[0];
    for (int i = 1; i < 10; i++)
    {
        cin >> n[i];
        if (max < n[i])
            max = n[i];
    }
    e = 20 - max;
    for (int i = 0; i < 10; i++)
        cout << n[i] + e << " ";
}
