#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n <= 10)
    {
        cout << "10";
    }
    else if (n <= 50)
    {
        cout << "15";
    }
    else if (n > 50)
    {
        cout << "20";
    }
}