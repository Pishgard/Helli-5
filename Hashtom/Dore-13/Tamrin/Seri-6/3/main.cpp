#include <iostream>
using namespace std;
int main()
{
    string name;
    int a = 0;
    char s;
    getline(cin, name);
    for (int i = 0; i < name.size(); i++)
    {
        if ((name[i] >= 65 && name[i] <= 90) || (name[i] >= 97 && name[i] <= 122))
            if (name[i] == 'C')
                cout << 'Z';
            else if (name[i] == 'B')
                cout << 'Y';
            else if (name[i] == 'A')
                cout << 'X';
            else if (name[i] == 'c')
                cout << 'z';
            else if (name[i] == 'b')
                cout << 'y';
            else if (name[i] == 'a')
                cout << 'x';
            else
            {
                s = name[i] - 3;
                cout << s;
            }
        else
        {
            cout << name[i];
        }
    }
}