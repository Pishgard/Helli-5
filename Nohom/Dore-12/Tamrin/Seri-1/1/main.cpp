#include <iostream>

using namespace std;

int main() {
    int s1, s2, s3, s4, n = 1;
    cin >> s1 >> s2 >> s3 >> s4;

    if (s1 != s2) 
        n++;
    if (s1 != s3 && s2 != s3) 
        n++;
    if (s1 != s4 && s2 != s4 && s3 != s4) 
        n++;
    
    cout << 4 - n ;
}