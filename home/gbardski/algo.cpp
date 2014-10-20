#include<iostream>
using namespace std;

int main()
{
	string tekst;

	getline (cin, tekst);
	
	for(int i = 0; i < tekst.length(); i++)
	{
		if (tekst[i] == 'a' || tekst[i] == 'A' || tekst[i] == 'e' || tekst[i] == 'E' || tekst[i] == 'i' || tekst[i] == 'I' || tekst[i] == 'o' || tekst[i] == 'O' || tekst[i] == 'u' || tekst[i] == 'U' || tekst[i] == 'y' || tekst[i] == 'Y')
		{
			tekst[i] = 'z';
		}
	}
	
	cout << tekst << endl;

return 0;
}
