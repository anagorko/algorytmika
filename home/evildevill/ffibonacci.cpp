#include<iostream>
using namespace std;

int fibonacci(int n)
{

	int a, b, c;
	
	a = 0;
	b = 1;
	c = 0;

	for(int i=1; i <= n; i++)
	{
		a = b;
		b = c;
		c = a + b;
				
	}


	return c;
}

int main()
{
	int n;
	cin >> n;
	cout << fibonacci(n) << endl;

return 0;

}
