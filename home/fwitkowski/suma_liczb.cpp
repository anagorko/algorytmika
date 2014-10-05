#include <iostream>
using namespace std;


int main ()
{
	long long int i, n = 0;
	
	for ( i = 1; i <= 1000000000; i++ ){
		if ( i % 2 == 1 ){
		

		n = n + i;
		}
	}
	
	cout << "suma liczb nieparzystych jest równa: " << n << "\n";

	
	return 0;
}
