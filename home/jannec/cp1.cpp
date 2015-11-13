#include<iostream>
using namespace std;
int main()
{

	int v1, v2;
	
	cin >> v1 >> v2;
	
	int suma = v1;
	
	for(int q = v2 - v1; q > 0; q += -1){
		
		suma += v1 + q;
		
	}
	
	cout << suma << endl;
	
	return 0;
}