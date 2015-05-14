#include<iostream>

using namespace std;

bool is_square (int n)
{
	for(int i=1; i<n; i++)
		{
		if (i^2 == n)
			return true;
		}
	return false;
}

int main()
{
	int n;
	cin >> n;
	
	cout << is_square(n) << endl;

return 0;
}
