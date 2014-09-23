#include<iostream>
using namespace std;

int main()
{

 int a, b, c;
  {
  
   cout << "Podaj wiek Adasia\n";  
   cin >> a;
   cout << "Podaj wiek Bartka\n";
   cin >> b;
   cout << "Podaj wiek Cezarego\n";
   cin >> c;
    
    if ((a+b+c) < 21)
     {
      cout << "Adaś, Bartek i Cezary mają w sumie mniej niż 21 lat" << endl;
     } 
    
    else if ((a+b+c) > 21)
     {
      cout << "Adaś, Bartek i Cezary mają w sumie więcej niż 21 lat" << endl;
     } else {
         cout << "Adaś, Bartek i Cezary mają w sumie równo 21 lat" << endl;
     }
  
   }

 return 0;

}
