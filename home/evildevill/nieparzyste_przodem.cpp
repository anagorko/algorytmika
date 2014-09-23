#include<iostream>
using namespace std;

int main()
{
  
  int a = 0;
 

  for(a; a <= 100; a++)
   {
     if(a % 2)
       {
        cout << a << endl;
       }
    }

  a = 0; 

   for(a; a <= 100; a++)
   {
     if(!(a % 2))
       {
        cout << a << endl;
       }
    }

return 0;

}
