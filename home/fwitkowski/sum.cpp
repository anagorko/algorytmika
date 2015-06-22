#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	
	for(int j=0; j<n; j++){
	cin >> a[j];
	}
	
	int c=0,d[n];
	for(int i=n-1; i>=0; i--){
	c=c+a[i];
	d[i]=c;
	
	
	}
	

for(int k=0;k<n;k++){
cout << d[k];
}

















	return 0;
}
