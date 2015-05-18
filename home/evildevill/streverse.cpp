#include<iostream>
using namespace std;

void reverse(string s)
{

	int n = s.length();
	string r;
	r.resize(n);

	for(int i=0; i<n; i++)
	{
		r[i]=s[i];
	}
	
	for(int j=0; j<n; j++)
	{
		cout << r[j];
	}

	
}

int main()
{

    string s;
    cin >> s;

	reverse(s);

return 0;

}
