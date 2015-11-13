#include<iostream>
using namespace std;




float sumaDafne (float a, float b){

	return a + 100*b; 
}




float sumaCleo (float a, float b){

	return a*b;
}




int main()
{
	
	float Dk = 100; 			// kapitał Dafne
	const float Dz = 0.1; 		// zysk Dafne
	
	
	
	float Ck = 100; 	 		// kapitał Cleo
	const float Cz = 1.05;      // zysk Cleo
	
	int t = 0;
	
	do{
	
		Dk = sumaDafne(Dk, Dz);
		
		cout << "Aktualny kapitał Dafne: " << Dk << "PLN  ";
	
	
		Ck = sumaCleo(Ck, Cz);
	
		cout << "Aktualny kapitał Cleo: " << Ck << "PLN" << endl;
	
	
	
		t++;
		
	}while(Dk > Ck);
	
	
	cout << endl << "inwestycje Cleo przekroczą inwestycje Dafne po " << t << " jednostkach czasu" << endl;

	return 0;
}

