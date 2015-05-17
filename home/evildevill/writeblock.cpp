#include<iostream>

using namespace std;

string writeLine(char znak, int n) {

	string line[n-1];
	int i = 0;
	
	for (i=0; i<n; i++)
		{
		line[i] = znak;
		}
	
	for (i=0; i<n; i++)
		{
		cout << line[i];
		}
}

string writeBlock(char znak, int n, int m)
{
	int i = 0;
	
	for(i=0; i < n; i++)
	{
	cout << writeLine(znak, n) << "\n";
	}
}

int main() {
	
	char znak;
	int n = 0;
	int m = 0;
	cin >> znak;
	cin >> n;
	cin >> m;

	writeBlock(znak, n, m);

return 0;

}
