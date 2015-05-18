#include<iostream>
using namespace std;
int main ()
{

int q,e=0, r=0;
cin >> q;
int w[q];


while(r<q){
	cin >> w[r];
	r++;
	}
	
for(r=0; r<q; r=r+2){
	cout << w[e] << " ";
	e=e+2;
	}

cout << endl;

e=1;	

for(r=0; r<(q-1); r=r+2){
	cout << w[e] << " ";
	e=e+2;
	}

cout << endl;

return 0;
}