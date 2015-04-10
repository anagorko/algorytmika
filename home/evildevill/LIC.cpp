#include<iostream>

using namespace std;

int main()
{

int n;
bool liczba = false;

cin >> n;

	for (int i = 2; i < n; i++)
		{
			if (n%i==0)
				{
					liczba = true;
				}
		}
	
	if (liczba==true)
		{
			cout << "złożona\n";
		}
		else
		{
			cout << "pierwsza\n";
		}

}
