#include <iostream>
using namespace std;

int main()
{
	int d;
	cin >> d;

	int n;
	cin >> n;
	int c[d];
	int p =-1;
	int q =-1;
	for(int i=0; i<d; i++){

		cin >> c[i];
		if(c[i]==n){
			if(p==-1){
				p=i+1;
			}
			
			q=i+1;
					
		}




	}

	cout << p <<endl;
	
	cout << q << endl;

	return 0;
}
