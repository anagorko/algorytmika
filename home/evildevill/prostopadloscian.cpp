#include<iostream>
using namespace std;

int main()
{

 int a, b, c;
 cout << "Podaj długość krawędzi a \n";
 cin >> a;
 cout << "Podaj długość krawędzi b \n";
 cin >> b;
 cout << "Podaj długość krawędzi c \n";
 cin >> c;
 cout << "Objętość prostopadłościanu wynosi " << ( a * b * c ) << endl;
 cout << "Pole powierzchni prostopadłościanu wynosi " << ((a*b*2)+(a*c*2)+(b*c*2)) << endl;

 return 0;

}

