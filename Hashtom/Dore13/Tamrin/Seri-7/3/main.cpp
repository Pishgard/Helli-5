#include <iostream>

using namespace std;
int main()
{
    int c;
    cin >> c;
    char c2[c], c1[c], d;
    cin >> c2;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < c; j++)
        {
            d = i + 97;
            if (c2[j] == d)
                cout << d;
        }
    }
}
