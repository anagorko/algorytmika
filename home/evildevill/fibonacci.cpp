#include<iostream>
using namespace std;

int main()
{

	int a, b, c;
	a = 1;
	b = 0;
	c = 0;
 	for (int i = 0; i <= 10; i++)
		{
			cout << a << " ";
			b = a + c;
			i++;
			cout << b << " ";
			c = a + b;
			i++;
			cout << c << " ";
			a = b + c;
		}


return 0;

}
