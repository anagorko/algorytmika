#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  cout << n << "\n";
  
  for (int i = 0; i < n; i++) {
    cout << rand() << " ";
  }
  cout << "\n";
  
  return 0;
}
