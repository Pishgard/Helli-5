#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int ticket;
        cin >> ticket;

        int sum_first_half = 0;
        int sum_second_half = 0;

        for (int i = 0; i < 3; i++)
        {
            int digit = ticket % 10;
            sum_first_half += digit;
            ticket /= 10;
        }

        for (int i = 0; i < 3; i++)
        {
            int digit = ticket % 10;
            sum_second_half += digit;
            ticket /= 10;
        }

        if (sum_first_half == sum_second_half)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
