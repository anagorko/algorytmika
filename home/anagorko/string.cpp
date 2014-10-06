#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "Wpisz slowo: ";

	string s;

	cin >> s;

	cout << "Pierwsza litera: " << s[0] << "\n";
	cout << "Druga litera: " << s[1] << "\n";
	cout << "Trzecia litera: " << s[2] << "\n";
	cout << "Czwarta litera: " << s[3] << "\n";

	cout << "Dlugosc slowa: " << s.length() << "\n";

	for (int i = 0; i < s.length(); i++) {
		cout << "Litera nr " << (i+1) << ": " << s[i] << "\n";
	}

	cout << "Ostatnia litera: " << s[s.length()-1] << "\n";

	unsigned char a;

	cout << "ASCII Table\n\n";

	for (a = 32; a < 128; a++) {
		cout << "Znak nr: " << (int) a << ": " << a << "\n";
	}
	cout << "\n";

	cout << 17 << " " << 0b10001 << " " << 0x11;

	return 0;
}

