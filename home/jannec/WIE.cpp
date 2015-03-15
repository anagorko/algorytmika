#include<iostream>
#include<cmath>
using namespace std;
int main ()
{

int r;
cin >> r;

int a, b, c, d, e, f, g, h, i, k, l, m, p;
a=r%19;
b=floor(r/100);
c=r%100;
d=floor(b/4);
e=b%4;
f=floor((b+8)/25);
g=floor((b-f+1)/3);
h=(19*a+b-d-g+15)%30;
i=floor(c/4);
k=c%4;
l=(32+2*e+2*i-h-k)%7;
m=floor((a+11*h+22*l)/451);
p=(h+l-7*m+114)%31;

int dzien, miesiac;
dzien=p+1;
miesiac=floor((h+l-7*m+114)/31);

cout << dzien << " " << miesiac << "\n";

return 0;
}