#include <iostream>
using namespace std;

int main()
{
	string s;
	int n;

	cout << "podaj tekst:\n";
	cin >> s;
	getline(cin, s);

	cout << "podaj klucz ";
	cin >> n;
	
	
	for( int i=0; i < s.length(); i++){
		char pom = s[i];

		if( pom >= 'a' && pom <= 'z') {
			pom = pom + n;
			if(pom > 'z'){
				pom = pom -26;
			}
		}
	
		if( pom >= 'A' && pom <= 'Z') {
			pom = pom + n;
			if(pom > 'Z'){
				pom = pom -26;
			}

		}


	}
	return 0;
}
