#include<iostream>
using namespace std;

int l3=0;

long long int power3(int x, int n)
{     
cout << "power3(" << x << "," << n << ")" << endl;
	if(n==0){
		return 1;
	}else if(n%2==0){
		double tmp = power3(x,n/2);
		l3++;
		return tmp*tmp;
	}else if(n%2==1){
		double tmp = power3(x,n/2);
		l3++;
		l3++;
		return x*tmp*tmp;
	}
}

int main()

{

int t, r;

cin >> t;
cin >> r;

cout << power3(t,r) << endl;
cout << l3 << endl;
return 0;

}	
