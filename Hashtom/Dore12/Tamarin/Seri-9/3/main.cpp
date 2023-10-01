#include <iostream>
using namespace std;
int main()
{
    float n[15], max = 0, count = 0, m = 0;
    for (int i = 0; i < 15; i++)
        cin >> n[i];
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (n[i] == n[j])
                count++;
        }
        if (count > max)
        {
            max = count;
            m = n[i];
        }
        if (max == count && n[i] > m)
            m = n[i];

        count = 0;
    }
    cout << m;
}