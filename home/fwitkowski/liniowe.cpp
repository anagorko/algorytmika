#include <iostream>
using namespace std;


int main ()
{
	int a;
	int b;

	cin >> a;
	cin >> b;
	
	if(b < a){
		cout << 0 << "\n";
	}	

	else{ 
		if(a % b == 0){
				cout << 1 << "\n";
		}

	else{ 
		if(a == 0 && b == 0){
				cout << "NIESKONCZONOSC\n";
			
		}
	}	
	}

	return 0;
}
