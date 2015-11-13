#include<iostream>
using namespace std;



int main()
{
int n;
cin >> n;
int a[n];
int sum=0;
int najlepsza=0;
int i,j;
for(int i=0; i<=n;i++)
	cin >> a[i];

for(i=0;i<n;i++){
	for(j=i; j<n; j++) {
		sum=0;
			for(int k=i; k<j; k++){
			sum=sum+a[k];
			
			if(sum>najlepsza)
				najlepsza=sum;
				}
	}		
}
cout << najlepsza;


return 0;
}
