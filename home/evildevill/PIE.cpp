#include<iostream>

using namespace std;

int main()
{

int l = 0; //liczba dni
int k = 0; //szukany kurs

cin >> l >> k;

int t[l];

	for (int i=0; i < l; i++)
		{
			cin >> t[i];
		} 

	int pierwszy = -1, ostatni = -1;

	for (int u=0; u < l; u++)		
		{
			if (t[u] == k) {
				if (pierwszy == -1)
					{
						pierwszy == u + 1;
					}
			}
		}	

	for (int j=0; j < l; j++)
		{
			if (t[j] == k) 
			{
				ostatni = j + 1;
			}
		}

   cout << pierwszy << " " << ostatni << endl;

return 0;
}
