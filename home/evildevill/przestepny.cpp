#include<iostream>
using namespace std;

int main()
{
	int rok;
	cin >> rok;

		if (rok%4==0 || rok%400==0)
			{
				cout << "TAK\n";
			}
		else if (rok%100!=0)
			{
				cout << "NIE\n";
			}

return 0;

}
