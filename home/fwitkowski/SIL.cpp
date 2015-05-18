#include <iostream>
using namespace std;

int main ()
{

	int n, m=1;
	cin >> n;

	if(n==1 || n==0){
		cout << m << endl;
	}else{
	for(int i=1; i<=n; i++){
		 m=(m*i)%10;
	}
cout << m << endl; 

	}







	return 0;
}
