#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;

	int n;

	cout << "Podaj klucz: ";
	cin >> n;
	getline(cin,s);

	cout << "Podaj kryptogram: ";
	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		unsigned char pom = s[i];

		if (pom >= 'a' && pom <= 'z') {
			pom = pom + n;
			if (pom > 'z') {
				pom = pom - 26; 
			}
		}

		if (pom >= 'A' && pom <= 'Z') {
			pom = pom + n;
			if (pom > 'Z') {
				pom = pom - 26; 
			}
		}

		cout << pom;
	}
	cout << "\n";

	return 0;
}

