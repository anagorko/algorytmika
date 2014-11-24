#include<iostream>
using namespace std;

const int szer = 13;
const int wys = 13;

int main() {
    int t[wys][szer];

    for (int w = 0; w < wys; w++) {
        for (int k = 0; k < szer; k++) {
            t[w][k] = 0;
        }
    }

    t[0][0] = 1;
    t[2][3] = 1;
    
    for (int w = 0; w < wys; w++) {
        for (int k = 0; k < szer; k++) {
            cout << t[w][k] << " ";
        }
        cout << "\n";
    }

    return 0;
}
