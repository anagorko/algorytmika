#include<iostream>
using namespace std;

const int dziedziniec = 1;
const int kuchnia = 2;
const int zbrojownia = 3;
const int loch = 4;

struct stan {
  int polozenie;   // 1 .. 4
  int klapa;       // 1 - zamkn, 2 - otw
};

struct stan s;

void look()
{
  if (s.polozenie == dziedziniec) {
    cout << "Dziedziniec zamkowy." << endl
         << endl
         << "Jestes na dziedzincu. Na polnoc widzisz ciezkie drzwi, na wschod wejscie do kuchni." << endl;
  } else if (s.polozenie == kuchnia) {
    cout << "Kuchnia." << endl
         << endl
         << "Jestes w kuchni." << endl;
  } else if (s.polozenie == zbrojownia) {
    cout << "Zbrojownia." << endl;
  }
}

void command(string p)
{
  if (s.polozenie == dziedziniec) {
    if (p == "n") {
      s.polozenie = zbrojownia;
    }
    if (p == "e") {
      s.polozenie = kuchnia;
    }
  } else if (s.polozenie == kuchnia) {
    if (p == "w") {
      s.polozenie = dziedziniec;
    }
  } else if (s.polozenie == zbrojownia) {
  }
}

int main()
{
  s.polozenie = dziedziniec;
  s.klapa = 1;

  while (true) {
    look();
    
    cout << ">";
    string p;
    cin >> p;
    
    command(p);
  }  
}
