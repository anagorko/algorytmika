#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main ()
{
	char string1[] = "mellon";
	char string2[100];
	int flaga = 0;
	
	do{
		cout << "podaj hasło:\n";
		cin >> string2;

		if ( strcmp(string2, string1) == 0){
		printf ( "hasło jest prawidłowe.\n" );
		flaga = 1;
		}
		
		else{	
		printf ( "Hasło błędne\n" );
		}
	}
	while (flaga != 1);
	
	
	return 0;
}
