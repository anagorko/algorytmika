#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double s[n-1];
	int max;
	int min;

		for (int i=0; i<n; i++)
			{
				cin >> s[i];
					
					if(i==0)
						{
							min = s[i];
							max = s[i];				
						}
	
					if(s[i]<min)
						{
							min = s[i];
						}
					
					if(s[i]>max)
						{
							max = s[i];
						}	
			}
		
		cout << max - min << "\n";


return 0;

}
