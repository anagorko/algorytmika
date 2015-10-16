#include <iostream>
using namespace std;;

int main()
{
	string text;
	getline(cin, text);

	int i;
	for( i = 0; i < text.length(); i++){
		
		char z = text[i];
		if( z == 'a' || z == 'e' || z== 'i' || z== 'o' || z=='u' || z=='y'){
			cout << 'z';	
		}
		else{
			cout << text[i];
		}
	
	}
	cout << "\n";
	return 0;
}
