#include<iostream>
using namespace std;

int main()
{
	cout << "Podaj liczbę n:  ";

	int n;
	cin >> n;

	float s = 0;

	for (int i = 0; i < n; i++){
		cout << "Podaj liczbe nr " << (i + 1) << ": ";

		int l;
		cin >> l;

		s = s + l;
		}
		
		
		s = s / n;

	cout << "Srednia podanych liczb to " << s << "\n";

return 0;
}
	
