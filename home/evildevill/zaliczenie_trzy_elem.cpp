#include<iostream>

using namespace std;

int main()
{

int n;

cin >> n; //ilość elementów tablicy

int a[n];

	for(int i=0; i<n; i++) // czytanie do tablicy 
		{
			cin >> a[i];
		}

bool czy_trzy = false;


	for(int j=0; j<n; j++)

		{

			int k;			//zmienna pomocnicza
		

			k = a[j];

			int q = 0;		//ilość powtórzeń

			for(int l=0; l<=j; l++)
				{

				if(k==a[l])

					{

					q++;

					}
				}

			if(q>=3)

				{

				czy_trzy = true;

				}		

		}

		if(czy_trzy==true)
			{
			cout << "TAK\n";
			}
		else
			{
			cout << "NIE\n";
			}

return 0;
}
