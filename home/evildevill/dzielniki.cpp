#include<iostream>
using namespace std;

int main()
{
	
	int n = 0;
	cin >> n;
	int d[n-1];

	for(int i = 0; i <=n; i++)
		{
			if(n%i==0)
				{
					d[i] = i;
				}
		}
	
	for(int j = 0; j <=n; j++)
		{
			cout << d[j] << "\n";
		}

return 0;

}
