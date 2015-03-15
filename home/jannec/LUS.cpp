#include<iostream>
using namespace std;
int main ()
{

int n;
cin >> n;

while(n%10==0){
	n=n/10;
	}

int q;

while(n>0){
	q=n%10;
	cout << q;
	n=n-q;
	n=n/10;
	}

cout << "\n";

return 0;
}