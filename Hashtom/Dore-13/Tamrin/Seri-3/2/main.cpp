#include <iostream>

using namespace std;

int main()
{
    int n, dehliSum = 0, mahaliSum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int dehliRoll, mahaliRoll;
        cin >> dehliRoll >> mahaliRoll;

        dehliSum += dehliRoll;
        mahaliSum += mahaliRoll;
    }

    if (dehliSum > mahaliSum)
        cout << "Dehli";
    else if (mahaliSum > dehliSum)
        cout << "Mahali";
    else
        cout << "Friendship!";
}
