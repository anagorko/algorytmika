#include<iostream>
using namespace std;

long long int l2,l3;



double power3(double x, long long int n)
{
	if(n==0){
		return 1;
	}
	if(n%2==0){
		l3++;
		double tmp = power3(x,n/2);
		return tmp*tmp;
	}
	if(n%2!=0){
		l3=l3+2;
		double tmp = power3(x,n/2);
		return tmp*tmp*x;
	}
}

double power2(double x, long long int n){
	if(n==0){
		return 1;
	}
	if(n>0){
		l2++;
		return x*power2(x, n-1);
	}
}





int main()
{
	cout << power3(1,655350000000000023) << endl;
	// cout << power2(1,655350000000000023) << endl;

	cout << l3 << endl;
	cout << l2 << endl;

	
	return 0;
}

