#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int tab[4];
   int count=0;
    for (int i = 0; i <4 ; ++i) {
        cin >> tab[i];
    }
    sort(tab,tab+4);
    for (int i = 0; i <4 ; ++i){
        if (tab[i]==tab[i+1])
            count++;
    }
    cout << count;
}