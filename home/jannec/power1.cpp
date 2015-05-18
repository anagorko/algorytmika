#include<iostream>
using namespace std;
int power1(int x, int n){
	int t=x;
	for(int r=1; r<n; r++){
		t=t*x;
	}
	return t;
}

int main ()
{
int t, n;

cin >> t >> n;

cout << power1(t,n);



return 0;
}
