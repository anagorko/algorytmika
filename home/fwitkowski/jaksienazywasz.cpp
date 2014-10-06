#include <iostream>
using namespace std;


int main ()
{
	cout << "jak się nazywasz?\n";
	
	string s;


	int l;
	
	cin >> s;

	l = s.length();
	
	if ( s[l-1] == 'a'){
	cout << "Jestes kobietą.\n";
	}
	else{
	cout << "jesteś mężczyzną.\n";
	}
	return 0;
}
