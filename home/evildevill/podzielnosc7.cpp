#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Podaj liczbę n \n";
	cin >> n;
		
		if(n % 7 ==0)
			{
			cout << "Liczba " << n << " jest podzielna przez 7\n";
			cout << "Wynikiem z dzielenia tej liczby jest " << n/7 << "\n";
			}
		else
			{
			cout << "Liczba " << n << " nie jest podzielna przez 7\n";
			}

return 0;
}
