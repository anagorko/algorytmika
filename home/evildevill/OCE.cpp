#include<iostream>

using namespace std;

int main()
{

int l;

cin >> l;

int oce[l];

int c = 0;

for (int i=0; i<l; i++)
	{
		cin >> oce[i];
	}

for (int j=1; j<7; j++)
	{
		c = 0;
		
		for (int k=0; k<l; k++)
			{
			 	if (oce[k] == j);
					{
						c++;
					}
			}		

		cout << c << " ";
	}

cout << "\n";

return 0;

}
