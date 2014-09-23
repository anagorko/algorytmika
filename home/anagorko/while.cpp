#include<iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    
    cout << "Podaj n (n > 0): ";
    cin >> n;
    
    cout << "WHILE: \n";
    
    while (i <= n) {
        cout << "Witamy na pokładzie!\n";
        i++;
    }
    
    cout << "FOR: \n";
    
    for (i = 1; i <= n; i++) {
        cout << "Witamy na pokładzie!\n";        
    }
    
    cout << "DO .. WHILE: \n";
    
    i = 1;
    do {
        cout << "Witamy na pokładzie!\n";        
        i++;
    } while (i <= n);
        
    return 0;
}
