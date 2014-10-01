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

	if ( a + b >= c ){
	cout << "można z nich zbudować trójkąt.\n";
		
		if ( a == b ){
		cout << "ten trójkąt jest równoramienny.\n";

			if ( a == b ==c ){
			cout << "ten trójkąt jest równoboczny.\n";
			}
		}
	if ( a^2 + b^2 == c^2){
	cout << "można zbudować trójkąt prostokątny.\n";
	}
	}






	return 0;
}
