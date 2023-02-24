#include <iostream>
using namespace std;

int main()
{
    float ans, m, v;
    cin >> m >> v;
    ans = (m * (v * v)) / 2;
    if (ans >= 0 && ans < 1000)
        cout << "A";
    else if (ans >= 1000 && ans < 2000)
        cout << "B";
    else if (ans >= 2000 && ans < 3001)
        cout << "C";
    else
        cout << "kharj az bazeh";
}