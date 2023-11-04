#include <iostream>
using namespace std;
void addad(int a)
{
    for (int i = a; i > 0; i--)
    {
        if (a % i == 0)
            cout << i << " ";
    }
}

int main()
{
    int a;
    cin >> a;
    if (a <= 0)
        cout << "error";
    else
        addad(a);
}
