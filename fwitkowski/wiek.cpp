#include <iostream>
using namespace std;

int main ()
{
	cout << "Ile masz lat?\n";
	
	int l;
	cin >> l;

	if ( l >= 18 ){
	cout << "Jesteś pełnoletni.\n";
	}

	else {
	cout << "Nie jesteś pełnoletni.\n";
	}

	return 0;
}
