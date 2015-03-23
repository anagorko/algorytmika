#include<iostream>
using namespace std;

int main ()
{
int q, r=-1, y;
cin >> q;

int t[q];

int w;
cin >> w;
int e=0;
for( e=0; e<q; e++){
	cin >> t[e];
	}

e=-1;
do{
	e++;
	if(t[e]==w){
	y=e+1;
	
	}else{
	y=-1;
	}

} while(e < q-1 && t[e]!=w);

cout << y << " ";

e=0;
for(e=0; e<q; e++){
	if(t[e]==w){ 
	r=e+1;
	}
}
cout << r << endl;




return 0;
}
