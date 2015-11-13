#include<iostream>

using namespace std;


int main()
{

// inicjalizacja zmiennych i tablicy

	int n;
	cin >> n;
	int a[n];

	int best = 0;			// najlepsza suma (koniec)
	int terazbest = 0;		// najlepsza suma (teraz)


// wpisanie liczb do tablicy

	for(int i = 0; i < n; i++)
		cin >> a[i];

// działania

	for(int j = 1; j <= n; j++)
		{
			
			for(int k = j; k <= n; k++)
				{
					terazbest = 0;

					for(int l = j; l <= k; l++)
						{
							terazbest = terazbest + a[l-1];
						}
									
					if (terazbest > best)
						best = terazbest;
					
				}
		}

	cout << best;


return 0;
}
