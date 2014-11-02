#include <iostream>
using namespace std;

int main() 
{

	int n,k;
	
	cout << "Podaj n\n";
	cin >> n;

	for(int i=0; i<n; i++)
		{
	
		int m = n - i;

		k = ( 2 * n + 1 ) - ( 2 * m );
			
		if(k==0) k = 1;

			for(int j=0; j<m+1; j++)
				{
				cout << " ";
				}
		
			for(int j=0; j<k; j++)
				{
				cout << "*";
				}

			for(int j=0; j<m+1; j++)
				{
				cout << " ";
				}
	
			cout << endl;

		}
		
	n++;

	for(int i=0; i<n; i++)
		{
		int m;
		m = n-i;
	
		k = ( 2 * n + 1 ) - ( 2 * m );

		if(k==0) k = 1;

			for(int j=0; j<m; j++)
				{
				cout << " ";
				}
			
			for(int j=0; j<k; j++)
				{
				cout << "*";
				}
	
			for(int j=0; j<m; j++)
				{
				cout << " ";
				}

		cout << endl;

		}
		
	return 0;
}
