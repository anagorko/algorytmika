#include<iostream>
using namespace std;

int main()
{
 int a, n;
  
  cout << "Ile razy ma być wyświetlony tekst?\n";
  cin >> n;
 
  cout << "FOR\n";

   for (a=1; a <= n; a++)
    {
     cout << "Witamy na pokładzie!\n";
    }
    
  a=1;

  cout << "WHILE\n"; 

   while (a <= n)
    {
     cout << "Witamy na pokładzie!\n";
     a++;
    }

  a=1;

  cout << "DO ... WHILE\n";

   do
    {
     cout << "Witamy na pokładzie!\n";
     a++;
    } 
   while (a <= n);


return 0;


}
