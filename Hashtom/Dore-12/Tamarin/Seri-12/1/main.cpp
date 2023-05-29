#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    char s[7], str[151];
    strcpy(str, "Mehman hay davat shodeh:");
    for (i = 0; i < n; i++)
    {
        cin >> s;
        strcat(str, " ");
        strcat(str, s);
    }
    cout << str;
}