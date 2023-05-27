#include <iostream>
using namespace std;
int main()
{
    float a, m = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        if (m < a)
            m = a;
    }
    cout << m;
}
