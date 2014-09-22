#include<iostream>
using namespace std;

int main()
{

 int a, b;
  {
  
  cout << "Podaj pierwszą liczbę\n";  
  cin >> a;
  cout << "Podaj drugą liczbę\n";
  cin >> b;
    
   if (a>b)
    {
     cout << "Liczba " << a << " jest większa od liczby " << b << endl;
     }
    
   else
    {
     cout << "Liczba " << b << " jest większa od liczby " << a << endl;
    }
  
   }

return 0;

}
