#include<iostream>
using namespace std;

int abs(int a)
{
	if (a < 0) {
		return -a;
	} else {
		return a;
	}
}

long long int power3(int x, int n)
{     
	if(n==0){
		return 1;
	}else if(n%2==0){
		double tmp = power3(x,n/2);
		
		return tmp*tmp;
	}else if(n%2==1){
		double tmp = power3(x,n/2);
		
		return x*tmp*tmp;
	}
}

int tp[1000000]; // tablica p
int tq[1000000]; // tablica q

int f(int st, int a[], int p, int q)
{
	int wynik = 0;
	
	for (int wykl_p = st; wykl_p >= 0; wykl_p--) {
		int wykl_q = st - wykl_p;
		
		wynik = wynik + a[wykl_p] * power3(p, wykl_p) * power3(q, wykl_q);
	}

	return wynik;
}

int main()
{
	int r; 		// stopien wielomianu
	cout << "Podaj stopien [r]: "; cin >> r;

	int e[r+1];	// tablica wspolczynnikow

	for(int i = 0; i <= r; i++){
		cout << "Podaj a_" << i << ": "; cin >> e[i];
	}

	int a=e[r],    // wspolczynnik przy najw. potedze
	    s=e[0];    // wyraz wolny

	// szukamy mozliwych wartosci q (wypelniamy tablice q)

	int ile_q = 0;
	for(int q = abs(a); q > 0; q = q - 1) {
		if (a % q == 0){
			tq[ile_q] = q;
			ile_q++;
		}
	}

	// szukamy mozliwych wartosci p (wypelniamy tablice p)
	int ile_p = 0;
	for(int p=1; p <= abs(s); p++) {
		if (s % p == 0){
			tp[ile_p] = p;
			ile_p++;
			
			tp[ile_p] = -p;
			ile_p++;
		}
	}

	// do testow
	
	cout << "q[] = {";	
	for (int i = 0; i < ile_q; i++) {
		cout << tq[i] << " ";
	}
	cout << "}" << endl;

	cout << "p[] = {";	
	for (int i = 0; i < ile_p; i++) {
		cout << tp[i] << " ";
	}
	cout << "}" << endl;
	
	// sprawdzamy kolejne wartosci p/q
	
	// t - ile_q
	// u - ile_p
	
	int c = ile_q * ile_p;

	for(int iq = 0; iq < ile_q; iq++) {
		for(int ip = 0; ip < ile_p; ip++) {
			int p = tp[ip];
			int q = tq[iq];

			if (f(r, e, p, q) == 0) {
				cout << "Mamy pierwiastek: " << p << "/" << q << endl;
			}
		}
	}

	return 0;
}











