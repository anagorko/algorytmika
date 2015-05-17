#include<iostream>

using namespace std;

void swap(char &a, char &b)
{
	char c = a;
	a = b;
	b = c;

}

int main()
{
	char a, b;
	cin >> a;
	cin >> b;
	swap(a, b);
	cout << a << " " << b << "\n";


return 0;

}
