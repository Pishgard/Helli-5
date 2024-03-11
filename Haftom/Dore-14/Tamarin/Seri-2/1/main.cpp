#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        if (b == c)
        {
            cout << "Motesaviolazla";
        }
        else
        {
            cout << "Motesaviossagheyn";
        }
    }
    else if (c == a)
    {
        if (a == b)
        {
            cout << "Motesaviolazla";
        }
        else
        {
            cout << "Motesaviossagheyn";
        }
    }
    else
    {
        cout << "Mokhtalefolazla";
    }
}

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == c && b == c)
    {
        cout << "Motesaviolazla";
    }
    else if (b != c && a != c && a != b)
    {
        cout << "Mokhtalefolazla";
    }
    else
    {
        cout << "Motesaviossagheyn";
    }
}
