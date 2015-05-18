#include<iostream>

using namespace std;

string writeLine(char znak, int n) {

	string line[n-1];
	int i;
	
	for (i=0; i<n; i++)
		{
		line[i] = znak;
		}
	
	for (i=0; i<n; i++)
		{
		cout << line[i];
		}
}

int main() {
	
	char znak;
	int n;
	cin >> znak;
	cin >> n;

	writeLine(znak, n);

return 0;

}
