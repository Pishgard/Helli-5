#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int d1[n],d2[n];
	for (int i = 0 ; i < n ; i++)
    {
		cin>>d1[i];
	}
    for (int i = 0 ; i < n ; i++)
    {
		cin>>d2[i];
	}
    
	for (int i = 0 ; i < n ; i++)
    {
		for (int j = d1[i] ; j >0 ; j--)
        {
            if (d1[i]%j==0 && d2[i]%j==0)
            {
                cout << j << " ";
                break;
            }
        }
	}
}