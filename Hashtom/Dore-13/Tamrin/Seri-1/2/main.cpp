#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    if (m >= n)
        cout << "pool lazem nadari";
    else
        cout << n - m;
}