#include<iostream>
using namespace std;

int main()
{

	string napis;

	cin >> napis;
	int i=0;
		for(napis.length(); i<=napis.length(); i++)
			{
				char z = napis[i];

				if(z == 'a' || z == 'e' || z == 'o' || z == 'u' || z == 'y')
					{
						z = 'z';
						cout << z;
					}
				else if(z == 'A' || z == 'E' || z == 'O' || z == 'U' || z == 'Y')
					{
						z = 'Z';
						cout << z;
					}					
				else
					{
						cout << z;
					}					
					
			}

			cout << "\n";	
		return 0;

}
