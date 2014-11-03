#include <iostream>
using namespace std;


int main()
{
  int d;
  cin >> d;
  
  for(int i = 0; i < d; i++){
    int n;
    cin >> n;
    int l[n];
    
    for(int j = 0; j < n; j++){
      cin >> l[j];
    }
    for(int j = 1; j < n; j=j+2){
      cout << l[j] << " ";  
    }
    
    for(int j = 0; j < n; j = j+2){
      cout << l[j] << " ";
    }

    cout << "\n";     
  }  
  
  return 0;
}