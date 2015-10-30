#include<iostream>
using namespace std;
long long int power3(int x, int n)
{     
	if(n==0){
		return 1;
	}else if(n%2==0){
		double tmp = power3(x,n/2);
		
		return tmp*tmp;
	}else if(n%2==1){
		double tmp = power3(x,n/2);
		
		return x*tmp*tmp;
	}
}



int main()
{

int r; 
cin >> r;
int w=0;
int e[r];
while(w<=r){
	cin >> e[w];
	w++;
	}


int a=e[r-1], s=e[0];
int p[1000000];
int q[1000000];
int g=0;

w=a;

for(w; w>0; w=w-1){
	if(a%w==0){
		p[g]=w;
		g++;
		}
	}
int t=g-1;

g=0;

for(int h=0; h<s; h++){
	if(s%h==0){
		q[g]=h;
		g++;
		}
	}
	
int u=g-1;	
	
int z=t;
int x=u;		

int c=2*(z+x);
	

g=0;


int o[100000];
for(int re=0; re<t; re++){
	for(int er=0; er<u; er++){
		for(int uu = 0; uu<1; uu++){ 	
			for(int h=r; h>0; h=h-1){
				o[g]=h*power3(q[x], h)*power3(p[z], g);
				g++;
				}  
		
			g=0;
		
			int suma;
			for(int y=0; y<r; y++){
				suma=suma+o[g];
				g++;
				}
			g=0;
			if(suma==0){
				cout << q << "/" << p << " ";
				}
			q[z]=(-1)*q[z];	
			}
		x=x-1;
		}
	z=z-1;
	}

cout << endl;

return 0;
}