#include <iostream>
using namespace std;

int main ()
{
	int n;
	cin >> n;
	int t[n+1];
	t[0]=0;
	t[1]=1;
	for(int i=2; i<=n; i++){
		t[i]=t[i-2] + t[i-1];
	}
cout << t[n] << endl;




	return 0;
}
