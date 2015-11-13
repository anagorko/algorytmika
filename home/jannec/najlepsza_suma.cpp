#include<iostream>
using namespace std;


int main()
{

int e;
cin >> e;

int c[e];

int q=0;


	while(q < e){

		cin >> c[q];

		q++;
	
	}


int suma = c[0];
int sumap = 0;
	
	for(int w = 0; w < e; w++){

		sumap += c[w];


		if(sumap < 0){	
			
			sumap = 0;
		}
		
		if(sumap > suma){
		
			suma = sumap;
		}			 
			
	}
			
			
cout << "Najlepsza suma to " << suma << endl;


return 0;
}
