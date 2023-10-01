#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, h;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h;
        char m[h];
        cin >> m;
        if (strcmp(m, "nan") == 0)
        {
            cout << "salem ast" << endl;
        }
        else if (strcmp(m, "panir") == 0)
        {
            cout << "salem ast" << endl;
        }
        else if (strcmp(m, "gosht") == 0)
        {
            cout << "salem ast" << endl;
        }
        else if (strcmp(m, "sabzi") == 0)
        {
            cout << "salem ast" << endl;
        }
        else if (strcmp(m, "miveh") == 0)
        {
            cout << "salem ast" << endl;
        }
        else
            cout << "salem nist" << endl;
    }
}