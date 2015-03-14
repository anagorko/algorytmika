#include<iostream>
using namespace std;

int main()
{
  int n;
  
  cin >> n;
  
  int t[n];

  for (int i = 0; i < n; i++) { 
    cin >> t[i];
  }

  cout << "Przed posortowaniem: ";
  for (int i = 0; i < n; i++) {
    cout << t[i] << " ";
  }
  cout << "\n";
  
  // Bubble sort
  
  for (int j = 0; j < n - 1; j++) {
    bool byla_zmiana = false;
    
    for (int i = 0; i <= n - 2; i++) {
      if (t[i] > t[i + 1]) {
        int a;
        a = t[i];
        t[i] = t[i+1];
        t[i+1] = a;
        byla_zmiana = true;
      }
    }
    
    if (!byla_zmiana) break;
  }
    
  cout << "Po posortowaniu: ";
  for (int i = 0; i < n; i++) {
    cout << t[i] << " ";
  }
  cout << "\n";
  
  
  return 0;
}