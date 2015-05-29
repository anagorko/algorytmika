#include<iostream>
using namespace std;
long long int power3(int x, int n)
{     
	if(n==0){
		return 1;
	}else if(n%2==0){
		double tmp = power3(x,n/2);
		l3++;
		return tmp*tmp;
	}else if(n%2==1){
		double tmp = power3(x,n/2);
		l3++;
		l3++;
		return x*tmp*tmp;
	}
}
int main()
{

int r; 
cin >> r;
int w=0;
int e[r];
while(w=<r){
	cin >> e[w];
	w++;
	}



int a=e[r-1], s=e[0];
int p[1000000];
int q[1000000];
int g=0;

for(w; w>0; w=w-1){
	if(a%w==0){
		p[g]=a;
		g++;
		}
	}
g=0;

for(int h=0; h<s; h++){
	if(s%h==0){
		q[g]=s;
		g++;
		}
	}
int z=p.lenght();
int x=q.lenght();		

int c=2*(z+x);
	
//int pp[c];
g=0;

//for(int h=0; h<x ;h++){
//	for(int j=0; j<z; j++){
//		pp[g]=q[j]/p[h];
//		}
//}	
string o;

for(int h=r; h>0; h=h-1){
	o[g]=h*power3(q[z], h)*power3(p[x], g);
	g++;
	}  

int i=0;

for(){
	i=i




return 0;
}