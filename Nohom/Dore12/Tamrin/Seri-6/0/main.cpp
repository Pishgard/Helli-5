#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int total_pages = a + b + c + d;
    int pages_per_day = 10;
    int min_days = total_pages / pages_per_day;
    if (total_pages % pages_per_day != 0)
    {
        min_days += 1;
    }

    cout << min_days;
}
