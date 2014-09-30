#include <iostream>
using namespace std;

int main ()
{
	cout << "Podaj liczbę n:";
	
	int n;
	cin >> n;

	int w=0;

	int s = 0;
	
	for(int i = 0; i < n; i++) {
		cout << "podaj liczbę nr" << (i+1) << ":";
		
		int l;
		cin >> l;
	
	
		if ( l > w)
		{
			w=l;
		}
	}

	cout << "największa liczba to:" << w << "\n";


	return 0;
}




