#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main ()
{
	char string1[] = "mellon";
	char string2[100];
	
	cout << "podaj hasło:\n";

	cin >> string2;

	if ( strcmp(string2, string1) == 0){
	printf ( "hasło jest prawidłowe.\n" );
	}
	else{	
	printf ( "Hasło błędne\n" );
	}


	
	
	return 0;
}
