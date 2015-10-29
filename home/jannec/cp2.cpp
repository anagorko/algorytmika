#include<iostream>
using namespace std;
int main()
{

	float var = 1;
	float equ = 0;
	
	while(var != 0){
		
		cin >> var;
		
		equ += var;
		
		cout << "Aktualna suma to: " << equ << endl;
	
	}




	return 0;
}