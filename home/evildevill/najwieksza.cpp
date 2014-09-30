#include<iostream>
using namespace std;

int main()

{

	int n;
		cout << "Podaj liczbę n\n";
		cin >> n ; 
	float najw = 0;
	bool byla = false;

	for(int i = 0; i < n; i++)
		{
			cout << "Podaj liczbę " << (i+1) << ": ";
			int l;
			cin >> l;
			
			if(l>najw || !byla)
				{
					najw=l; byla = true;
				}
		}
	

	cout << "Największa liczba wynosi " << najw << endl;

return 0;

}
