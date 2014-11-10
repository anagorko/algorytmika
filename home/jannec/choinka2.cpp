#include<iostream>
using namespace std;
int main ()

{
int n;
cin >> n;
int m=n;
for(int q=0; q<n; q++){
	for(int w=0; w<m; w++){
		cout << " ";
		}
		
	for(int e= m+m; e<= n+n; e++){
		cout << "*";
		}
		
	for(int r=0; r<m; r++){
		cout << " ";
		}
		m=m-1;
	cout << endl;
	
 	}
m=n;	
for(int q=0; q<=n; q++){
	for(int w=0; w<m; w++){
		cout << " ";
		}
		
	for(int e= m+m; e<= n+n; e++){
		cout << "*";
		}
		
	for(int r=0; r<m; r++){
		cout << " ";
		}
		m=m-1;
	cout << endl;
	
 	}

return 0;
}