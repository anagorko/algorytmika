#include<iostream>
#include<string>
using namespace std;

int main()
{
	string imie;
	char a = 'a';

	cout << "Podaj swoje imię\n";
	cin >> imie;
		
	cout << "Witaj " << imie << "!\n";
		
		if ( imie[imie.length()-1] == a )
			{
				cout << "Jesteś kobietą\n";
			}
			else 
			{
				cout << "Jesteś mężczyzną, gratulacje :D\n";	
			}


	return 0;
}
