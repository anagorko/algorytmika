#include<iostream>

using namespace std;

int l2 = 0;
int l3 = 0;

double power2(double x, int n)
{

	if(n==0)
		{
			return 1;
		}
		
	if(n > 0)
		{
			l2++;
			return x * power2(x, n-1);
		}	
		
}



double power3(double x, int n)
{

	if(n == 0)
		{
			return 1;
	}
	
	if(n%2==0)
		{
			l3++;
			double tmp = power3(x,n/2);			
			return tmp*tmp;
		}

	else
		{
			l3++;l3++;
			double tmp = power3(x, n/2);
			return x*tmp*tmp;
		}
}

int main()
{

double x;
double n;

cin >> x;
cin >> n;

cout << power2(x,n); cout << " " << l2 << endl;
cout << power3(x,n); cout << " " << l3;

return 0;

}
