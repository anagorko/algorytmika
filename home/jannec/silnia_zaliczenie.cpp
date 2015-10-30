#include<iostream>
using namespace std;
int main ()
{
int t, e=1;
cin >> t;
if(t<=0){
	cout << 1 << endl;
	}
for(int r=1; r<=t; r++){
	e=e*r;
	}
int r;
r=e%10;

cout << r << endl; 




return 0;
}
