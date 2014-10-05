#include <iostream>
using namespace std;

int main ()
{
	int dzien;	
		cout << "Podaj dzień miesiąca\n";
		cin >> dzien;

			if ( dzien % 2 == 0 )
				{
				cout << "Dzisiaj śmieci wynosi Bajtotka\n";
				}
		
			if ( dzien % 2 == 1 )
				{
				cout << "Dzisiaj śmieci wynosi Bajtek\n";
				}



return 0;
}
