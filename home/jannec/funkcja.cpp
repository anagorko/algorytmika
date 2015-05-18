#include<iostream>
using namespace std;

int fib(int n){
	cout << "wywolano fib(" << n << ")" << endl;
	if(n==0 || n==1){
		return 1;
	}
	return fib(n-1) + fib (n-2);
}
int main()
{
	int k;
	cin >> k;

	cout << fib(k);

	return 0;
}
