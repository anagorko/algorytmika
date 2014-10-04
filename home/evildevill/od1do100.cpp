#include<iostream>
using namespace std;

int main()
{

	int a = 1;

		for (int i=1; i<=100; i++) 	
			{
				cout << a;
					if(a<=10)
						{
						cout << " " << " ";
						}		
					else
						{
						cout << " ";
						}		
						
						if (a % 10 <= 0)
							{
							cout << "\n";
							}
				a++;
			}

	return 0;
}
