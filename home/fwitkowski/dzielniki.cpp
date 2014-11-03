#include <iostream>
using namespace std;


int main ()
{
	cout << "podaj liczbę:\n";

	int n; 
	cin >> n;

	for(int i = 1; i < n; i++){
		if(n%i == 0){		
			cout << i << "\n";
		}
	}
	
	cout << n << "\n";
	return 0;
}
