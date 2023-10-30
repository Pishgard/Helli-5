#include <iostream>

using namespace std;

int main()
{
    char c;
    int n;
    cin >> c >> n;
    if (c == 'N' && n >= 150)
        cout << "Yes";
    else
        cout << "No";
    // if (c == 'N' && n < 150)
    //     cout << "No";
    // if (c == 'Y')
    //     cout << "No";
}