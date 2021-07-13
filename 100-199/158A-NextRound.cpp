#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int nbP,kPlace,cmp=0;
    cin >> nbP >> kPlace;
    int tab[nbP];

    for (int i = 0; i <nbP ; ++i) {
        cin >> tab[i];
    }
    for (int i = 0; i <nbP ; ++i) {
        if (tab[i]>=tab[kPlace-1] && tab[i]){
            cmp++;
        }
    }
    cout << cmp << endl;
}