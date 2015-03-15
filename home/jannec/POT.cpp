#include<iostream>
using namespace std;
int main ()
{
int n;
cin >> n;

for(int d=1; d<n; d++){
	if(n%d==0){
		cout << d << "\n";
		}
	}	



return 0;
}