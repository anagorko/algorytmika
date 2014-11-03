#include<iostream>
using namespace std;

int main()
{
  int ile[10];
  int m=0 ;
  for(int i = 0; i < 10; i++ ){
     cout << "Ile zjadła osoba nr " << (i + 1) << " :";
     cin >> ile[i];
  }
  for(int i = 0; i < 10; i++)
  {
    if(ile[i] > m)
    {
      m = ile[i];
    }
  }  
  cout << "Najwiecej zjedli: ";
  
  bool pierwszy = true;
   
  for(int i = 0; i < 10; i++){
    if(ile[i] == m){
       if (pierwszy) {
         cout << (i + 1);
       } else {
         cout << ", " << (i + 1);
       }
       pierwszy = false;
    }
  }
  cout << ".\n";
  
  return 0;
}
