#include<iostream>
using namespace std;

struct wymierna {
  int l,m;
};

wymierna operator+(wymierna a, wymierna b)
{
  wymierna w;

  w.m = a.m * b.m;
  w.l = a.l * b.m + a.m * b.l;

  return w;
}

wymierna dodaj(wymierna a, wymierna b)
{
  wymierna w;

  w.m = a.m * b.m;
  w.l = a.l * b.m + a.m * b.l;

  return w;
}

int main()
{
  wymierna a;
  wymierna b;
  
  a.l = 1; a.m = 2;
  b.l = 1; b.m = 3;
  
  wymierna c = a + b;
  
  cout << c.l << "/" << c.m << endl;
}
