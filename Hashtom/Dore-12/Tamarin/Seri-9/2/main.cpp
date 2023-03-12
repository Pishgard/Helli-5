#include <iostream>

using namespace std;

int main()
{
    float a[10], b[10];
    for (int i = 0; i < 10; i++)
        cin >> a[i];

    for (int i = 0; i < 10; i++)
        cin >> b[i];

    for (int i = 0; i < 10; i++)
        cout << (a[i] + b[i]) / 2 << " ";
}