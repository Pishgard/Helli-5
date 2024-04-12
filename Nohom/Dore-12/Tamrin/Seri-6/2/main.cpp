#include <iostream>
using namespace std;

int main()
{
    float pi = 3.14;
    float L;

    cin >> L;

    float radius = (L / pi) / 2;
    float area = pi * (radius * radius);
    int result = area;

    cout << result;
}
