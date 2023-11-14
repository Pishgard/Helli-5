#include <iostream>
using namespace std;
int main()
{
    int n;
    bool ishard = true;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        if (j == 0)
            ishard = false;
    }
    if (ishard)
        cout << "HARD";
    else
        cout << "EASY";
}
