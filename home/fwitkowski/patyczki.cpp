#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	cout << "długość 1 patyczka:\n";
		cin >> a;
		"\n";
	cout << "długość 2 patyczka:\n";
		cin >> b;
		"\n";
	cout << "długość 3 patyczka:\n";
		cin >> c;
		"\n";

	if ( a + b >= c && a + c >= b && c + b >= a ){
	cout << "można z nich zbudować trójkąt.\n";
		
		if ( a == b || a == c || b == c ){
		cout << "ten trójkąt jest równoramienny.\n";

			if ( a == b && b == c ){
			cout << "ten trójkąt jest równoboczny.\n";
			}
		}
	if ( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a ){
	cout << "można zbudować trójkąt prostokątny.\n";
	}
	}



	return 0;
}
