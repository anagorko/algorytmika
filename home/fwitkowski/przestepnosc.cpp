#include <iostream>
using namespace std;

int main()
{
	cout << "podaj rok:\n";
	
	int r;
	cin >> r;

	if(r%4 == 0 || r%400 == 0){
		cout << "Jest przestępny\n";
	
	}else if(r%100 != 0){
		cout << "Nie jest przestępny\n";
	}

	return 0;
}
