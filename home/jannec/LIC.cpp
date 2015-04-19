#include<iostream>
#include<cmath>
using namespace std;
int main ()

{
int q, e;
bool pierwsza=true;
cin >> q;

for(int w=sqrt(q); w>1; w=w-1){
	e=q%w;
	if(e==0){
		pierwsza = false;
		break;
		}
	}

if (pierwsza){
	cout << "pierwsza" << endl;
	}else{
	cout << "zlozona" << endl;
	}




return 0;
}