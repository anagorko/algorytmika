#include <iostream>
using namespace std;

int main ()
{
cout << "3^n\n";	
	cout << "Podaj liczbę n:\n";
	int n;
	cin >> n;

	if ( n % 4 == 0 ){
	cout << "ostnią cyfrą jest 1.\n";
	}

	if ( n % 4 == 1 ){
	cout << "ostatnią cyfrą jest 3.\n";
	}

	if ( n % 4 == 2 ){
	cout << "ostatnią cyfrą jest 9.\n";
	}

	if ( n % 4 == 3 ){
	cout << "ostatnią cyfrą jest 7.\n";
	}
	



	return 0;
}
