#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    if (n > 6 && n < 11){
        cout<<"black";
    }
    else if(n > 0){
        cout<<"white";
    }
    else{
        cout<<"out";
    } 
	return 0;
}