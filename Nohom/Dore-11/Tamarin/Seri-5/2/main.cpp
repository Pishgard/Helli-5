#include <iostream>
using namespace std;

bool is_phithagorean_numbers(int a, int b, int c)
{
    if (a != 0 && b != 0 && c != 0)
    {
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    int n, m, x;
    cin >> n >> m >> x;
    if (is_phithagorean_numbers(n, m, x))
        cout << "YES";
    else
        cout << "NO";
}
