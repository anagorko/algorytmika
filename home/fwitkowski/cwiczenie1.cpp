#include<iostream>
using namespace std;


int main()
{
int a;
int b;
int c;
cin >> a;
cin >> b;				
c=a;
for(int i=1; i<=b-a; i++)
	c=c+(a+i);	

cout << c;


return 0;
}


