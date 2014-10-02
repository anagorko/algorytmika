#include <iostream>
using namespace std;


int main ()
{
	cout << "jaki jest dzień miesiaca?\n";
	int d;
	cin >> d;

	if ( d % 2 == 0 ){
	cout << "dzisiaj dyżur ma Bajtotka.\n";
	}

	if ( d % 2 == 1 ){
	cout << "dzisiaj dyżur ma Bajtek.\n";
	}



	return 0;
}
