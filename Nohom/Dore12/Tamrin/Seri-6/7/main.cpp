#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char target, char auxiliary)
{
    if (n == 1)
    {
        cout << "Disk 1 moved from " << source << " to " << target << endl;
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, target);
    cout << "Disk " << n << " moved from " << source << " to " << target << endl;
    towerOfHanoi(n - 1, auxiliary, target, source);
}

int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
}
