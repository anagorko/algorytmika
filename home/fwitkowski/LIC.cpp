#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	long long int n;
	cin >> n;

	bool pierwsza = true;		
	long long int m = sqrt(n);
	for(int i = 2; i <= m; i++){
				
		if(n%i==0){
			pierwsza = false;
		break;
		}
	}

	if(pierwsza){
		cout << "pierwsza" << endl;
	}else{
		cout << "zlozona" << endl;
	}
		
	return 0;
}
