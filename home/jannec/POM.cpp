#include<iostream>
using namespace std;
int main ()
{

int n=0, m=0, i;
cin >> i;
while(i>-1){
	cin >> i;
	if(i>n){
		n=i;
		m++;
		}
	}
cout << m;

return 0;
}