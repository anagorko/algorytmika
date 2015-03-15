#include <iostream>
using namespace std;

int main ()
{
	int l=0, a=0, p=0;
	
	
	while(a!=-1){
	cin >> a;
		if(a==-1){
			cout << l;
		}else{
			if(a>p){
				l++;
				p = a;
			}
		}	
	}
	
return 0;
}	
