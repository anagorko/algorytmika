#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;

	if(a == 0) {
	    if (b == 0) {
    		cout << "NIESKONCZONOSC rozwiazan\n";		
	    } else {
	        cout << "Nie ma rozwiazan\n";
	    }
	} else {
	    if (b % a == 0) {
			cout << "Jedno rozwiazanie\n";
		} else {
			cout << "Nie ma rozwiazan\n";
		}
    }

    return 0;
}