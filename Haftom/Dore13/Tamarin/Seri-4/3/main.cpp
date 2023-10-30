#include <iostream>

using namespace std;

int main()
{
    float n;
    cin >> n;
    if (n >= 0 && n <= 9.99)
        cout << "D";
    if (n >= 10 && n <= 14.99)
        cout << "C";
    if (n >= 15 && n <= 17.99)
        cout << "B";
    if (n >= 18 && n <= 20)
        cout << "A";
}