#include <iostream>
using namespace std;

int main ()
{
	cout << "jaka jest temperatura? \n";

	int t;
	cin >> t;
	
	if ( t < 0 ){
	cout << "jest mroz.\n";
	}
	else {
	cout << "jest ciepło\n";
	}

	return 0;
}
