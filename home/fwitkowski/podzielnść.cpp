#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
 	cout << "podaj liczbę całkowitą:\n";
	long long int n;
	cin >> n;
	
	if ( n % 7 == 0 ){
	cout << "liczba jest podzielna przez 7.\n";
	}

	else{
	cout << "liczba nie jest podzielna przez 7.\n";
	}
	

	
	return 0;
}
