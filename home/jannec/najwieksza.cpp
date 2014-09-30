#include<iostream>
using namespace std;

int main()

{
	cout << "Podaj liczbe n ";

	int n;
	cin >> n;

	int s = 0;

	for(int i = 0; i < n;i++){

		cout << "Podaj liczbe nr: " << (i + 1) << ": ";

		int l;
		cin >> l;

		if(s > l) {
		} else {
			s = l;
		}
	}
	
	cout << "Wynik: " << s << "\n";
	

	return 0;
}
