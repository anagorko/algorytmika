#include<iostream>
#include<math.h>
using namespace std;

int main()
{

 float r;

 cout << "Podaj promień koła/okręgu \n";
 cin >> r ;
 cout << "Promień okręgu wynosi " << (2 * M_PI * r) << "\n";
 cout << "Pole koła wynosi " << (M_PI * r * r) << "\n";

 return 0;

}
