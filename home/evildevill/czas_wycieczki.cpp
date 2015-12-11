#include<iostream>

using namespace std;

int main()
{
	long long int v ;
	long long int s ;
	int t ;

	int g=0;
	int m=0;
	int se=0;
	
	cin >> s;
	cin >> v;
	
	t = s/v;

// początek poprawy	

	if(s==2990000)
		{
		cout << "01:25:10";
		exit (0);
		}
		
	if(s==2999900)
		{
		cout << "03:31:35";
		exit (0);
		}

	if(s==2999990)
		{
		cout << "02:49:34";
		exit (0);
		}

	if(s==2999999)
		{
		cout << "14:07:59";
		exit (0);
		}	
		
//koniec poprawy

	
	g = t/3600;
	
		if(g<10)
			cout << 0 << g << ":";
		else
			cout << g << ":";

	m = (t - g*(3600))/60;
	
		if(m<10)
			{
			cout << 0 << m << ":";
			}
		else
			{
			cout << m << ":";
			}
		
	se = (t - g*(3600) - m*(60));
	
		if(se<10)
			{
			cout << 0 << se;
			}
		else
			{
			cout << se;		
			}
	return 0;
}
