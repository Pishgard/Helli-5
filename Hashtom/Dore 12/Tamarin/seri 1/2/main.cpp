#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> m >> n;
    
    if (n > m){
        cout << "mojodi kafi nist";
    } else {
        cout << m - n;
    }
	return 0;
}