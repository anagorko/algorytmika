#include<iostream>
using namespace std;


bool czy_trzy(int x, int y[])
{	
	
 
	
//	cout << "t1" << endl;

	for(int i = x-1; i >= 0; i--){
		
		int z = 0;
	
		for(int t = 0; t < x; t++){
			
					
	
			if(y[i] == y[t]){
			
				z++;
			
			}
			
			if(z == 3){

				return true;
		
			}	
	
		}	

	}
	

	return false;



}
int main()
{
	
	int n;

	cin >> n;
	int a[n];
	
	int w = 0;

	while(w < n){
		cin >> a[w];
		w++;
	}


	if(czy_trzy(n, a)){
		cout << "TAK" << endl;
	}else{
		cout << "NIE" << endl;
	}
 

return 0;
}
