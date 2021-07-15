#include <bits/stdc++.h>
using namespace std;

int main() {
 int number;
 cin >> number;
 int magnet,temp=0,cmpt=0;
    for (int i = 0; i <number ; ++i) {
        cin >> magnet;
        if (magnet != temp){
            cmpt++;
        }
        temp = magnet;
    }
    cout << cmpt << endl;
}
