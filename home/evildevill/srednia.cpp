#include<iostream>
using namespace std;

int main()

{

	int n;
		cout << "Podaj liczbę n\n";
		cin >> n ; 
	float s = 0;

	for(int i = 0; i < n; i++)
		{
			cout << "Podaj liczbę " << (i+1) << ": ";
			int l;
			cin >> l;
			s = s + l;
		}

	cout << "Średnia liczb wynosi " << (s/n) <<endl;

return 0;

}
