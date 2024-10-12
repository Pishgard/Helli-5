#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch[100];
    cin >> ch;
    for (int i = 0; i < n; i++)
    {
        if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
            cout << ch[i];
    }
}
