#include<iostream>
using namespace std;

int main()
{
  int n;
  int l[6];
  
  for (int i = 0; i < 6; i++) { l[i] = 0; }
  
  do {
    cin >> n;
    if (n == 0) break;

    l[n-1]++;
    
//    if (n == 1) { l[0]++; }
//    if (n == 2) { l[1]++; }     

  } while (n != 0);
  
  for (int j = 0; j < 5; j++) {
    for (int i = 0; i < 6; i++) {
      if (l[i] > j) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << "\n";
  }
  
  for (int i = 0; i < 6; i++) {
    cout << "Liczba " << (i+1) << ": ";
    for (int j = 0; j < l[i]; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  
  return 0;
}
