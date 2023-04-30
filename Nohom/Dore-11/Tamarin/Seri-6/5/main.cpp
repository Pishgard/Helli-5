#include <iostream>
using namespace std;

int mirror(string a)
{
    int count = 0, temp = 0;
    for (int i = 7; i >= 0; i--)
    {
        if (a[count] == a[i])
            temp++;
        count++;
    }
    if (temp == 8)
        return 1;
    return 0;
}

int posht(string a)
{
    for (int i = 0; i < 6; i++)
        if (a[i] == a[i + 1] and a[i + 1] == a[i + 2])
            return 1;
    return 0;
}

int tedad(string a)
{
    int temp = 0;
    for (int i = 0; i < 8; i++)
    {
        temp = 0;
        for (int j = i + 1; j < 8; j++)
            if (a[i] == a[j])
                temp++;
        if (temp >= 3)
            return 1;
    }
    return 0;
}

int main()
{
    int a;
    string b;
    cin >> a;
    while (a > 0)
    {
        cin >> b;
        if (mirror(b))
            cout << "Ronde!" << endl;
        else if (posht(b))
            cout << "Ronde!" << endl;
        else if (tedad(b))
            cout << "Ronde!" << endl;
        else
            cout << "Rond Nist" << endl;
        a--;
    }
}