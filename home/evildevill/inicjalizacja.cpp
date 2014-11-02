#include<iostream>
using namespace std;

int main()
{

	int t[] = {1,3,10, 15, 22, 69, 88, 112, 135, 170};
	
		for (unsigned int i = 0; i < sizeof(t)/sizeof(int); i++) 
		{
    		cout << t[i] << "\n";
		}


return 0;


}
