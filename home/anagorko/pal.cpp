#include<iostream>
using namespace std;

int main()
{
  string s;
  
  cin >> s;

  bool palindrom = true;
  
  for (int i = 0; i < s.length(); i++) {
    palindrom = palindrom && (s[s.length()-1-i] == s[i]);
  }
  
  if (palindrom) {
    cout << "TAK" << endl;
  } else {
    cout << "NIE" << endl;
  }
  
  return 0;
}
