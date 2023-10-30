#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n>=0 && n<10)
        cout << n;
    if (n>=10 && n<100)
        cout << n%10 + n/10;
    if (n>100 && n<=120)
    {
        int k=n/10;
        cout << n%10 + k%10 + k/10;
    }
}
