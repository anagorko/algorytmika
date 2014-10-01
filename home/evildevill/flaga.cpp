#include<iostream>
using namespace std;

int main()
{

	int n;
	cout << "Podaj n\n";
	cin >> n;

		for (int i=0; i<=(2*n); i++) 	
			{
				for (int j=0; j<=(16*n); j++)
					{
						cout << ".";
					}
				cout << endl;
			}


		for (int i=0; i<=(2*n); i++) 	
			{
				for (int j=0; j<=(16*n); j++)
					{
						cout << "#";
					}
				cout << endl;
			}
return 0;

}
