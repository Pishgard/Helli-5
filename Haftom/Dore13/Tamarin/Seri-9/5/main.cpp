#include <iostream>

using namespace std;
int main()
{
    int i;
    char c = 97;
    cin >> i;
    if (i >= 1 && i <= 26)
    {
        i += 96;
        while (c <= i)
        {
            cout << c << " ";
            c += 1;
        }
    }
    else
        cout << "Error";
}
