#include<iostream>
#include<string>
using namespace std;
int main ()
{
string palindrom, palindrom2;
cin >> palindrom;
int t= palindrom.size(), w=t-1, r=w;
/* 
for(int e=-1; e < r ; e++){
	palindrom2[e]=palindrom[w];
	w=w-1;
	}
*/
int e=0;
bool czy_palindrom = true;

do{
	palindrom2[e]=palindrom[w];
	w=w-1;
	e=e+1;
}while(e<t);

e=0;

do{
	if( palindrom[e] != palindrom2[e]){
		czy_palindrom = false;
		break;
		}
	e=e+1;
}while(e<t);






/*
bool czy_palindrom = true;
for(int e=-1; e < r; e++){
	if(!palindrom[e] != palindrom2[e]){
		czy_palindrom = false;
		break;
		}
	}
	*/
if (czy_palindrom){
	cout << "TAK" << endl;
	}else{
	cout << "NIE" << endl;
	}
/*
if(palindrom==palindrom2){
	cout << "TAK" << endl;
	}else{
	cout << "NIE" << endl;
	}
*/

return 0;
}