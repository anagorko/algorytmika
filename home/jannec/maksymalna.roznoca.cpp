#include<iostream>
using namespace std;
int main ()

{

int n,g=0,f, d;
int m=0;
cin >> n;

double a[n-1];

for (g; g<=n-1; g++){
	cin >> a[m];
	m++;
	}
m=0;
f=a[m];	
d=a[m];

for (g=0; g<=n-1; g++){
 
	if(a[m]>f){
		f=a[m];
		}else if(a[m]<=d){
		d=a[m];
		}
	m++;
	}
int t;

	t=f-d;

cout << "Maksymalna roznica wynosi: " << t << endl;


return 0;
}