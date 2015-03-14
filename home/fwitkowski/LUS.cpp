#include <iostream>
using namespace std;

int main()
{
	int n;
	int m = 0;
	cin >> n;

	while(n != 0){
		m = 10 * m + (n % 10);

		n = n / 10;
	

	}
	
	cout << m;






	return 0;
}
