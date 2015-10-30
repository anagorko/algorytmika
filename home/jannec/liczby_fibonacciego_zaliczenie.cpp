#include<iostream>
using namespace std;



/*int fib(int n)
{
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}
	return fib(n-1) + fib(n-2);
}
*/


int main()
{
int q;
cin >> q;
int t[q];
t[0]=1;
t[1]=1;
for(int r=2; r<=q; r++){
	t[r]= t[r-1] + t[r-2];
	}


cout << t[q];




/*int t;
cin >> t;

cout << fib(t);
*/return 0;
} 
