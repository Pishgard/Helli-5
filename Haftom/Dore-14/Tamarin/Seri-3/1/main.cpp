#include <iostream>
using namespace std;

int main()
{
    char c1, c2;
    int n1, n2;
    cin >> c1 >> n1 >> c2 >> n2;
    if (c1 + 1 == c2 && (n1 + 2 == n2 || n1 - 2 == n2))
        cout << "check";
    else if (c1 + 2 == c2 && (n1 + 1 == n2 || n1 - 1 == n2))
        cout << "check";
    else if (c1 - 2 == c2 && (n1 - 1 == n2 || n1 + 1 == n2))
        cout << "check";
    else if (c1 - 1 == c2 && (n1 - 2 == n2 || n1 + 2 == n2))
        cout << "check";
    else
        cout << "not check";
}