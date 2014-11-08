#include<iostream>
using namespace std;
int main ()
{
int l; 
cout<< "Podaj rok:\n"; 
cin>>l;

if(l%400==0){cout<< "Rok jest przestepny\n";
	}else{
		if(l%100==0){cout << "Rok nie jest przestepny\n";
			}else{

				if(l%4==0){ 
					cout<<"Rok jest przestepny\n";
					}
						else{
						cout<<"Rok nie jest przestepny\n";
							}
				}
		}

return 0;

}