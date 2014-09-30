#include <iostream>
using namespace std;

int main ()
{
	cout << "Wiek Adama:\n";
	int a;
		cin >> a;
		"\n";
	cout << "Wiek Bartka:\n";
	int b;
		cin >> b;
		"\n";
	cout << "Wiek Cezarego:\n";
	int c;
		cin >> c;
		"\n";

	if ( a + b + c >= 21){
	cout << "Razem maja więcej niż 21 lat.\n";
	}

	else{
	cout << "Razem nie mają 21 lat.\n";
	}


	return 0;
}
